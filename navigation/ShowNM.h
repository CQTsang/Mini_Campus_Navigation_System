#if !defined(AFX_SHOWNM_H__BDB4CAEB_2AA6_4493_8033_D5FFDA15D75A__INCLUDED_)
#define AFX_SHOWNM_H__BDB4CAEB_2AA6_4493_8033_D5FFDA15D75A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ShowNM.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ShowNM dialog

class ShowNM : public CDialog
{
// Construction
public:
	ShowNM(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ShowNM)
	enum { IDD = P_NM };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ShowNM)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ShowNM)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHOWNM_H__BDB4CAEB_2AA6_4493_8033_D5FFDA15D75A__INCLUDED_)
