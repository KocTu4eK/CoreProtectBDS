#pragma once
#include "pch.h"
#include "language.h"
#include "selector.h"
#include "utility/chat_message.h"
#include "utility/color.h"
#include "utility/util.h"

class Phrase : protected Selector, protected Language
{
	static const std::set<Phrases> HEADERS;
	static const std::set<std::string> COLORS;
	static const std::string split;

public:
	static std::string build(Phrases phrase, std::vector<std::string> params);
	static std::string buildInternal(Phrases phrase, std::vector<std::string> params, std::string color);
	static std::string getPhraseSelector(Phrases phrase, std::string selector);
};
