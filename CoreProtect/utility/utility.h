#pragma once
#include "../pch.h"
#include "../resource.h"

extern Logger logger;

namespace Utility
{
	void createConfig();
	void createLang(const std::string lang);
}