// ScanDev.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "DeviceAssist.h"
#include "ScanDev.h"
#include "afxdialogex.h"


// CScanDev �Ի���

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
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease�����ཫ�Զ�
	// ɾ���ö����ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

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

// ע��: ������� IID_IScanDev ֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡��� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {2F4A814A-1D8E-4A77-BD4B-232F215FAAF2}
static const IID IID_IScanDev =
{ 0x2F4A814A, 0x1D8E, 0x4A77, { 0xBD, 0x4B, 0x23, 0x2F, 0x21, 0x5F, 0xAA, 0xF2 } };

BEGIN_INTERFACE_MAP(CScanDev, CDialogEx)
	INTERFACE_PART(CScanDev, IID_IScanDev, Dispatch)
END_INTERFACE_MAP()


// CScanDev ��Ϣ�������


void CScanDev::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CDialogEx::OnTimer(nIDEvent);
}
