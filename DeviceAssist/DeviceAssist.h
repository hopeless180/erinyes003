
// DeviceAssist.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDeviceAssistApp:
// �йش����ʵ�֣������ DeviceAssist.cpp
//

class CDeviceAssistApp : public CWinApp
{
public:
	CDeviceAssistApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDeviceAssistApp theApp;