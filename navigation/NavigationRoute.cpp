// NavigationRoute.cpp : implementation file
//

#include "stdafx.h"
#include "navigation.h"
#include "NavigationRoute.h"
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
// CNavigationRoute dialog


CNavigationRoute::CNavigationRoute(CWnd* pParent /*=NULL*/)
	: CDialog(CNavigationRoute::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNavigationRoute)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNavigationRoute::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNavigationRoute)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNavigationRoute, CDialog)
	//{{AFX_MSG_MAP(CNavigationRoute)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BACKTOINDEX, OnBacktoindex)
	ON_BN_CLICKED(IDC_EDIT, OnEdit)
	ON_BN_CLICKED(IDC_CHANGE, OnChange)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNavigationRoute message handlers

void CNavigationRoute::OnPaint() 
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

void CNavigationRoute::OnBacktoindex() 
{
	CDialog::OnOK();
	INDEX dlg;		
	dlg.DoModal();	
}

void CNavigationRoute::OnEdit() 
{
	CDialog::OnCancel();		
}

void CNavigationRoute::OnChange() 
{
	CString start;
	start.Format(_T("%s"),start);
	GetDlgItemText(IDC_SP,start);      //��ȡstart��λ��

	CNavigationRoute G;
	G.getinfo();

	int v=G.transform(start.GetBuffer(0));
	if(v==-1)
	{
		AfxMessageBox(_T("�����������飡"));
		
	}
	else
	{
		G.path=G.place[v];
	G.DFS(v);
	string s=G.path;

	s.c_str();
	SetDlgItemText(IDC_OPR,s.c_str());
	int p=G.routelength;
	CString str;
	str.Format(_T("%d"),p);
	SetDlgItemText(IDC_OPLENGTH,str);
	}

	
}

void CNavigationRoute::getinfo(){
string filename="campus.txt";
	//��ʼ�������飬�����ͱ���
	for(int m=1;m<MaxSize;m++)
		for(int n=1;n<MaxSize;n++){
			if(m==n)
				edge[m][n]=0;
			else
				edge[m][n]=99999;
		}
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
	tag = new bool[vertexNum];        // ���ɱ�־����
	for(int i= 0; i< vertexNum; i++)
    {  // ��ʼ����־����
        tag[i] = UNVISITED;
    }
	routelength=0;
}

int CNavigationRoute::transform(string p)
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

/*string CNavigationRoute::Route(string start)
{
	int i,j,k;
	int adjvex[17],lowcost[17];
	int v=transform(start);
	string path[17];
	
	for(i=1;i<vertexNum;i++)      //��ʼ��dist��path���� 
	{
		lowcost[i]=edge[v][i];
		adjvex[i]=v;
		path[i]=place[v]+"-->"+place[i];
	}

	lowcost[v]=0;

	for(k=2;k<vertexNum;k++)
	{
		j=Min(lowcost,vertexNum);
		lowcost[j]=0;
		//path[j]=path[adjvex[j]]+"-->"+place[j];
		for(i=1;i<vertexNum;i++)
		{
			if(edge[i][j]<lowcost[i]){
				lowcost[i]=edge[i][j];
				adjvex[i]=j;
			}
		}
	}
	routelength=lowcost[j];
	return path[k];
}

int CNavigationRoute::Min(int r[],int vertexNum)
{
	int index = 0, min = 100;
	for (int i = 1; i < vertexNum; i++)
		if (r[i] != 0 && r[i] < min)
		{
			min = r[i]; index = i;		
		}
	return index;
}*/

int CNavigationRoute::FirstAdjVex(int v)
// ������������ض���v�ĵ�1���ڽӵ�
{
    int k;
    for(k=1;k<=vertexNum;k++){
        if(edge[v][k]!=99999&&tag[k]==UNVISITED){
			routelength=routelength+edge[v][k];
            return k;
        }
    }
    return -1;    // ����-1��ʾ���ڽӵ�
}

int CNavigationRoute::NextAdjVex(int v1, int v2)
// ������������ض���v1�������v2����1���ڽӵ�
{
    int k;
    for(k=v2+2;k<=vertexNum;k++){
        if(edge[v1][k]!=99999&&tag[k]==UNVISITED){
			routelength=routelength+edge[v1][k];
            return k;
        }
    }
    return -1;    // ����-1��ʾ���ڽӵ�
}

void CNavigationRoute::DFS(int v)
{        
	int w;//���ص��Ƕ�Ӧ������ �����Ƕ�����Ϣ
    tag[v]=1;
    w=FirstAdjVex(v);//�ҵ�v�ĵ�һ���ٽ�� �Ҳ����Ļ�����-1
    while(w!=-1){
        DFS(w);
        w=NextAdjVex(v,w);
    }
	path=place[v]+"-->"+path;
}
