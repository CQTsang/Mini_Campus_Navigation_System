// navigationDlg.h : header file
//

#if !defined(AFX_NAVIGATIONDLG_H__83C0066B_423D_49EB_A4AF_63DFAC97568B__INCLUDED_)
#define AFX_NAVIGATIONDLG_H__83C0066B_423D_49EB_A4AF_63DFAC97568B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CNavigationDlg dialog

class CNavigationDlg : public CDialog
{
// Construction
public:
	CNavigationDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CNavigationDlg)
	enum { IDD = IDD_WELCOME };
	//}}AFX_DATA
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNavigationDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CNavigationDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSTART();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NAVIGATIONDLG_H__83C0066B_423D_49EB_A4AF_63DFAC97568B__INCLUDED_)
