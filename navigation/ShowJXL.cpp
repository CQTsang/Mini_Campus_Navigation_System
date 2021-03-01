// ShowJXL.cpp : implementation file
//

#include "stdafx.h"
#include "navigation.h"
#include "ShowJXL.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ShowJXL dialog


ShowJXL::ShowJXL(CWnd* pParent /*=NULL*/)
	: CDialog(ShowJXL::IDD, pParent)
{
	//{{AFX_DATA_INIT(ShowJXL)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ShowJXL::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ShowJXL)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ShowJXL, CDialog)
	//{{AFX_MSG_MAP(ShowJXL)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ShowJXL message handlers

void ShowJXL::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

		CBitmap m_bitmap;
		m_bitmap.LoadBitmap(JXL); 

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
