// 具有记忆的MP3.h : main header file for the 具有记忆的MP3 application
//

#if !defined(AFX_MP3_H__9E76C434_0109_4D30_9361_A5C7D3730374__INCLUDED_)
#define AFX_MP3_H__9E76C434_0109_4D30_9361_A5C7D3730374__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMP3App:
// See 具有记忆的MP3.cpp for the implementation of this class
//

class CMP3App : public CWinApp
{
public:
	CMP3App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMP3App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMP3App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MP3_H__9E76C434_0109_4D30_9361_A5C7D3730374__INCLUDED_)
