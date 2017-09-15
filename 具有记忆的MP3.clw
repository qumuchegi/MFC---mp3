; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CyingyueDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "具有记忆的MP3.h"
LastPage=0

ClassCount=7
Class1=CMP3App
Class2=CMP3Doc
Class3=CMP3View
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDD_DIALOG1
Class5=CAboutDlg
Class6=CyingyueDlg
Resource3=IDR_MAINFRAME
Class7=ClishiDlg
Resource4=IDD_DIALOG2

[CLS:CMP3App]
Type=0
HeaderFile=具有记忆的MP3.h
ImplementationFile=具有记忆的MP3.cpp
Filter=N

[CLS:CMP3Doc]
Type=0
HeaderFile=具有记忆的MP3Doc.h
ImplementationFile=具有记忆的MP3Doc.cpp
Filter=N

[CLS:CMP3View]
Type=0
HeaderFile=具有记忆的MP3View.h
ImplementationFile=具有记忆的MP3View.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CMP3View


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=IDM_yingyue
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=具有记忆的MP3.cpp
ImplementationFile=具有记忆的MP3.cpp
Filter=D
LastObject=CAboutDlg
BaseClass=CDialog
VirtualFilter=dWC

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342177921
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_APP_ABOUT
Command2=IDM_yingyue
Command3=IDN_lishi
CommandCount=3

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[DLG:IDD_DIALOG1]
Type=1
Class=CyingyueDlg
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,button,1342178055
Control3=IDC_STATIC,button,1342177287
Control4=IDC_bofang,button,1342242816
Control5=IDC_tingzhi,button,1342242816
Control6=IDC_BUTTON3,button,1342242816
Control7=IDC_LIST1,listbox,1352728835
Control8=IDC_tianjia,button,1342242816
Control9=IDC_STATIC,static,1342177283
Control10=IDC_STATIC,static,1342177294
Control11=IDC_STATIC,static,1342177294
Control12=IDC_STATIC,static,1342177294

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[CLS:CyingyueDlg]
Type=0
HeaderFile=yingyueDlg.h
ImplementationFile=yingyueDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_CUSTOM1
VirtualFilter=dWC

[DLG:IDD_DIALOG2]
Type=1
Class=ClishiDlg
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDC_STATIC,button,1342178055
Control3=IDC_LIST2,listbox,1352728835
Control4=IDC_STATIC,button,1342177287
Control5=IDC_bofang,button,1342242816
Control6=IDC_BUTTON3,button,1342242816
Control7=IDC_BUTTON4,button,1342242816
Control8=IDC_cklishi,button,1342242816
Control9=IDC_STATIC,static,1342177283
Control10=IDC_STATIC,static,1342177294
Control11=IDC_STATIC,static,1342177294
Control12=IDC_STATIC,static,1342177294

[CLS:ClishiDlg]
Type=0
HeaderFile=lishiDlg.h
ImplementationFile=lishiDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=ClishiDlg
VirtualFilter=dWC

