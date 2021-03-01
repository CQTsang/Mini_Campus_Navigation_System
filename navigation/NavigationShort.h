#if !defined(AFX_NAVIGATIONSHORT_H__3CAC22F1_4134_443F_BE57_7F77DC7D2388__INCLUDED_)
#define AFX_NAVIGATIONSHORT_H__3CAC22F1_4134_443F_BE57_7F77DC7D2388__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NavigationShort.h : header file
//
#include <string>
#include<iostream>
const int Max=100;

using namespace std;
/////////////////////////////////////////////////////////////////////////////
// CNavigationShort dialog

class CNavigationShort : public CDialog
{
// Construction
public:
	CNavigationShort(CWnd* pParent = NULL);   // standard constructor
	void getinfo();     //获取文件
	//数组以1为起点
	string place[Max];		//存放点名字
	int vertexNum;			//点数	
	int edge[Max][Max];		//存放边的数组
	int dist[Max];          //用来更新的存某点到原点距离的数组 
	int shortestlength;      //最短路径      
	//以下开始是函数
	int Min(int dist[],int vertexNum);      //求dist数组中最小的那个 
	string Dijkstra(string start,string destination);   //求两点之间最短路径
	int transform(string p);     //将地点字符串转为该点在数组中的下标 

// Dialog Data
	//{{AFX_DATA(CNavigationShort)
	enum { IDD = IDD_SHORT };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNavigationShort)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CNavigationShort)
	afx_msg void OnPaint();
	afx_msg void OnBacktoindex();
	afx_msg void OnEdit();
	afx_msg void OnOk();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NAVIGATIONSHORT_H__3CAC22F1_4134_443F_BE57_7F77DC7D2388__INCLUDED_)

