#if !defined(AFX_NAVIGATIONROUTE_H__FD6EAE0C_B435_4D93_BF98_7D7B2A6DF0E7__INCLUDED_)
#define AFX_NAVIGATIONROUTE_H__FD6EAE0C_B435_4D93_BF98_7D7B2A6DF0E7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NavigationRoute.h : header file
//
#include <string>
#include <iostream>

#define UNVISITED 0
#define VISITED 1

const int MaxSize=20;

using namespace std;
/////////////////////////////////////////////////////////////////////////////
// CNavigationRoute dialog

class CNavigationRoute : public CDialog
{
// Construction
public:
	CNavigationRoute(CWnd* pParent = NULL);   // standard constructor
	void getinfo();     //��ȡ�ļ�
	//������1Ϊ���
	string place[MaxSize];		//��ŵ�����
	int vertexNum;			//����	
	int edge[MaxSize][MaxSize];		//��űߵ�����
	bool *tag;
	string path;
	int routelength;		//�Ƽ�·������
	//���¿�ʼ�Ǻ���
	int FirstAdjVex(int v) ;          // ���ض���v�ĵ�һ���ڽӵ�
	int NextAdjVex(int v1, int v2);   // ���ض���v1�������v2����һ���ڽӵ�
	void DFS(int v);                  // ��ȱ���
	//string Route(string start);   //����̱���·��
	//int Min(int dist[],int vertexNum);      //��dist��������С���Ǹ�
	int transform(string p);     //���ص��ַ���תΪ�õ��������е��±� 

// Dialog Data
	//{{AFX_DATA(CNavigationRoute)
	enum { IDD = IDD_PATH };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNavigationRoute)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNavigationRoute)
	afx_msg void OnPaint();
	afx_msg void OnBacktoindex();
	afx_msg void OnEdit();
	afx_msg void OnChange();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NAVIGATIONROUTE_H__FD6EAE0C_B435_4D93_BF98_7D7B2A6DF0E7__INCLUDED_)
