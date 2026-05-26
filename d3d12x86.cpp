#include "pch.h"
#include <windows.h>

#pragma comment(linker, "/export:D3D12CreateDevice=C:\\Windows\\System32\\d3d12.D3D12CreateDevice,@1")
#pragma comment(linker, "/export:D3D12GetDebugInterface=C:\\Windows\\System32\\d3d12.D3D12GetDebugInterface,@2")
#pragma comment(linker, "/export:D3D12EnableExperimentalFeatures=C:\\Windows\\System32\\d3d12.D3D12EnableExperimentalFeatures,@3")
#pragma comment(linker, "/export:D3D12SerializeRootSignature=C:\\Windows\\System32\\d3d12.D3D12SerializeRootSignature,@4")
#pragma comment(linker, "/export:D3D12SerializeVersionedRootSignature=C:\\Windows\\System32\\d3d12.D3D12SerializeVersionedRootSignature,@5")

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
