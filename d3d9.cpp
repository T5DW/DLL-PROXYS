// D3D9 X86
#include "pch.h" // optional i just have it on
#include <windows.h>
#include <iostream>

#pragma comment(linker, "/export:Direct3DCreate9=C:\\Windows\\System32\\d3d9.Direct3DCreate9,@1")
#pragma comment(linker, "/export:Direct3DCreate9Ex=C:\\Windows\\System32\\d3d9.Direct3DCreate9Ex,@2")
#pragma comment(linker, "/export:Direct3DShaderValidatorCreate9=C:\\Windows\\System32\\d3d9.Direct3DShaderValidatorCreate9,@3")
#pragma comment(linker, "/export:PSGPError=C:\\Windows\\System32\\d3d9.PSGPError,@4")
#pragma comment(linker, "/export:PSGPSampleTexture=C:\\Windows\\System32\\d3d9.PSGPSampleTexture,@5")
#pragma comment(linker, "/export:D3DPERF_BeginEvent=C:\\Windows\\System32\\d3d9.D3DPERF_BeginEvent,@6")
#pragma comment(linker, "/export:D3DPERF_EndEvent=C:\\Windows\\System32\\d3d9.D3DPERF_EndEvent,@7")
#pragma comment(linker, "/export:D3DPERF_GetStatus=C:\\Windows\\System32\\d3d9.D3DPERF_GetStatus,@8")
#pragma comment(linker, "/export:D3DPERF_QueryRepeatFrame=C:\\Windows\\System32\\d3d9.D3DPERF_QueryRepeatFrame,@9")
#pragma comment(linker, "/export:D3DPERF_SetMarker=C:\\Windows\\System32\\d3d9.D3DPERF_SetMarker,@10")
#pragma comment(linker, "/export:D3DPERF_SetOptions=C:\\Windows\\System32\\d3d9.D3DPERF_SetOptions,@11")
#pragma comment(linker, "/export:D3DPERF_SetRegion=C:\\Windows\\System32\\d3d9.D3DPERF_SetRegion,@12")
#pragma comment(linker, "/export:DebugSetLevel=C:\\Windows\\System32\\d3d9.DebugSetLevel,@13")
#pragma comment(linker, "/export:DebugSetMute=C:\\Windows\\System32\\d3d9.DebugSetMute,@14")


BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        // DLL is being loaded
        DisableThreadLibraryCalls(hModule); // Optional optimization
        break;

    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
} // End you can make a .def file if you dont want it in your main dll
