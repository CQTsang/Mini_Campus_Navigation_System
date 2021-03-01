#if !defined(AFX_SHOWTSG_H__EA77BF58_E9A2_462B_A848_940FA989B89E__INCLUDED_)
#define AFX_SHOWTSG_H__EA77BF58_E9A2_462B_A848_940FA989B89E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ShowTSG.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// ShowTSG dialog

class ShowTSG : public CDialog
{
// Construction
public:
	ShowTSG(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(ShowTSG)
	enum { IDD = P_TSG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(ShowTSG)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(ShowTSG)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHOWTSG_H__EA77BF58_E9A2_462B_A848_940FA989B89E__INCLUDED_)
