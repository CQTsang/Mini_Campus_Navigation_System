#if !defined(AFX_SHOWJXL_H__2FD66F9C_ACF5_4417_92E2_0B152FBC7890__INCLUDED_)
#define AFX_SHOWJXL_H__2FD66F9C_ACF5_4417_92E2_0B152FBC7890__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ShowJXL.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ShowJXL dialog

class ShowJXL : public CDialog
{
// Construction
public:
	ShowJXL(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ShowJXL)
	enum { IDD = P_JXL };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ShowJXL)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ShowJXL)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHOWJXL_H__2FD66F9C_ACF5_4417_92E2_0B152FBC7890__INCLUDED_)
