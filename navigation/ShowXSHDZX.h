#if !defined(AFX_SHOWXSHDZX_H__A28AB59B_495F_48C2_9F19_2EF2A7DBCF9C__INCLUDED_)
#define AFX_SHOWXSHDZX_H__A28AB59B_495F_48C2_9F19_2EF2A7DBCF9C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ShowXSHDZX.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ShowXSHDZX dialog

class ShowXSHDZX : public CDialog
{
// Construction
public:
	ShowXSHDZX(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ShowXSHDZX)
	enum { IDD = P_XSHDZX };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ShowXSHDZX)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ShowXSHDZX)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHOWXSHDZX_H__A28AB59B_495F_48C2_9F19_2EF2A7DBCF9C__INCLUDED_)
