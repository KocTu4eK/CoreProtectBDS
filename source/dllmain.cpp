#include "llapi/LoggerAPI.h"

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
	if (ll::getServerProtocolVersion() != 560)
	{
		logger.warn("Protocol version mismatched! Target version: 560. Current version: {}.", ll::getServerProtocolVersion());
		logger.warn("This may result in crash. Please switch to the version matching the BDS version!");
	}
}

extern "C" _declspec(dllexport) void onPostInit()
{
	std::ios::sync_with_stdio(false);
	checkProtocolVersion();

	logger.info("Hello, World!");
}
