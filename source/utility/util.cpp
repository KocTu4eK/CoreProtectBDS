#include "utility/util.h"

std::string Util::capitalize(std::string string, bool allWords)
{
	if (string.empty()) return string;

	if (string.size() <= 1)
	{
		for (auto& c : string) c = std::toupper(c);
		return string;
	}

	for (auto& c : string) c = std::tolower(c);

	if (allWords)
	{
		std::string builder;

		std::vector<std::string> splitted;
		std::istringstream stream(string);
		std::string element;
		while (std::getline(stream, element, ' ')) splitted.push_back(element);

		for (std::string substring : splitted)
		{
			if (substring.size() >= 3 && !substring._Equal("and") && !substring._Equal("the"))
			{
				substring = substring.substr(0, 1);
				for (auto& c : substring) c = std::toupper(c);
				substring += substring.substr(1);
			}
			if (builder.size() > 0) builder.append(" ");
			builder.append(substring);
		}

		return builder;
	}

	string = string.substr(0, 1);
	for (auto& c : string) c = std::toupper(c);
	return string + string.substr(1);
}
