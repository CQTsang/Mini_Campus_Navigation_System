// ShowKYWGC.cpp : implementation file
//

#include "stdafx.h"
#include "navigation.h"
#include "ShowKYWGC.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ShowKYWGC dialog


ShowKYWGC::ShowKYWGC(CWnd* pParent /*=NULL*/)
	: CDialog(ShowKYWGC::IDD, pParent)
{
	//{{AFX_DATA_INIT(ShowKYWGC)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ShowKYWGC::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ShowKYWGC)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ShowKYWGC, CDialog)
	//{{AFX_MSG_MAP(ShowKYWGC)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ShowKYWGC message handlers

void ShowKYWGC::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

		CBitmap m_bitmap;
		m_bitmap.LoadBitmap(KYWGC); 

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
