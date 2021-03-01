// ShowTJC.cpp : implementation file
//

#include "stdafx.h"
#include "navigation.h"
#include "ShowTJC.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// ShowTJC dialog


ShowTJC::ShowTJC(CWnd* pParent /*=NULL*/)
	: CDialog(ShowTJC::IDD, pParent)
{
	//{{AFX_DATA_INIT(ShowTJC)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void ShowTJC::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(ShowTJC)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(ShowTJC, CDialog)
	//{{AFX_MSG_MAP(ShowTJC)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// ShowTJC message handlers

void ShowTJC::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

		CBitmap m_bitmap;
		m_bitmap.LoadBitmap(TJC); 

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
