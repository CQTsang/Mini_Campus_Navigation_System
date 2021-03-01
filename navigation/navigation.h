// navigation.h : main header file for the NAVIGATION application
//

#if !defined(AFX_NAVIGATION_H__7B912F7F_8358_4C66_8FB2_E25FC3F464CC__INCLUDED_)
#define AFX_NAVIGATION_H__7B912F7F_8358_4C66_8FB2_E25FC3F464CC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CNavigationApp:
// See navigation.cpp for the implementation of this class
//

class CNavigationApp : public CWinApp
{
public:
	CNavigationApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNavigationApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CNavigationApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NAVIGATION_H__7B912F7F_8358_4C66_8FB2_E25FC3F464CC__INCLUDED_)
