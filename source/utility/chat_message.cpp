#include "utility/chat_message.h"

std::string ChatMessage::parseQuotes(std::string string, std::string textColor)
{
	int indexFirst = string.find("\"");
	int indexLast = string.find_last_of("\"");

	if (indexFirst != std::string::npos && indexLast != std::string::npos && indexLast > indexFirst)
	{
		string.insert(indexFirst, Color::DARK_AQUA).insert(indexLast + 3, textColor); // "'something'" -> "§3'something'§f"
	}

	return string;
}

std::string ChatMessage::createSpaces(std::string string, bool separatorOffset, bool createSpaces)
{
	std::string result;
	if (!createSpaces) return result;

	int length = (int)((string.length() - (string.length() - std::regex_replace(string, std::regex(Color::COLOR_CHAR), "").length()) * 2) * 1.4); // "§3just §4template" -> "3just 4template"
	if (separatorOffset) length += 2;

	for (int i = 0; i < length; i++)
	{
		result += " ";
	}

	return result;
}