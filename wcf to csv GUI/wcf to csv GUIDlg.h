
// wcf to csv GUIDlg.h : header file
//
#include "DataStructs.h"
#include <iostream>
#include <fstream>

using namespace std;

#pragma once


// CwcftocsvGUIDlg dialog
class CwcftocsvGUIDlg : public CDialogEx
{
// Construction
public:
	CwcftocsvGUIDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_WCFTOCSVGUI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();




	WC_IMAGE_DATA_HEADER_2	FileWCF;
	WC_IMAGE_DATA	DataWCF;
	int i_WCF_Size;
	int i_Headers;
	int i_RestOfFile;
	int i_WidthBytes;
};
