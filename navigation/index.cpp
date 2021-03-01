// INDEX.cpp : implementation file
//

#include "stdafx.h"
#include "navigation.h"
#include "INDEX.h"
#include "NavigationShort.h"
#include "NavigationRoute.h"
#include "ShowNM.h"
#include "ShowJXL.h"
#include "ShowKYWGC.h"
#include "ShowTJC.h"
#include "ShowTSG.h"
#include "ShowXSHDZX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// INDEX dialog


INDEX::INDEX(CWnd* pParent /*=NULL*/)
	: CDialog(INDEX::IDD, pParent)
{
	//{{AFX_DATA_INIT(INDEX)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void INDEX::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(INDEX)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(INDEX, CDialog)
	//{{AFX_MSG_MAP(INDEX)
	ON_BN_CLICKED(IDC_GOTOSHORT, OnGotoshort)
	ON_BN_CLICKED(IDC_GOTOROUTE, OnGotoroute)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_EDIT, OnEdit)
	ON_BN_CLICKED(IDC_NANMEN, OnNanmen)
	ON_BN_CLICKED(IDC_KYWGC, OnKywgc)
	ON_BN_CLICKED(IDC_YDC, OnYdc)
	ON_BN_CLICKED(IDC_JXL, OnJxl)
	ON_BN_CLICKED(IDC_XSHDZX, OnXshdzx)
	ON_BN_CLICKED(IDC_TSG, OnTsg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// INDEX message handlers

void INDEX::OnGotoshort() 
{
	CDialog::OnOK();
	CNavigationShort dlg;			//打开界面
	dlg.DoModal();	
}

void INDEX::OnGotoroute() 
{
	CDialog::OnOK();
	CNavigationRoute dlg;			//打开界面
	dlg.DoModal();	
}

void INDEX::OnPaint() 
{
		CPaintDC dc(this); // device context for painting

		CBitmap m_bitmap;
		m_bitmap.LoadBitmap(BACKGROUND); 

		CDC memdc;
        memdc.CreateCompatibleDC(&dc);
        memdc.SelectObject(&m_bitmap);
        int width,height;
        BITMAP bmp;
        m_bitmap.GetBitmap(&bmp);                 //获取位图的宽度，高度，
        width= bmp.bmWidth;
        height= bmp.bmHeight;
        CRect rect;
        this->GetClientRect(&rect);             //矩形。
		dc.SetStretchBltMode(COLORONCOLOR);
        dc.StretchBlt(rect.left,rect.top,rect.Width(),rect.Height(),&memdc,0,0,width,height,SRCCOPY);	
}

void INDEX::OnEdit() 
{
	CDialog::OnCancel();	
}

void INDEX::OnNanmen() 
{
	ShowNM dlg;			//打开界面
	dlg.DoModal();
}

void INDEX::OnKywgc() 
{
	ShowKYWGC dlg;			//打开界面
	dlg.DoModal();
}

void INDEX::OnYdc() 
{
	ShowTJC dlg;			//打开界面
	dlg.DoModal();
}

void INDEX::OnJxl() 
{
	ShowJXL dlg;			//打开界面
	dlg.DoModal();
}

void INDEX::OnXshdzx() 
{
	ShowXSHDZX dlg;			//打开界面
	dlg.DoModal();
}

void INDEX::OnTsg() 
{
	ShowTSG dlg;			//打开界面
	dlg.DoModal();
}
