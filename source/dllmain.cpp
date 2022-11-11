#include "pch.h"
#ifdef CP_TEST
#include "main.hpp"
#endif

Logger logger("CoreProtect");

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		ll::registerPlugin("CoreProtect", "[WIP]", ll::Version(1, 0, 0), std::map<std::string, std::string>{{"Author", "KocTu4eK"}});
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

void checkProtocolVersion()
{
	if (ll::getServerProtocolVersion() != 545)
	{
		logger.warn("Protocol version mismatched! Target version: {}. Current version: {}.", 545, ll::getServerProtocolVersion());
		logger.warn("This may result in crash. Please switch to the version matching the BDS version!");
	}
}

extern "C" _declspec(dllexport) void onPostInit()
{
	std::ios::sync_with_stdio(false);
	checkProtocolVersion();

#ifdef CP_TEST
	runTests();
#endif

	logger.info("Hello, World!");
}
