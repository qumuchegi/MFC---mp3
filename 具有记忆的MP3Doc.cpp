// 具有记忆的MP3Doc.cpp : implementation of the CMP3Doc class
//

#include "stdafx.h"
#include "具有记忆的MP3.h"

#include "具有记忆的MP3Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMP3Doc

IMPLEMENT_DYNCREATE(CMP3Doc, CDocument)

BEGIN_MESSAGE_MAP(CMP3Doc, CDocument)
	//{{AFX_MSG_MAP(CMP3Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMP3Doc construction/destruction

CMP3Doc::CMP3Doc()
{
	// TODO: add one-time construction code here

}

CMP3Doc::~CMP3Doc()
{
}

BOOL CMP3Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMP3Doc serialization

void CMP3Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMP3Doc diagnostics

#ifdef _DEBUG
void CMP3Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMP3Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMP3Doc commands
