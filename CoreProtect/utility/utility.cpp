#pragma once
#include "utility.h"

void Utility::createConfig()
{
	std::ifstream iConfig("./plugins/CoreProtect/config.yml");
	int configSize = iConfig.tellg();
	iConfig.close();

	if (!configSize || configSize == -1)
	{
		std::cout << "a";
		HRSRC hRsrc = FindResource(NULL, (LPCWSTR)CONFIG, L"YAML");
		if (hRsrc)
		{
			HGLOBAL hGlob = LoadResource(NULL, hRsrc);
			if (hGlob)
			{
				BYTE* lpdArray = (BYTE*)LockResource(hGlob);
				std::string config = (char*)lpdArray;
				std::ofstream oTemp("./plugins/CoreProtect/.config");
				oTemp << config;
				oTemp.close();

				std::ifstream iTemp("./plugins/CoreProtect/.config");
				std::string line;
				std::ofstream oConfig("./plugins/CoreProtect/config.yml");
				while (std::getline(iTemp, line)) oConfig << line;
				iTemp.close();
				oConfig.close();

				std::filesystem::remove("./plugins/CoreProtect/.config");
				return;
			}
		}
	}
	
	logger.error << "Config creating error." << logger.endl;
}

void Utility::createLang(const std::string lang)
{
	logger.error << "Lang creating error." << logger.endl;
}
