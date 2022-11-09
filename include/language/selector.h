#pragma once
#include "pch.h"
#include "utility/color.h"

class Selector
{
	static size_t substring(std::string string, std::string search, int index);

public:
	Selector() = delete;

protected:
	static const std::set<std::string> SELECTORS;

	static std::string processSelection(std::string output, std::string param, std::string color);
};
