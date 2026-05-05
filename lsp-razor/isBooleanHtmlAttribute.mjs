import { HTML_BOOLEAN_ATTRIBUTES } from "./proxy.mjs";

export function isBooleanHtmlAttribute(attributeName) {
  return HTML_BOOLEAN_ATTRIBUTES.has(attributeName);
}
