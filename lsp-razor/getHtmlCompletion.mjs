import { createHtmlAttributeCompletion } from "./createHtmlAttributeCompletion.mjs";
import { createHtmlTagCompletion } from "./createHtmlTagCompletion.mjs";
import { getHtmlAttributeNames } from "./getHtmlAttributeNames.mjs";
import { getHtmlCompletionContext } from "./getHtmlCompletionContext.mjs";
import { positionToOffset } from "./positionToOffset.mjs";
import { htmlDocuments, HTML_TAGS } from "./proxy.mjs";

export function getHtmlCompletion(params) {
  const documentUri = params?.textDocument?.uri;
  const checksum = params?.checksum;
  const request = params?.request ?? {};
  const htmlText =
    documentUri && checksum
      ? htmlDocuments.get(`${documentUri}:${checksum}`)
      : undefined;
  const position = request.position ?? params?.position;
  const offset =
    typeof htmlText === "string" && position
      ? positionToOffset(htmlText, position)
      : undefined;
  const context =
    typeof htmlText === "string" && offset !== undefined
      ? getHtmlCompletionContext(htmlText, offset)
      : { kind: "tag" };

  if (context.kind === "attribute-value") {
    return { isIncomplete: false, items: [] };
  }

  if (context.kind === "attribute") {
    return {
      isIncomplete: false,
      items: getHtmlAttributeNames(context.tagName).map(
        createHtmlAttributeCompletion,
      ),
    };
  }

  return {
    isIncomplete: false,
    items: HTML_TAGS.map(createHtmlTagCompletion),
  };
}
