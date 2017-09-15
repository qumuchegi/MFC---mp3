#if !defined(AFX_LISHIDLG_H__CD8635C7_BA6D_434B_8823_E5E67C58A88A__INCLUDED_)
#define AFX_LISHIDLG_H__CD8635C7_BA6D_434B_8823_E5E67C58A88A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// lishiDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ClishiDlg dialog

class ClishiDlg : public CDialog
{
// Construction
public:
	ClishiDlg(CWnd* pParent = NULL);   // standard constructor
    CListBox list2;
// Dialog Data
	//{{AFX_DATA(ClishiDlg)
	enum { IDD = IDD_DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ClishiDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ClishiDlg)
	afx_msg void OnButton3();
	afx_msg void Onlishi();
	afx_msg void Oncklishi();
	afx_msg void Onbofang();
	afx_msg void OnButton4();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LISHIDLG_H__CD8635C7_BA6D_434B_8823_E5E67C58A88A__INCLUDED_)
