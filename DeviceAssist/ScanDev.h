#pragma once


// CScanDev �Ի���

class CScanDev : public CDialogEx
{
	DECLARE_DYNAMIC(CScanDev)

public:
	CScanDev(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CScanDev();

	virtual void OnFinalRelease();

// �Ի�������
	enum { IDD = IDD_DIALOG_SCANDEV };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
