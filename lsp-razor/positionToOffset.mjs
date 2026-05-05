export function positionToOffset(text, position) {
  const line = Number(position.line);
  const character = Number(position.character);
  if (
    !Number.isInteger(line) ||
    !Number.isInteger(character) ||
    line < 0 ||
    character < 0
  ) {
    return undefined;
  }

  let offset = 0;
  let currentLine = 0;
  while (currentLine < line) {
    const nextLine = text.indexOf("\n", offset);
    if (nextLine === -1) {
      return text.length;
    }
    offset = nextLine + 1;
    currentLine += 1;
  }

  return Math.min(offset + character, text.length);
}
