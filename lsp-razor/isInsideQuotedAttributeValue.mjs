export function isInsideQuotedAttributeValue(fragment) {
  let quote = undefined;
  for (const char of fragment) {
    if (quote) {
      if (char === quote) {
        quote = undefined;
      }
      continue;
    }

    if (char === '"' || char === "'") {
      quote = char;
    }
  }

  return quote !== undefined;
}
