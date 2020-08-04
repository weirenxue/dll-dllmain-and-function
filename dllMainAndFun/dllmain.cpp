// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
#define DLLMAIN_API __declspec(dllexport)

extern "C" DLLMAIN_API void helloWorldFun() 
{
	MessageBoxW(0, L"���禡�I�s���\", L"helloWorldFun", 0);
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		MessageBox(0, L"�{�ǫإ߮ɳQ�I�s", L"DllMain", 0);
		break;
	case DLL_THREAD_ATTACH:
		MessageBox(0, L"������إ߮ɳQ�I�s", L"DllMain", 0);
		break;
	case DLL_THREAD_DETACH:
		MessageBox(0, L"������h�X�ɳQ�I�s", L"DllMain", 0);
		break;
	case DLL_PROCESS_DETACH:
		MessageBox(0, L"�{�ǰh�X�ɳQ�I�s", L"DllMain", 0);
		break;
	}
	return TRUE;
}



