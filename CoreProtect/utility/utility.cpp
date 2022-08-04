#include "../pch.h"
#include "utility.h"

//int Utility::createLanguage(std::string language)
//{
//	try
//	{
//		std::ifstream iLang("./plugins/CoreProtect/language.json");
//		int langSize = iLang.tellg();
//		iLang.close();
//
//		if (!langSize || langSize == -1)
//		{
//			HMODULE hModule = GetModuleHandle(L"./plugins/CoreProtect.dll");
//			HRSRC hRsrc;
//
//			if (language == "de") hRsrc = FindResource(hModule, (LPCWSTR)DE, L"YAML");
//			else if (language == "en") hRsrc = FindResource(hModule, (LPCWSTR)EN, L"YAML");
//			else if (language == "es") hRsrc = FindResource(hModule, (LPCWSTR)ES, L"YAML");
//			else if (language == "fr") hRsrc = FindResource(hModule, (LPCWSTR)FR, L"YAML");
//			else if (language == "ja") hRsrc = FindResource(hModule, (LPCWSTR)JA, L"YAML");
//			else if (language == "pl") hRsrc = FindResource(hModule, (LPCWSTR)PL, L"YAML");
//			else if (language == "ru") hRsrc = FindResource(hModule, (LPCWSTR)RU, L"YAML");
//			else if (language == "tr") hRsrc = FindResource(hModule, (LPCWSTR)TR, L"YAML");
//			else if (language == "uk") hRsrc = FindResource(hModule, (LPCWSTR)UK, L"YAML");
//			else if (language == "vi") hRsrc = FindResource(hModule, (LPCWSTR)VI, L"YAML");
//			else if (language == "zh-cn") hRsrc = FindResource(hModule, (LPCWSTR)ZH_CN, L"YAML");
//			else if (language == "zh-tw") hRsrc = FindResource(hModule, (LPCWSTR)ZH_TW, L"YAML");
//			else hRsrc = FindResource(hModule, (LPCWSTR)EN, L"YAML");
//
//			if (hRsrc)
//			{
//				HGLOBAL hGlob = LoadResource(hModule, hRsrc);
//				if (hGlob)
//				{
//					BYTE* lpdArray = (BYTE*)LockResource(hGlob);
//					std::string language = (char*)lpdArray;
//					std::ofstream oTemp("./plugins/CoreProtect/.language");
//					oTemp << language;
//					oTemp.close();
//
//					std::ifstream iTemp("./plugins/CoreProtect/.language");
//					std::string line;
//					std::ofstream oLanguage("./plugins/CoreProtect/language.json");
//					while (std::getline(iTemp, line)) oLanguage << line;
//					iTemp.close();
//					oLanguage.close();
//
//					std::filesystem::remove("./plugins/CoreProtect/.language");
//					return 0;
//				}
//			}
//		}
//
//		logger.error << "Language creating error." << logger.endl;
//		return 1;
//	}
//	catch (std::exception ex) {
//		logger.error << ex.what() << logger.endl;
//		return 2;
//	}
//}
