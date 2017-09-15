#if !defined(AFX_YINGYUEDLG_H__4D11EC2F_F62E_426B_80EA_FDC5276A9484__INCLUDED_)
#define AFX_YINGYUEDLG_H__4D11EC2F_F62E_426B_80EA_FDC5276A9484__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// yingyueDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CyingyueDlg dialog

class CyingyueDlg : public CDialog
{
// Construction
public:
	CyingyueDlg(CWnd* pParent = NULL);   // standard constructor
public://
   CListBox list;//

// Dialog Data
	//{{AFX_DATA(CyingyueDlg)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CyingyueDlg)
	public:
	virtual BOOL DestroyWindow();
	virtual int DoModal();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType = adjustBorder);
	virtual LRESULT DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CyingyueDlg)
	afx_msg void OnButton3();
	afx_msg void OnSelchangeList1();
	afx_msg void Ontianjia();
	afx_msg void Onbofang();
	virtual void OnOK();
	afx_msg void Ontingzhi();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YINGYUEDLG_H__4D11EC2F_F62E_426B_80EA_FDC5276A9484__INCLUDED_)
