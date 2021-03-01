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
	void getinfo();     //��ȡ�ļ�
	//������1Ϊ���
	string place[Max];		//��ŵ�����
	int vertexNum;			//����	
	int edge[Max][Max];		//��űߵ�����
	int dist[Max];          //�������µĴ�ĳ�㵽ԭ���������� 
	int shortestlength;      //���·��      
	//���¿�ʼ�Ǻ���
	int Min(int dist[],int vertexNum);      //��dist��������С���Ǹ� 
	string Dijkstra(string start,string destination);   //������֮�����·��
	int transform(string p);     //���ص��ַ���תΪ�õ��������е��±� 

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

