// DXGI X86
#include "pch.h"
#include <windows.h>

#pragma comment(linker, "/export:CreateDXGIFactory=C:\\Windows\\System32\\dxgi.CreateDXGIFactory,@1")
#pragma comment(linker, "/export:CreateDXGIFactory1=C:\\Windows\\System32\\dxgi.CreateDXGIFactory1,@2")
#pragma comment(linker, "/export:CreateDXGIFactory2=C:\\Windows\\System32\\dxgi.CreateDXGIFactory2,@3")
#pragma comment(linker, "/export:DXGID3D10CreateDevice=C:\\Windows\\System32\\dxgi.DXGID3D10CreateDevice,@10")
#pragma comment(linker, "/export:DXGID3D10CreateLayeredDevice=C:\\Windows\\System32\\dxgi.DXGID3D10CreateLayeredDevice,@11")
#pragma comment(linker, "/export:DXGID3D10GetLayeredDeviceSize=C:\\Windows\\System32\\dxgi.DXGID3D10GetLayeredDeviceSize,@12")
#pragma comment(linker, "/export:DXGID3D10RegisterLayers=C:\\Windows\\System32\\dxgi.DXGID3D10RegisterLayers,@13")
#pragma comment(linker, "/export:DXGIGetDebugInterface1=C:\\Windows\\System32\\dxgi.DXGIGetDebugInterface1,@14")
#pragma comment(linker, "/export:DXGIReportAdapterConfiguration=C:\\Windows\\System32\\dxgi.DXGIReportAdapterConfiguration,@15")
#pragma comment(linker, "/export:ApplyCompatResolutionQuirking=C:\\Windows\\System32\\dxgi.ApplyCompatResolutionQuirking,@20")
#pragma comment(linker, "/export:DXGIDumpJournal=C:\\Windows\\System32\\dxgi.DXGIDumpJournal,@21")
#pragma comment(linker, "/export:DXGIRevertToSxS=C:\\Windows\\System32\\dxgi.DXGIRevertToSxS,@22")
#pragma comment(linker, "/export:PIXBeginCapture=C:\\Windows\\System32\\dxgi.PIXBeginCapture,@30")
#pragma comment(linker, "/export:PIXEndCapture=C:\\Windows\\System32\\dxgi.PIXEndCapture,@31")
#pragma comment(linker, "/export:PIXGetCaptureState=C:\\Windows\\System32\\dxgi.PIXGetCaptureState,@32")

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);   // Performance optimization
        // You can add initialization code here (logging, hooks, etc.)
        break;

    case DLL_PROCESS_DETACH:
        // Cleanup code here if needed
        break;
    }
    return TRUE;
}
