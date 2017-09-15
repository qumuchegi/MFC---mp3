// lishiDlg.cpp : implementation file
//

//#include <Vfw.H>//
//#include <mmsystem.h>//
#include <Vfw.H>//
#include <mmsystem.h>
#include "stdafx.h"
#include "具有记忆的MP3.h"

#include "lishiDlg.h"
#include "yingyueDlg.h"
#include <Vfw.H>//
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")//
#ifdef _DEBUG
MCI_OPEN_PARMS up;
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ClishiDlg dialog


ClishiDlg::ClishiDlg(CWnd* pParent /*=NULL*/)
	: CDialog(ClishiDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(ClishiDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ClishiDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX,IDC_LIST2,list2);
	//{{AFX_DATA_MAP(ClishiDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ClishiDlg, CDialog)
	//{{AFX_MSG_MAP(ClishiDlg)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_COMMAND(IDN_lishi, Onlishi)
	ON_BN_CLICKED(IDC_cklishi, Oncklishi)
	ON_BN_CLICKED(IDC_bofang, Onbofang)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ClishiDlg message handlers

void ClishiDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	CyingyueDlg dlg;
	dlg.DoModal();
}

void ClishiDlg::Onlishi() 
{
	// TODO: Add your command handler code here
		/*CFileDialog dlg(TRUE,NULL,NULL,OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,"ALL Files(*.ini)|*.ini||",AfxGetMainWnd());
	CString strPath;
 
		strPath=dlg.GetPathName();
		//MessageBox(strPath,"gghggh");
        //strPath=dlo.GetPathName();//
		//MessageBox(strPath,"gghggh");//
		char keys[MAX_PATH]={0};
		CString section;
        GetPrivateProfileSectionNames(section.GetBuffer(0),1000,strPath);
		GetPrivateProfileSection(section,keys,MAX_PATH,strPath);
       // MessageBox(section,"gughggh");
        list.InsertString(list.GetCount(),section);
		list.SetCurSel(list.GetCount()-1);*/
}

void ClishiDlg::Oncklishi() 
{
	// TODO: Add your control notification handler code here
	/*	CFileDialog dlg(TRUE,NULL,NULL,OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,"ALL Files(*.ini)|*.ini||",AfxGetMainWnd());
    	CString strPath;
 
		strPath=dlg.GetPathName();*/
	CString str;
	GetModuleFileName(NULL,str.GetBuffer(0),MAX_PATH);
	int pos=str.ReverseFind('\\');
	CString temp=str;
	CString filename=temp.Left(pos);
	//	MessageBox(strPath,"hh");
       // CString strPath;
        //strPath += "\\song.ini";
        //CString luj="C:\Users\成功\Desktop\具有记忆的MP3--实现了列表添加音乐 - 副本\Debug";
	//	MessageBox(filename,"gghggh");
        //strPath=dlo.GetPathName();//
		//MessageBox(strPath,"gghggh");//
		//char keys[MAX_PATH]={0};
	//CString section;
		CString r;
        //GetPrivateProfileSectionNames(section.GetBuffer(0),1000,strPath+"\\song.ini");
		int i=GetPrivateProfileInt(_T("音乐列表"),_T("数量"), 1,
			 filename+"\\song.ini");
		
       // MessageBox(section,"gughggh");
		for(int o=0;o<i;o++){
	    char a[10];
		itoa(o,a,10);
		CString ad=a;
		CString gq="歌曲"+ad;
	    GetPrivateProfileString(_T("音乐列表"),gq,_T("C:\\Users\\成功\\Music\\Maksim Mrvica-克罗地亚狂想曲"),r.GetBuffer(MAX_PATH),MAX_PATH,
			 filename+"\\song.ini");
        list2.InsertString(list2.GetCount(),r);
		list2.SetCurSel(list2.GetCount()-1);
}
}

void ClishiDlg::Onbofang() 
{
	// TODO: Add your control notification handler code here
		CString filename;//开始
	int index=list2.GetCurSel();
	list2.GetText(index,filename);
    CString choose=_T(filename);//
	MessageBox(filename,"嗨翻你！！！！");

/*	HWND hw;
	hw=MCIWndCreate(NULL,NULL,WS_POPUP|MCIWNDF_NOPLAYBAR|MCIWNDF_NOMENU,choose);
	MCIWndPlay(hw);*/
//	mciSendString(_T(" open C:\Users\成功\Music\Alan Walker-Fade.mp3 alias music"),NULL,0,NULL);
 
	/*SetDlgItemText(IDC_FILENAME,filename);

    player.Open(m_hWnd,filename);*/
//	DWORD　cdlen;

  
	up.dwCallback=NULL;
	up.lpstrAlias=NULL;
	up.lpstrDeviceType=_T("MPEGAudio");
	up.lpstrElementName=_T(filename);
    up.wDeviceID=NULL;
	UINT rs;
    rs=mciSendCommand(NULL,MCI_OPEN,MCI_OPEN_ELEMENT,(DWORD)&up);
	mciSendCommand(NULL,MCI_SET,MCI_SET_DOOR_OPEN,NULL);
//	cdlen=getinfo(op.wDeviceID,MCI_STATUS_LENGTH);
	if(rs==0)
	{
	MCI_PLAY_PARMS mciplayparms;
	mciplayparms.dwCallback=NULL;
	mciplayparms.dwFrom=0; 
	mciSendCommand(up.wDeviceID,MCI_PLAY,MCI_FROM|MCI_NOTIFY,(DWORD)(LPVOID)&mciplayparms);}//结束*/

}

void ClishiDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	mciSendCommand(up.wDeviceID,MCI_STOP,NULL,NULL);
}

HBRUSH ClishiDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
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
			HBRUSH B=CreateSolidBrush(RGB(117,178,92));
			pDC->SetTextColor(RGB(0,0,0));
			return (HBRUSH) B;
		}
		break;
	case CTLCOLOR_LISTBOX://列表框控件
		{
			pDC->SetBkMode(TRANSPARENT);
			HBRUSH B=CreateSolidBrush(RGB(255,255,252));
			pDC->SetTextColor(RGB(255,155,70));
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
	// TODO: Change any attributes of the DC here
	
	// TODO: Return a different brush if the default is not desired
	 
}
}