// ScanDev.cpp : 实现文件
//

#include "stdafx.h"
#include "DeviceAssist.h"
#include "ScanDev.h"
#include "afxdialogex.h"


// CScanDev 对话框

IMPLEMENT_DYNAMIC(CScanDev, CDialogEx)

CScanDev::CScanDev(CWnd* pParent /*=NULL*/)
	: CDialogEx(CScanDev::IDD, pParent)
{

	EnableAutomation();

}

CScanDev::~CScanDev()
{
}

void CScanDev::OnFinalRelease()
{
	// 释放了对自动化对象的最后一个引用后，将调用
	// OnFinalRelease。基类将自动
	// 删除该对象。在调用该基类之前，请添加您的
	// 对象所需的附加清理代码。

	CDialogEx::OnFinalRelease();
}

void CScanDev::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CScanDev, CDialogEx)
	ON_WM_TIMER()
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CScanDev, CDialogEx)
END_DISPATCH_MAP()

// 注意: 我们添加 IID_IScanDev 支持
//  以支持来自 VBA 的类型安全绑定。此 IID 必须同附加到 .IDL 文件中的
//  调度接口的 GUID 匹配。

// {2F4A814A-1D8E-4A77-BD4B-232F215FAAF2}
static const IID IID_IScanDev =
{ 0x2F4A814A, 0x1D8E, 0x4A77, { 0xBD, 0x4B, 0x23, 0x2F, 0x21, 0x5F, 0xAA, 0xF2 } };

BEGIN_INTERFACE_MAP(CScanDev, CDialogEx)
	INTERFACE_PART(CScanDev, IID_IScanDev, Dispatch)
END_INTERFACE_MAP()


// CScanDev 消息处理程序


void CScanDev::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CDialogEx::OnTimer(nIDEvent);
}
