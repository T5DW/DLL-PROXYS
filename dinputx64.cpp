#include "pch.h"
#include <windows.h>

#pragma comment(linker, "/export:DirectInputCreateA=C:\\Windows\\System32\\dinput.DirectInputCreateA")
#pragma comment(linker, "/export:DirectInputCreateW=C:\\Windows\\System32\\dinput.DirectInputCreateW")
#pragma comment(linker, "/export:DirectInputCreateEx=C:\\Windows\\System32\\dinput.DirectInputCreateEx")
#pragma comment(linker, "/export:DllCanUnloadNow=C:\\Windows\\System32\\dinput.DllCanUnloadNow")
#pragma comment(linker, "/export:DllGetClassObject=C:\\Windows\\System32\\dinput.DllGetClassObject")

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        break;
    }

    return TRUE;
}
