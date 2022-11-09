#include "language/selector.h"

const std::set<std::string> Selector::SELECTORS = { "{1}", "{2}", "{3}", "{4}"};

std::string Selector::processSelection(std::string output, std::string param, std::string color)
{
	std::string substring = output;
	
	try { substring = substring.substr(substring.find("{") + 1, substring.find("}") - (substring.find("{") + 1)); }
	catch (std::exception) { substring = ""; } // "{something}" -> "something" 

	if (substring.find("|") != std::string::npos)
	{
		int selector = std::stoi(param.substr(1, 2)) - 1; // "{1}" -> 0
		int index = Selector::substring(substring, "|", selector);

		if (index == -1) param = substring.substr(0, substring.find("|")); // [0] or [1] or not "|" -> "{1}"
		else param = substring.substr(index + 1, (substring.find_last_of("|") > index ? Selector::substring(substring, "|", selector + 1) : substring.length())); // [2] = "1|2|3" -> "2"

		output.replace(output.find("{" + substring + "}"), std::string("{" + substring + "}").length(), color + param + (color.length() > 0 ? Color::WHITE : color));
	}

	return output;
}

size_t Selector::substring(std::string string, std::string search, int index)
{
	size_t result = string.find("|");
	if (result == std::string::npos || !index) return -1;

	for (int i = 1; i < index; i++)
	{
		result = string.find("|", result + 1);
		if (result == std::string::npos) return -1;
	}

	return result;
}
