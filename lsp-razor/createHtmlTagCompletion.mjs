export function createHtmlTagCompletion(tagName) {
  return {
    label: tagName,
    kind: 10,
    detail: "HTML element",
    sortText: `html-tag-${tagName}`,
    data: { source: "zed-razor-html" },
  };
}
