#if !defined(AFX_SHOWKYWGC_H__9F08FEBE_86F8_473B_A7D8_B36C8E2CF32E__INCLUDED_)
#define AFX_SHOWKYWGC_H__9F08FEBE_86F8_473B_A7D8_B36C8E2CF32E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ShowKYWGC.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ShowKYWGC dialog

class ShowKYWGC : public CDialog
{
// Construction
public:
	ShowKYWGC(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ShowKYWGC)
	enum { IDD = P_KYWGC };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ShowKYWGC)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ShowKYWGC)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHOWKYWGC_H__9F08FEBE_86F8_473B_A7D8_B36C8E2CF32E__INCLUDED_)
