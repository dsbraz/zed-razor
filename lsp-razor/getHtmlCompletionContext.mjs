import { isInsideQuotedAttributeValue } from "./isInsideQuotedAttributeValue.mjs";

export function getHtmlCompletionContext(htmlText, offset) {
  const before = htmlText.slice(0, offset);
  const lastLt = before.lastIndexOf("<");
  const lastGt = before.lastIndexOf(">");

  if (lastLt <= lastGt) {
    return { kind: "tag" };
  }

  const fragment = before.slice(lastLt + 1);
  if (isInsideQuotedAttributeValue(fragment)) {
    return { kind: "attribute-value" };
  }

  if (/^\/?\s*[\w:-]*$/.test(fragment)) {
    return { kind: "tag" };
  }

  const tagName = /^\/?\s*([A-Za-z][\w:-]*)/.exec(fragment)?.[1]?.toLowerCase();
  if (
    !tagName ||
    fragment.trimStart().startsWith("!") ||
    fragment.trimStart().startsWith("?")
  ) {
    return { kind: "tag" };
  }

  return { kind: "attribute", tagName };
}
