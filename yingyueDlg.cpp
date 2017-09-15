// yingyueDlg.cpp : implementation file
//
#include <Vfw.H>//
#include <mmsystem.h>//#include <mmsystem.h>
#include "stdafx.h"
#include <stdlib.h>
#include "具有记忆的MP3.h"
#include "yingyueDlg.h"
#include "lishiDlg.h"
#include <Vfw.H>//
#include <mmsystem.h>//
#pragma comment(lib,"winmm.lib")//
//#include "afxdialogex.h"//
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
//	CListBox list;//
/////////////////////////////////////////////////////////////////////////////
// CyingyueDlg dialog
MCI_OPEN_PARMS op;

CyingyueDlg::CyingyueDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CyingyueDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CyingyueDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
     
}

 

void CyingyueDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX,IDC_LIST1,list);
	//{{AFX_DATA_MAP(CyingyueDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CyingyueDlg, CDialog)
	//{{AFX_MSG_MAP(CyingyueDlg)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_LBN_SELCHANGE(IDC_LIST1, OnSelchangeList1)
	ON_BN_CLICKED(IDC_tianjia, Ontianjia)
	ON_BN_CLICKED(IDC_bofang, Onbofang)
	ON_BN_CLICKED(IDC_tingzhi, Ontingzhi)
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CyingyueDlg message handlers

void CyingyueDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	ClishiDlg dlg;
	dlg.DoModal();

 	CyingyueDlg::OnOK();
}

void CyingyueDlg::OnSelchangeList1() 
{
	// TODO: Add your control notification handler code here
	
}

void CyingyueDlg::Ontianjia() 
{
	// TODO: Add your control notification handler code here
	char fliter[]="音乐文件(*.mp3;*.wma;*.wav)\0*.mp3;*.wma;*.wav\0"
		"所有文件(*.*)\0*.*\0\0";
	CFileDialog fdlg(TRUE);
	fdlg.m_ofn.lpstrFilter=fliter;
	if(IDOK==fdlg.DoModal())
	{
		CString path=fdlg.GetPathName();
		CString file=fdlg.GetFileName();
	   //list.InsertItem(0,path);
		list.InsertString(list.GetCount(),path);
		list.SetCurSel(list.GetCount()-1);
	}
} 

void CyingyueDlg::Onbofang() 
{
	// TODO: Add your control notification handler code here
		CString filename;//开始
	int index=list.GetCurSel();
	list.GetText(index,filename);
    CString choose=_T(filename);//
//	MessageBox(filename,"嗨翻你！！！！");

/*	HWND hw;
	hw=MCIWndCreate(NULL,NULL,WS_POPUP|MCIWNDF_NOPLAYBAR|MCIWNDF_NOMENU,choose);
	MCIWndPlay(hw);*/
//	mciSendString(_T(" open C:\Users\成功\Music\Alan Walker-Fade.mp3 alias music"),NULL,0,NULL);
 
	/*SetDlgItemText(IDC_FILENAME,filename);

    player.Open(m_hWnd,filename);*/
//	DWORD　cdlen;
	op.dwCallback=NULL;
	op.lpstrAlias=NULL;
	op.lpstrDeviceType=_T("MPEGAudio");
	op.lpstrElementName=_T(filename);
    op.wDeviceID=NULL;
	UINT rs;
    rs=mciSendCommand(NULL,MCI_OPEN,MCI_OPEN_ELEMENT,(DWORD)&op);
	mciSendCommand(NULL,MCI_SET,MCI_SET_DOOR_OPEN,NULL);
//	cdlen=getinfo(op.wDeviceID,MCI_STATUS_LENGTH);
	if(rs==0)
	{
	MCI_PLAY_PARMS mciplayparms;
	mciplayparms.dwCallback=NULL;
	mciplayparms.dwFrom=0; 
	mciSendCommand(op.wDeviceID,MCI_PLAY,MCI_FROM|MCI_NOTIFY,(DWORD)(LPVOID)&mciplayparms);}//结束*/
}

void CyingyueDlg::OnOK()  //开始  ini文件保存音乐列表 目前
{
	// TODO: Add extra validation here


	// TODO: Add extra validation here
	int num=list.GetCount();
	CString songname;
	CString key="数量";
	CString songnum;
	songnum.Format("%d",num);

	CString str;
	GetModuleFileName(NULL,str.GetBuffer(0),MAX_PATH);
	int pos=str.ReverseFind('\\');
	CString temp=str;
	CString filename=temp.Left(pos);
    //MessageBox(filename,"dd");
	WritePrivateProfileString("音乐列表", "数量",songnum.GetBuffer(0),filename+"\\song.ini");
	for(int i=0;i<num;i++)
	{
		//key.Format("%d",i);
        //int index=list.GetCurSel();
        list.GetText(i,songname);
		//songname=list.GetItemText(i,0);
		char a[10];
		itoa(i,a,10);
		CString ad=a;
		CString gq="歌曲"+ad;

		WritePrivateProfileString("音乐列表",gq,songname,filename+"\\song.ini");
	
	}







	CDialog::OnOK();
}
//结束
	 

void CyingyueDlg::Ontingzhi() 
{
	// TODO: Add your control notification handler code here
	mciSendCommand(op.wDeviceID,MCI_STOP,NULL,NULL);
}

void CyingyueDlg::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CDialog::CalcWindowRect(lpClientRect, nAdjustType);
}

LRESULT CyingyueDlg::DefWindowProc(UINT message, WPARAM wParam, LPARAM lParam) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDialog::DefWindowProc(message, wParam, lParam);
}

BOOL CyingyueDlg::DestroyWindow() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDialog::DestroyWindow();
}

int CyingyueDlg::DoModal() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDialog::DoModal();
}

BOOL CyingyueDlg::PreCreateWindow(CREATESTRUCT& cs) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CDialog::PreCreateWindow(cs);
}

HBRUSH CyingyueDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	switch(nCtlColor){
	case CTLCOLOR_STATIC://静态文本
		{
		pDC->SetBkMode(TRANSPARENT);
		HBRUSH B=CreateSolidBrush(RGB(0,115,213));
		pDC->SetTextColor(RGB(255,255,255));
		return (HBRUSH) B;
		}
	break;
	case CTLCOLOR_DLG://对话框背景
		{
			pDC->SetBkMode(TRANSPARENT);
			HBRUSH B=CreateSolidBrush(RGB(7,167,239));
			pDC->SetTextColor(RGB(0,0,0));
			return (HBRUSH) B;
		}
		break;
	case CTLCOLOR_LISTBOX://列表框控件
		{
			pDC->SetBkMode(TRANSPARENT);
			HBRUSH B=CreateSolidBrush(RGB(12,98,152));
			pDC->SetTextColor(RGB(255,255,0));
			return (HBRUSH) B;
		}
		break;
	case CTLCOLOR_BTN:
		{
			pDC->SetBkMode(TRANSPARENT);
			HBRUSH B=CreateSolidBrush(RGB(12,98,152));
			pDC->SetTextColor(RGB(255,255,0));
			return (HBRUSH) B;
		}
		break;
	default:

	// TODO: Change any attributes of the DC here
	
	// TODO: Return a different brush if the default is not desired
	return hbr;
		break;
}
	// TODO: Change any attributes of the DC here
	
	// TODO: Return a different brush if the default is not desired
 
}
