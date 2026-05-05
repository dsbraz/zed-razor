#!/usr/bin/env node

import fs from "node:fs";
import path from "node:path";
import { spawn } from "node:child_process";
import { pathToFileURL } from "node:url";

const DEFAULT_EXCLUDED_DIRS = new Set([
  ".git",
  ".hg",
  ".svn",
  ".vs",
  ".vscode",
  "bin",
  "obj",
  "node_modules",
  "target",
]);

const HTML_FALLBACK_RESULTS = new Map([
  ["textDocument/colorPresentation", []],
  ["textDocument/completion", { isIncomplete: false, items: [] }],
  ["textDocument/definition", []],
  ["textDocument/documentColor", []],
  ["textDocument/documentHighlight", []],
  ["textDocument/foldingRange", []],
  ["textDocument/formatting", []],
  ["textDocument/hover", null],
  ["textDocument/implementation", []],
  ["textDocument/onTypeFormatting", []],
  ["textDocument/reference", []],
  ["textDocument/signatureHelp", null],
]);

const options = parseArgs(process.argv.slice(2));
const logFile = options.log ? path.resolve(options.log) : undefined;
const workspaceRoot = options.workspace ? path.resolve(options.workspace) : process.cwd();
const htmlDocuments = new Map();
const pendingServerRequests = new Map();
let nextProxyRequestId = 1;
let serverExited = false;
let workspaceOpened = false;

if (!options.server) {
  fatal("Missing required --server argument");
}

const server = spawn(options.server, options.serverArgs, {
  cwd: workspaceRoot,
  env: process.env,
  stdio: ["pipe", "pipe", "pipe"],
  windowsHide: true,
});

log(`Starting Roslyn: ${options.server} ${options.serverArgs.join(" ")}`);
log(`Workspace root: ${workspaceRoot}`);

server.stderr.on("data", (chunk) => {
  log(`[roslyn stderr] ${chunk.toString("utf8").trimEnd()}`);
});

server.on("error", (error) => {
  log(`[roslyn error] ${error.stack ?? error.message}`);
  process.exitCode = 1;
});

server.on("exit", (code, signal) => {
  serverExited = true;
  log(`Roslyn exited with code=${code ?? "null"} signal=${signal ?? "null"}`);
  if (!process.exitCode) {
    process.exitCode = code ?? 0;
  }
  process.exit();
});

createLspReader(process.stdin, handleClientMessage, "client");
createLspReader(server.stdout, handleServerMessage, "server");

process.stdin.on("end", () => {
  log("Client stdin ended");
  stopServer();
});

process.on("SIGINT", () => {
  stopServer();
  process.exit(130);
});

process.on("SIGTERM", () => {
  stopServer();
  process.exit(143);
});

function parseArgs(args) {
  const parsed = {
    workspace: undefined,
    log: undefined,
    server: undefined,
    serverArgs: [],
  };

  for (let index = 0; index < args.length; index += 1) {
    const arg = args[index];
    if (arg === "--") {
      parsed.serverArgs = args.slice(index + 1);
      break;
    }
    if (arg === "--workspace") {
      parsed.workspace = args[++index];
      continue;
    }
    if (arg === "--log") {
      parsed.log = args[++index];
      continue;
    }
    if (arg === "--server") {
      parsed.server = args[++index];
      continue;
    }
    fatal(`Unknown argument: ${arg}`);
  }

  return parsed;
}

function createLspReader(stream, onMessage, peerName) {
  let buffer = Buffer.alloc(0);

  stream.on("data", (chunk) => {
    buffer = Buffer.concat([buffer, chunk]);

    while (true) {
      const headerEnd = buffer.indexOf("\r\n\r\n");
      if (headerEnd === -1) {
        return;
      }

      const header = buffer.subarray(0, headerEnd).toString("ascii");
      const lengthMatch = /^Content-Length:\s*(\d+)$/im.exec(header);
      if (!lengthMatch) {
        log(`[${peerName}] Invalid LSP header: ${JSON.stringify(header)}`);
        buffer = buffer.subarray(headerEnd + 4);
        continue;
      }

      const contentLength = Number(lengthMatch[1]);
      const messageStart = headerEnd + 4;
      const messageEnd = messageStart + contentLength;
      if (buffer.length < messageEnd) {
        return;
      }

      const payload = buffer.subarray(messageStart, messageEnd).toString("utf8");
      buffer = buffer.subarray(messageEnd);

      try {
        onMessage(JSON.parse(payload));
      } catch (error) {
        log(`[${peerName}] Failed to parse JSON-RPC payload: ${error.message}`);
      }
    }
  });

  stream.on("error", (error) => {
    log(`[${peerName}] Stream error: ${error.stack ?? error.message}`);
  });
}

function handleClientMessage(message) {
  if (message?.method === "initialize") {
    const rootFromClient = getRootFromInitialize(message.params);
    if (rootFromClient) {
      log(`Client initialize root: ${rootFromClient}`);
    }
  }

  writeMessage(server.stdin, message);

  if (message?.method === "initialized") {
    setTimeout(openWorkspaceInRoslyn, 0);
  }

  if (message?.method === "exit") {
    setTimeout(stopServer, 250);
  }
}

function handleServerMessage(message) {
  if (isResponse(message) && pendingServerRequests.has(String(message.id))) {
    const pending = pendingServerRequests.get(String(message.id));
    pendingServerRequests.delete(String(message.id));
    pending(message);
    return;
  }

  if (!message?.method) {
    writeMessage(process.stdout, message);
    return;
  }

  if (handleRoslynServerRequest(message)) {
    return;
  }

  writeMessage(process.stdout, message);
}

function handleRoslynServerRequest(message) {
  const hasId = Object.hasOwn(message, "id");

  if (message.method === "razor/log") {
    const logMessage = message.params?.message ?? JSON.stringify(message.params);
    log(`[razor] ${logMessage}`);
    if (hasId) {
      respondToServer(message.id, true);
    }
    return true;
  }

  if (message.method === "razor/updateHtml") {
    const documentUri = message.params?.textDocument?.uri;
    const checksum = message.params?.checksum;
    const text = message.params?.text;
    if (documentUri && checksum && typeof text === "string") {
      htmlDocuments.set(`${documentUri}:${checksum}`, text);
      log(`Updated generated HTML for ${documentUri}`);
    }
    if (hasId) {
      respondToServer(message.id, false);
    }
    return true;
  }

  if (message.method === "workspace/projectInitializationComplete") {
    log("Roslyn project initialization complete");
    if (hasId) {
      respondToServer(message.id, null);
    }
    return true;
  }

  if (message.method === "workspace/_roslyn_projectNeedsRestore") {
    if (!hasId) {
      return true;
    }

    respondToServer(message.id, null);
    requestServer("workspace/_roslyn_restore", message.params ?? {})
      .then((response) => {
        if (response.error) {
          log(`Roslyn restore failed: ${JSON.stringify(response.error)}`);
        } else {
          log("Roslyn restore completed");
        }
      })
      .catch((error) => {
        log(`Roslyn restore request failed: ${error.message}`);
      });
    return true;
  }

  if (HTML_FALLBACK_RESULTS.has(message.method) && isRazorHtmlForward(message.params)) {
    log(`Using HTML fallback for ${message.method}`);
    if (hasId) {
      respondToServer(message.id, HTML_FALLBACK_RESULTS.get(message.method));
    }
    return true;
  }

  return false;
}

function openWorkspaceInRoslyn() {
  if (workspaceOpened) {
    return;
  }
  workspaceOpened = true;

  const discovery = discoverWorkspace(workspaceRoot);
  if (discovery.solution) {
    log(`Opening solution: ${discovery.solution}`);
    writeMessage(server.stdin, {
      jsonrpc: "2.0",
      method: "solution/open",
      params: {
        solution: pathToFileURL(discovery.solution).href,
      },
    });
    return;
  }

  if (discovery.projects.length > 0) {
    log(`Opening projects: ${discovery.projects.join(", ")}`);
    writeMessage(server.stdin, {
      jsonrpc: "2.0",
      method: "project/open",
      params: {
        projects: discovery.projects.map((projectPath) => pathToFileURL(projectPath).href),
      },
    });
    return;
  }

  log("No .sln/.slnx/.csproj found to open in Roslyn");
}

function discoverWorkspace(root) {
  const solutions = [];
  const projects = [];
  const stack = [{ directory: root, depth: 0 }];
  const maxDepth = 12;

  while (stack.length > 0) {
    const current = stack.pop();
    let entries;
    try {
      entries = fs.readdirSync(current.directory, { withFileTypes: true });
    } catch (error) {
      log(`Skipping unreadable directory ${current.directory}: ${error.message}`);
      continue;
    }

    for (const entry of entries) {
      const fullPath = path.join(current.directory, entry.name);
      if (entry.isDirectory()) {
        if (!DEFAULT_EXCLUDED_DIRS.has(entry.name) && current.depth < maxDepth) {
          stack.push({ directory: fullPath, depth: current.depth + 1 });
        }
        continue;
      }

      if (!entry.isFile()) {
        continue;
      }

      if (entry.name.endsWith(".sln") || entry.name.endsWith(".slnx")) {
        solutions.push(fullPath);
      } else if (entry.name.endsWith(".csproj")) {
        projects.push(fullPath);
      }
    }
  }

  solutions.sort(compareProjectPath);
  projects.sort(compareProjectPath);

  return {
    solution: solutions[0],
    projects,
  };
}

function compareProjectPath(left, right) {
  const leftDepth = left.split(path.sep).length;
  const rightDepth = right.split(path.sep).length;
  if (leftDepth !== rightDepth) {
    return leftDepth - rightDepth;
  }
  return left.localeCompare(right);
}

function requestServer(method, params) {
  const id = `razor-proxy:${nextProxyRequestId++}`;
  const request = { jsonrpc: "2.0", id, method, params };

  return new Promise((resolve, reject) => {
    const timeout = setTimeout(() => {
      pendingServerRequests.delete(id);
      reject(new Error(`Timed out waiting for Roslyn response to ${method}`));
    }, 120_000);

    pendingServerRequests.set(id, (response) => {
      clearTimeout(timeout);
      resolve(response);
    });

    writeMessage(server.stdin, request);
  });
}

function respondToServer(id, result) {
  writeMessage(server.stdin, {
    jsonrpc: "2.0",
    id,
    result,
  });
}

function respondToServerError(id, error) {
  writeMessage(server.stdin, {
    jsonrpc: "2.0",
    id,
    error,
  });
}

function writeMessage(stream, message) {
  const payload = JSON.stringify(message);
  const header = `Content-Length: ${Buffer.byteLength(payload, "utf8")}\r\n\r\n`;
  stream.write(header + payload, "utf8");
}

function isResponse(message) {
  return message && !message.method && Object.hasOwn(message, "id");
}

function isRazorHtmlForward(params) {
  return Boolean(params?.textDocument?.uri && params?.checksum && params?.request);
}

function getRootFromInitialize(params) {
  const folderUri = params?.workspaceFolders?.[0]?.uri;
  if (folderUri) {
    return folderUri;
  }
  return params?.rootUri ?? params?.rootPath;
}

function stopServer() {
  if (serverExited) {
    return;
  }
  serverExited = true;
  server.kill();
}

function log(message) {
  if (!logFile) {
    return;
  }

  try {
    fs.mkdirSync(path.dirname(logFile), { recursive: true });
    fs.appendFileSync(logFile, `${new Date().toISOString()} ${message}\n`, "utf8");
  } catch {
    // Never write logs to stdout: stdout is reserved for LSP framing.
  }
}

function fatal(message) {
  process.stderr.write(`razor-lsp-proxy: ${message}\n`);
  process.exit(1);
}
