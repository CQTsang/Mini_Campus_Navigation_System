// ShowXSHDZX.cpp : implementation file
//

#include "stdafx.h"
#include "navigation.h"
#include "ShowXSHDZX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ShowXSHDZX dialog


ShowXSHDZX::ShowXSHDZX(CWnd* pParent /*=NULL*/)
	: CDialog(ShowXSHDZX::IDD, pParent)
{
	//{{AFX_DATA_INIT(ShowXSHDZX)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ShowXSHDZX::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ShowXSHDZX)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ShowXSHDZX, CDialog)
	//{{AFX_MSG_MAP(ShowXSHDZX)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ShowXSHDZX message handlers

void ShowXSHDZX::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

		CBitmap m_bitmap;
		m_bitmap.LoadBitmap(XSHDZX); 

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
