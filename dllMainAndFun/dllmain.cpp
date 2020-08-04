// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
#define DLLMAIN_API __declspec(dllexport)

extern "C" DLLMAIN_API void helloWorldFun() 
{
	MessageBoxW(0, L"此函式呼叫成功", L"helloWorldFun", 0);
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(0, L"程序建立時被呼叫", L"DllMain", 0);
		break;
	case DLL_THREAD_ATTACH:
		MessageBox(0, L"執行緒建立時被呼叫", L"DllMain", 0);
		break;
	case DLL_THREAD_DETACH:
		MessageBox(0, L"執行緒退出時被呼叫", L"DllMain", 0);
		break;
	case DLL_PROCESS_DETACH:
		MessageBox(0, L"程序退出時被呼叫", L"DllMain", 0);
		break;
	}
	return TRUE;
}



