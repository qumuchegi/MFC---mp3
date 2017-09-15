// 具有记忆的MP3Doc.h : interface of the CMP3Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MP3DOC_H__DFB7B4A0_9CFF_4F4E_A31C_884FC945FEF4__INCLUDED_)
#define AFX_MP3DOC_H__DFB7B4A0_9CFF_4F4E_A31C_884FC945FEF4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMP3Doc : public CDocument
{
protected: // create from serialization only
	CMP3Doc();
	DECLARE_DYNCREATE(CMP3Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMP3Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMP3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMP3Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MP3DOC_H__DFB7B4A0_9CFF_4F4E_A31C_884FC945FEF4__INCLUDED_)
