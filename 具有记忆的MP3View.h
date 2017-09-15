// 具有记忆的MP3View.h : interface of the CMP3View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MP3VIEW_H__AAC0CE42_5F12_437E_BC47_AE8E0C49F3CC__INCLUDED_)
#define AFX_MP3VIEW_H__AAC0CE42_5F12_437E_BC47_AE8E0C49F3CC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMP3View : public CView
{
protected: // create from serialization only
	CMP3View();
	DECLARE_DYNCREATE(CMP3View)

// Attributes
public:
	CMP3Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMP3View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMP3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMP3View)
	afx_msg void Onyingyue();
	afx_msg void Onlishi();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 具有记忆的MP3View.cpp
inline CMP3Doc* CMP3View::GetDocument()
   { return (CMP3Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MP3VIEW_H__AAC0CE42_5F12_437E_BC47_AE8E0C49F3CC__INCLUDED_)
