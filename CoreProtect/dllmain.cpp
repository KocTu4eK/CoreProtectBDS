﻿#include "pch.h"
#pragma comment(lib, "bedrock_server_api.lib")
#pragma comment(lib, "bedrock_server_var.lib")
#pragma comment(lib, "SymDBHelper.lib")
#pragma comment(lib, "LiteLoader.lib")
#pragma comment(lib, "SQLiteCpp/SQLiteCpp.lib")
#pragma comment(lib, "SQLiteCpp/sqlite3.lib")

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        LL::registerPlugin("CoreProtect", "Unofficial port of CoreProtect plugin (1.19.10)", LL::Version(0, 0, 1));
		break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

extern void pluginInit();

extern "C" _declspec(dllexport) void onPostInit()
{
    std::ios::sync_with_stdio(false);
	pluginInit();
}
