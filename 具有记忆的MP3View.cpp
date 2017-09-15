// 具有记忆的MP3View.cpp : implementation of the CMP3View class
//

#include "stdafx.h"
#include "具有记忆的MP3.h"

#include "具有记忆的MP3Doc.h"
#include "具有记忆的MP3View.h"
#include "yingyueDlg.h"
#include "lishiDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMP3View

IMPLEMENT_DYNCREATE(CMP3View, CView)

BEGIN_MESSAGE_MAP(CMP3View, CView)
	//{{AFX_MSG_MAP(CMP3View)
	ON_COMMAND(IDM_yingyue, Onyingyue)
	ON_COMMAND(IDN_lishi, Onlishi)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMP3View construction/destruction

CMP3View::CMP3View()
{
	// TODO: add construction code here

}

CMP3View::~CMP3View()
{
}

BOOL CMP3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMP3View drawing

void CMP3View::OnDraw(CDC* pDC)
{
	CMP3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CBitmap Bitmap;
	Bitmap.LoadBitmap(IDB_BITMAP10);
	CDC MemDC;
	MemDC.CreateCompatibleDC(pDC);
	CBitmap *oldBitmap=MemDC.SelectObject(&Bitmap);
	BITMAP bm;
	Bitmap.GetBitmap(&bm);
	pDC->BitBlt(0,0,bm.bmWidth,bm.bmHeight,&MemDC,0,0,SRCCOPY);
	MemDC.SelectObject(oldBitmap);
	MemDC.DeleteDC();
	Bitmap.DeleteObject();
}

/////////////////////////////////////////////////////////////////////////////
// CMP3View printing

BOOL CMP3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMP3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMP3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMP3View diagnostics

#ifdef _DEBUG
void CMP3View::AssertValid() const
{
	CView::AssertValid();
}

void CMP3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMP3Doc* CMP3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMP3Doc)));
	return (CMP3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMP3View message handlers

void CMP3View::Onyingyue() 
{
	// TODO: Add your command handler code here
	CyingyueDlg dlg;
	dlg.DoModal();
}

void CMP3View::Onlishi() 
{
	// TODO: Add your command handler code here
	ClishiDlg dlg;
	dlg.DoModal();
	 
}
