#include "pch.h"
#pragma comment(lib, "../LLoaderSDK/Lib/bedrock_server_api.lib")
#pragma comment(lib, "../LLoaderSDK/Lib/bedrock_server_var.lib")
#pragma comment(lib, "../LLoaderSDK/Lib/SymDBHelper.lib")
#pragma comment(lib, "../LLoaderSDK/Lib/LiteLoader.lib")
#pragma comment(lib, "../LLoaderSDK/Lib/yaml-cpp.lib")
#pragma comment(lib, "urlmon.lib")

BOOL APIENTRY DllMain(HMODULE hModule,  DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        LL::registerPlugin("CoreProtect", "Unofficial port of CoreProtect plugin to Minecraft Bedrock", LL::Version(0, 0, 1));
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

extern void plugin();

extern "C"
{
    _declspec(dllexport) void onPostInit()
    {
        std::ios::sync_with_stdio(false);
        plugin();
    }
}