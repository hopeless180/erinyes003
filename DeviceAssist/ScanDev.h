#pragma once


// CScanDev 对话框

class CScanDev : public CDialogEx
{
	DECLARE_DYNAMIC(CScanDev)

public:
	CScanDev(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CScanDev();

	virtual void OnFinalRelease();

// 对话框数据
	enum { IDD = IDD_DIALOG_SCANDEV };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
