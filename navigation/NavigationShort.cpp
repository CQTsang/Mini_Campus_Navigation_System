// NavigationShort.cpp : implementation file
//

#include "stdafx.h"
#include "navigation.h"
#include "NavigationShort.h"
#include "INDEX.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
#include<stdio.h>
#include<stdlib.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

using namespace std;

/////////////////////////////////////////////////////////////////////////////
// CNavigationShort dialog


CNavigationShort::CNavigationShort(CWnd* pParent /*=NULL*/)
	: CDialog(CNavigationShort::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNavigationShort)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNavigationShort::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNavigationShort)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNavigationShort, CDialog)
	//{{AFX_MSG_MAP(CNavigationShort)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BACKTOINDEX, OnBacktoindex)
	ON_BN_CLICKED(IDC_EDIT, OnEdit)
	ON_BN_CLICKED(IDC_OK, OnOk)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNavigationShort message handlers

void CNavigationShort::OnPaint() 
{
		CPaintDC dc(this); // device context for painting

		CBitmap m_bitmap;
		m_bitmap.LoadBitmap(BACKGROUND); 

		CDC memdc;
        memdc.CreateCompatibleDC(&dc);
        memdc.SelectObject(&m_bitmap);
        int width,height;
        BITMAP bmp;
        m_bitmap.GetBitmap(&bmp);                 //��ȡλͼ�Ŀ�ȣ��߶ȣ�
        width= bmp.bmWidth;
        height= bmp.bmHeight;
        CRect rect;
        this->GetClientRect(&rect);             //���Ρ�
		dc.SetStretchBltMode(COLORONCOLOR);
        dc.StretchBlt(rect.left,rect.top,rect.Width(),rect.Height(),&memdc,0,0,width,height,SRCCOPY);
}

void CNavigationShort::OnBacktoindex() 
{
	CDialog::OnOK();
	INDEX dlg;		
	dlg.DoModal();
}

void CNavigationShort::OnEdit() 
{
	CDialog::OnCancel();	
}

void CNavigationShort::OnOk() 
{
	// TODO: Add your control notification handler code here
	CString start;
	start.Format(_T("%s"),start);
	GetDlgItemText(IDC_EDIT1,start);      //��ȡstart��λ��
	CString destination;
	destination.Format(_T("%s"),destination);
	GetDlgItemText(IDC_EDIT2,destination);  //��ȡdestination��λ��

	CNavigationShort G;
	G.getinfo();

	G.Dijkstra(start.GetBuffer(0),destination.GetBuffer(0));
	string s=G.Dijkstra(start.GetBuffer(0),destination.GetBuffer(0));

	s.c_str();
	SetDlgItemText(IDC_EDIT4,s.c_str());
	int p=G.shortestlength;
	CString str;
	str.Format(_T("%d"),p);
	SetDlgItemText(IDC_EDIT3,str);
}

int CNavigationShort::Min(int dist[],int vertexNum)
{
	int flag=0;int key=0;
	int i=1;
	for(i=1;i<vertexNum;i++)
	{
		if(dist[i]!=0&&dist[i]!=99999)
		{
			flag=dist[i];
			key=i;
			break;
		}
	}
	for(i=1;i<vertexNum;i++)
	{
		if(flag>dist[i]&&dist[i]!=0)
		{
			flag=dist[i];
			key=i;
		}
	}
	return key;
}

int CNavigationShort::transform(string p)
{
	int key=-1;
	for(int i=1;i<vertexNum;i++)
	{
		if(place[i]==p)
		{
			key=i;
			break;
		}
	}


	return key;
}

string CNavigationShort::Dijkstra(string start,string destination)
{
	int s=transform(start);
	int d=transform(destination);
	if(s==-1||d==-1)
	{
		AfxMessageBox(_T("�����������飡"));
		shortestlength=0;
		return start;
	}

	int i,k,num,dist[17];
	string path[17];
	
	for(i=1;i<vertexNum;i++)      //��ʼ��dist��path���� 
	{
		dist[i]=edge[s][i];
		path[i]=place[s]+"-->"+place[i];
	}
	
	for(num=1;num<vertexNum;num++){
		/*cout<<endl;
		cout<<"��ε�dist��"<<endl; 
		for(i=1;i<vertexNum;i++)
		{
			cout<<dist[i]<<" ";
		}
		cout<<endl;*/
		
		k=Min(dist,vertexNum);
		//cout<<path[k]<<","<<dist[k]<<endl;
		
		for(i=1;i<vertexNum;i++)
		{
			if(dist[i]>dist[k]+edge[k][i]){
				dist[i]=dist[k]+edge[k][i];
				path[i]=path[k]+"-->"+place[i];
			}
		}
		
		if(k==d)
		{
			break;
		}
		dist[k]=0;
	}
	//cout<<"����·��Ϊ��"<<path[k]<<",����Ϊ��"<<dist[k];
	shortestlength=dist[k];
	return path[k];
}

void CNavigationShort::getinfo(){
	string filename="campus.txt";
	//��ʼ�������飬�����ͱ���
	for(int m=1;m<Max;m++)
		for(int n=1;n<Max;n++)
			edge[m][n]=99999;
	vertexNum=1;
	//�����ı�������
	ifstream in(filename.c_str());
	if(in.is_open()){
		//��ȡ�ı���һ��
		string start="",end="",dis="";
		int distance;
		while(!in.eof()){
			//���һ�����ݵ���㣬�յ������
			getline(in,start,' ');
			getline(in,end,' ');
			getline(in,dis);
			distance=atoi(dis.c_str());
			if(start==""||end=="")
				continue;
			//�ҵ�����յ�
			int s=0,e=0;
			for(int i=1;i<vertexNum;i++){						
				if(place[i]==start){
					s=i;
				}
				if(place[i]==end){
					e=i;
				}
			}
			//�������յ�δ���룬��������յ�
			if(s==0&&start!=end){
				place[vertexNum]=start;
				s=vertexNum;
				vertexNum++;
			}
			if(e==0&&start!=end){
				place[vertexNum]=end;
				e=vertexNum;
				vertexNum++;
			}
			//д�����(����)
			edge[s][e]=distance;
			edge[e][s]=distance;
		}
	}
			//vertexNum--;
	/*for(int i=1;i<vertexNum;i++)
	{
		cout<<place[i]<<endl;
	}
	
	cout<<endl;
	for(int i=1;i<vertexNum;i++)
	{
		for(int j=1;j<vertexNum;j++)
		{
			cout<<edge[i][j]<<" ";
		}
		cout<<endl;
	}*/
}
