#include "pch.h"
#include <windows.h>

#pragma comment(linker, "/export:D3D11CoreCreateDevice=C:\\Windows\\System32\\d3d11.D3D11CoreCreateDevice,@1")
#pragma comment(linker, "/export:D3D11CoreGetLayeredDeviceSize=C:\\Windows\\System32\\d3d11.D3D11CoreGetLayeredDeviceSize,@2")
#pragma comment(linker, "/export:D3D11CoreRegisterLayers=C:\\Windows\\System32\\d3d11.D3D11CoreRegisterLayers,@3")
#pragma comment(linker, "/export:D3D11CreateDevice=C:\\Windows\\System32\\d3d11.D3D11CreateDevice,@4")
#pragma comment(linker, "/export:D3D11CreateDeviceAndSwapChain=C:\\Windows\\System32\\d3d11.D3D11CreateDeviceAndSwapChain,@5")
#pragma comment(linker, "/export:D3D11On12CreateDevice=C:\\Windows\\System32\\d3d11.D3D11On12CreateDevice,@6")

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
