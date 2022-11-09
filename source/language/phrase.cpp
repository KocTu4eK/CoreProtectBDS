#include "language/phrase.h"

const std::set<Phrases> Phrase::HEADERS = { Phrases::CONTAINER_HEADER, Phrases::HELP_HEADER, Phrases::INTERACTIONS_HEADER, Phrases::LOOKUP_HEADER, Phrases::SIGN_HEADER, Phrases::UPDATE_HEADER };
const std::set<std::string> Phrase::COLORS = { Color::WHITE, Color::DARK_AQUA };
const std::string Phrase::split = "-";

std::string Phrase::build(Phrases phrase, std::vector<std::string> params)
{
	std::string output = Language::getTranslatedPhrase(phrase);
	std::string color;
	
	if (*HEADERS.find(phrase) == phrase) output = Util::capitalize(output, true);

	int index = 0;
	int indexExtra = 0;
	for (std::string param : params)
	{
		if (index == 0 && *COLORS.find(param) == param)
		{
			color = param;
			indexExtra++;
			continue;
		}

		if (*Selector::SELECTORS.find(param) == param)
		{
			output = Selector::processSelection(output, param, color);
			indexExtra++;
			continue;
		}

		if (output.find("{" + std::to_string(index) + "}") != std::string::npos)
		{
			output = output.replace(output.find("{" + std::to_string(index) + "}"), std::string("{" + std::to_string(index) + "}").length(), param);
			index++;
		}
	}

	if ((index + indexExtra) != params.size()) output = buildInternal(phrase, params, color);

	if (color.length() > 0)
	{
		if (output.find(split) != std::string::npos) output = output.replace(output.find(split), split.length(), split + color);
		output = ChatMessage::parseQuotes(output, color);
	}

	return output;
}

std::string Phrase::buildInternal(Phrases phrase, std::vector<std::string> params, std::string color)
{
	std::string output = Language::getPhrase(phrase);

	int index = 0;
	for (std::string param : params)
	{
		if (index == 0 && *COLORS.find(param) == param) continue;

		if (*Selector::SELECTORS.find(param) == param)
		{
			output = Selector::processSelection(output, param, color);
			continue;
		}

		output = output.replace(output.find("{" + std::to_string(index) + "}"), std::string("{" + std::to_string(index) + "}").length(), param);
		index++;
	}

	return output;
}

std::string Phrase::getPhraseSelector(Phrases phrase, std::string selector)
{
	std::string translatedPhrase = Language::getTranslatedPhrase(phrase);
	std::regex phrasePattern("\\{[a-zA-Z| ]+\\}");
	std::smatch patternMatch;

	std::string match;

	if (std::regex_search(translatedPhrase, patternMatch, phrasePattern))
	{
		for (std::string symbol : patternMatch) match += symbol;
		match = Selector::processSelection(match, selector, "");
	}

	return match;
}
