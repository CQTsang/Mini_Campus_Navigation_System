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
	void getinfo();     //获取文件
	//数组以1为起点
	string place[MaxSize];		//存放点名字
	int vertexNum;			//点数	
	int edge[MaxSize][MaxSize];		//存放边的数组
	bool *tag;
	string path;
	int routelength;		//推荐路径长度
	//以下开始是函数
	int FirstAdjVex(int v) ;          // 返回顶点v的第一个邻接点
	int NextAdjVex(int v1, int v2);   // 返回顶点v1的相对于v2的下一个邻接点
	void DFS(int v);                  // 深度遍历
	//string Route(string start);   //求最短遍历路径
	//int Min(int dist[],int vertexNum);      //求dist数组中最小的那个
	int transform(string p);     //将地点字符串转为该点在数组中的下标 

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
