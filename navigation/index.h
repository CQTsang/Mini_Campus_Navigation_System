#include "navigationDlg.h"

#if !defined(AFX_INDEX_H__5F8B7F3A_60D8_4269_A28D_593299B3AE0A__INCLUDED_)
#define AFX_INDEX_H__5F8B7F3A_60D8_4269_A28D_593299B3AE0A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// INDEX.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// INDEX dialog

class INDEX : public CDialog
{
// Construction
public:
	INDEX(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(INDEX)
	enum { IDD = IDD_INDEX };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(INDEX)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(INDEX)
	afx_msg void OnGotoshort();
	afx_msg void OnGotoroute();
	afx_msg void OnPaint();
	afx_msg void OnEdit();
	afx_msg void OnNanmen();
	afx_msg void OnKywgc();
	afx_msg void OnYdc();
	afx_msg void OnJxl();
	afx_msg void OnXshdzx();
	afx_msg void OnTsg();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INDEX_H__5F8B7F3A_60D8_4269_A28D_593299B3AE0A__INCLUDED_)
