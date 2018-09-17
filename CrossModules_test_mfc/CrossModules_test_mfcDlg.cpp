
// CrossModules_test_mfcDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "CrossModules_test_mfc.h"
#include "CrossModules_test_mfcDlg.h"
#include "afxdialogex.h"
#include <StlApiDef.h>
#include "..\CrossModules_test_dll\CrossModules_test_dll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CCrossModules_test_mfcDlg 对话框



CCrossModules_test_mfcDlg::CCrossModules_test_mfcDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_CROSSMODULES_TEST_MFC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCrossModules_test_mfcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CCrossModules_test_mfcDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CCrossModules_test_mfcDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CCrossModules_test_mfcDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CCrossModules_test_mfcDlg 消息处理程序

BOOL CCrossModules_test_mfcDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码
	_CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CCrossModules_test_mfcDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CCrossModules_test_mfcDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CCrossModules_test_mfcDlg::OnBnClickedButton1()
{
	GL::vector<int> vct;
	fnCrossModules_test_vector(vct);

	GL::string s = fnCrossModules_test_string();

	GL::set<GL::wstring> st;
	fnCrossModules_test_set(st);

	GL::map<int, GL::string> mp;
	fnCrossModules_test_map(mp);

	GL::multimap<int, GL::string> mmp;
	fnCrossModules_test_multimap(mmp);

	GL::deque<int> dq;
	fnCrossModules_test_deque(dq);

	GL::list<int> lst;
	fnCrossModules_test_list(lst);

	GL::forward_list<int> flst;
	fnCrossModules_test_forwardlist(flst);

	GL::multiset<int> mst;
	fnCrossModules_test_multiset(mst);

	GL::unordered_set<int> unst;
	fnCrossModules_test_unordered_set(unst);

	GL::unordered_multiset<int> umst;
	fnCrossModules_test_unordered_multiset(umst);

	GL::unordered_map<int, int> ump;
	fnCrossModules_test_unordered_map(ump);

	GL::unordered_multimap<int, int> ummp;
	fnCrossModules_test_unordered_multimap(ummp);
}


void CCrossModules_test_mfcDlg::OnBnClickedButton2()
{
#if 0
	std::vector<int> vct;
	fnCrossModules_test_stdvector(vct);
#elif 0
	std::string s = fnCrossModules_test_stdstring();
#elif 0
	std::set<std::wstring> st;
	fnCrossModules_test_stdset(st);
#elif 0
	std::map<int, std::string> mp;
	fnCrossModules_test_stdmap(mp);
#elif 0
	std::multimap<int, std::string> mmp;
	fnCrossModules_test_stdmultimap(mmp);
#elif 0
	std::deque<int> dq;
	fnCrossModules_test_stddeque(dq);
#elif 0
	std::list<int> lst;
	fnCrossModules_test_stdlist(lst);
#elif 0
	std::forward_list<int> flst;
	fnCrossModules_test_stdforwardlist(flst);
#elif 0
	std::multiset<int> mst;
	fnCrossModules_test_stdmultiset(mst);
#elif 0
	std::unordered_set<int> unst;
	fnCrossModules_test_stdunordered_set(unst);
#elif 0
	std::unordered_multiset<int> umst;
	fnCrossModules_test_stdunordered_multiset(umst);
#elif 0
	std::unordered_map<int, int> ump;
	fnCrossModules_test_stdunordered_map(ump);
#elif 1
	std::unordered_multimap<int, int> ummp;
	fnCrossModules_test_stdunordered_multimap(ummp);
#endif
}
