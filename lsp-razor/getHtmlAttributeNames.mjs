import { HTML_TAG_ATTRIBUTES, HTML_GLOBAL_ATTRIBUTES } from "./proxy.mjs";

export function getHtmlAttributeNames(tagName) {
  const tagAttributes = HTML_TAG_ATTRIBUTES[tagName] ?? [];
  return [...new Set([...HTML_GLOBAL_ATTRIBUTES, ...tagAttributes])].sort();
}
