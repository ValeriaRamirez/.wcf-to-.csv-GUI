
// wcf to csv GUIDlg.cpp : implementation file
//

#include "stdafx.h"
#include "wcf to csv GUI.h"
#include "wcf to csv GUIDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CwcftocsvGUIDlg dialog



CwcftocsvGUIDlg::CwcftocsvGUIDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CwcftocsvGUIDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CwcftocsvGUIDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CwcftocsvGUIDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CwcftocsvGUIDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CwcftocsvGUIDlg message handlers

BOOL CwcftocsvGUIDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CwcftocsvGUIDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CwcftocsvGUIDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CwcftocsvGUIDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CwcftocsvGUIDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	FILE* F_WCF = fopen("C:\\Program Files (x86)\\DataRay\\Test_Perfect_Gaussian_2mm.wcf", "r+b");
	if (!F_WCF)
	{
		cout << "Failed to open the WCF image!" << endl;
	}
	else if (F_WCF)
	{
		//	Folder that will be created in Documents
		CreateDirectory((LPCWSTR)"C:\\Users\\vramirez\\Documents\\ConvertedImage", NULL);
		//	File created within the new folder
		FILE* NewBMPImage = fopen("C:\\Users\\vramirez\\Documents\\ConvertedImage\\Image.CSV", "w");
		if (!NewBMPImage)
		{
			cout << "Failed to create the new BMP file!" << endl;
		}
		//	Create the ofstream
		ofstream OutPut;
		OutPut.open("C:\\Users\\vramirez\\Documents\\ConvertedImage\\Image.CSV");
		//	Find the size of the entire image
		fseek(F_WCF, 0, SEEK_SET);
		fseek(F_WCF, 0, SEEK_END);
		i_WCF_Size = ftell(F_WCF);
		fseek(F_WCF, 0, SEEK_SET);

		i_RestOfFile = (i_WCF_Size - sizeof(WC_IMAGE_DATA_HEADER_2));
		int ConvertBytes = (i_RestOfFile * 2);

		//	Read and write the header files
		if (!OutPut.is_open())
		{
/////////////////////////	Message box that says this??	//////////////////////
			cout << "Failed to open the CSV file. Cannot begin writing." << endl;
		}
		else if (OutPut.is_open())
		{
			fread(&FileWCF, sizeof(FileWCF), 1, F_WCF);

			fread(&DataWCF, sizeof(DataWCF), 1, F_WCF);

			WORD Data;


			for (WORD Y = 1; Y < (DataWCF.Height + 1); Y++)
			{
				for (WORD X = 1; X < (DataWCF.Width + 1); X++)
				{
					fread(&Data, 2, 1, F_WCF);
					OutPut << (WORD)Data << ",";

				}
				OutPut << endl;
			}
		}
		OutPut.close();
	}
}
