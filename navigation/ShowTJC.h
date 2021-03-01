#if !defined(AFX_SHOWTJC_H__17692A0E_D029_45CF_87EA_68C1514899CD__INCLUDED_)
#define AFX_SHOWTJC_H__17692A0E_D029_45CF_87EA_68C1514899CD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ShowTJC.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ShowTJC dialog

class ShowTJC : public CDialog
{
// Construction
public:
	ShowTJC(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ShowTJC)
	enum { IDD = P_TJC };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ShowTJC)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ShowTJC)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHOWTJC_H__17692A0E_D029_45CF_87EA_68C1514899CD__INCLUDED_)
