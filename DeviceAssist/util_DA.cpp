#include "stdafx.h"
#include "util_DA.h"
//////////////////////////////////////////////////////////////////////////
// 结构体 Device_Info
// Parameters：
// GUID
// HDEVNOTIFY
// HDEVINFO
//////////////////////////////////////////////////////////////////////////
struct Device_Info 
{
	GUID			guid;
	HDEVNOTIFY		hDevNotify;
	HDEVINFO		hDevInfo;
};

BOOL EnumDevice()
{
	struct Device_Info devs;

	// 初始化，用 0 塞满结构体的内存空间
	ZeroMemory(&devs, sizeof(Device_Info));

	devs.guid = GUID_DEVINTERFACE_USB_HUB;

	HDEVINFO hTempDevInfo = SetupDiGetClassDevs(&(devs.guid),
		NULL,
		NULL,
		DIGCF_DEVICEINTERFACE | DIGCF_PRESENT);

	if (hTempDevInfo == INVALID_HANDLE_VALUE)
	{

	}

	return TRUE;
}

void ShowLastError(	LPTSTR lpszFunction/*自定义信息，可以是出错的函数名等提示信息*/) 
{ 
	LPVOID lpMsgBuf;
	LPVOID lpDisplayBuf;
	DWORD dw = GetLastError(); 

	FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER | 
		FORMAT_MESSAGE_FROM_SYSTEM |
		FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		dw,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR) &lpMsgBuf,
		0, NULL );

	// Display the error message
	lpDisplayBuf = (LPVOID)LocalAlloc(LMEM_ZEROINIT, 
		(lstrlen((LPCTSTR)lpMsgBuf)+lstrlen((LPCTSTR)lpszFunction)+40)*sizeof(TCHAR)); 
	StringCchPrintf((LPTSTR)lpDisplayBuf, 
		LocalSize(lpDisplayBuf),
		TEXT("%s failed with error %d: %s"), 
		lpszFunction, dw, lpMsgBuf); 
	::MessageBox(NULL, (LPCTSTR)lpDisplayBuf, TEXT("Error"), MB_ICONERROR); 

	LocalFree(lpMsgBuf);
	LocalFree(lpDisplayBuf);

	return;
}