import { isBooleanHtmlAttribute } from "./isBooleanHtmlAttribute.mjs";

export function createHtmlAttributeCompletion(attributeName) {
  const isBoolean = isBooleanHtmlAttribute(attributeName);
  return {
    label: attributeName,
    kind: 10,
    detail: "HTML attribute",
    insertText: isBoolean ? attributeName : `${attributeName}="$1"`,
    insertTextFormat: isBoolean ? 1 : 2,
    sortText: `html-attr-${attributeName}`,
    data: { source: "zed-razor-html" },
  };
}
