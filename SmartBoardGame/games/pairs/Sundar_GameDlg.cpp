// Sundar_GameDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Sundar_Game.h"
#include "Sundar_GameDlg.h"
#include "InstructDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

INT NoOfClick;
double TimeScore;
short DlgState;
/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BOOL CSundar_GameDlg::Init = FALSE;
/////////////////////////////////////////////////////////////////////////////
// CSundar_GameDlg dialog

CSundar_GameDlg::CSundar_GameDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSundar_GameDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSundar_GameDlg)
	m_Click = 0;
	m_Time = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDI_ICON1);

}

void CSundar_GameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSundar_GameDlg)
	DDX_Control(pDX, IDC_BUTTON9, m_b9);
	DDX_Control(pDX, IDC_BUTTON8, m_b8);
	DDX_Control(pDX, IDC_BUTTON7, m_b7);
	DDX_Control(pDX, IDC_BUTTON6, m_b6);
	DDX_Control(pDX, IDC_BUTTON5, m_b5);
	DDX_Control(pDX, IDC_BUTTON4, m_b4);
	DDX_Control(pDX, IDC_BUTTON30, m_b30);
	DDX_Control(pDX, IDC_BUTTON3, m_b3);
	DDX_Control(pDX, IDC_BUTTON29, m_b29);
	DDX_Control(pDX, IDC_BUTTON28, m_b28);
	DDX_Control(pDX, IDC_BUTTON27, m_b27);
	DDX_Control(pDX, IDC_BUTTON26, m_b26);
	DDX_Control(pDX, IDC_BUTTON25, m_b25);
	DDX_Control(pDX, IDC_BUTTON24, m_b24);
	DDX_Control(pDX, IDC_BUTTON23, m_b23);
	DDX_Control(pDX, IDC_BUTTON22, m_b22);
	DDX_Control(pDX, IDC_BUTTON21, m_b21);
	DDX_Control(pDX, IDC_BUTTON20, m_b20);
	DDX_Control(pDX, IDC_BUTTON2, m_b2);
	DDX_Control(pDX, IDC_BUTTON19, m_b19);
	DDX_Control(pDX, IDC_BUTTON18, m_b18);
	DDX_Control(pDX, IDC_BUTTON17, m_b17);
	DDX_Control(pDX, IDC_BUTTON16, m_b16);
	DDX_Control(pDX, IDC_BUTTON15, m_b15);
	DDX_Control(pDX, IDC_BUTTON14, m_b14);
	DDX_Control(pDX, IDC_BUTTON13, m_b13);
	DDX_Control(pDX, IDC_BUTTON12, m_b12);
	DDX_Control(pDX, IDC_BUTTON11, m_b11);
	DDX_Control(pDX, IDC_BUTTON10, m_b10);
	DDX_Control(pDX, IDC_BUTTON1, m_b1);
	DDX_Text(pDX, IDC_EDIT2, m_Click);
	DDX_Text(pDX, IDC_EDIT1, m_Time);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CSundar_GameDlg, CDialog)
	//{{AFX_MSG_MAP(CSundar_GameDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11)
	ON_BN_CLICKED(IDC_BUTTON12, OnButton12)
	ON_BN_CLICKED(IDC_BUTTON13, OnButton13)
	ON_BN_CLICKED(IDC_BUTTON14, OnButton14)
	ON_BN_CLICKED(IDC_BUTTON15, OnButton15)
	ON_BN_CLICKED(IDC_BUTTON16, OnButton16)
	ON_BN_CLICKED(IDC_BUTTON17, OnButton17)
	ON_BN_CLICKED(IDC_BUTTON18, OnButton18)
	ON_BN_CLICKED(IDC_BUTTON19, OnButton19)
	ON_BN_CLICKED(IDC_BUTTON20, OnButton20)
	ON_BN_CLICKED(IDC_BUTTON21, OnButton21)
	ON_BN_CLICKED(IDC_BUTTON22, OnButton22)
	ON_BN_CLICKED(IDC_BUTTON23, OnButton23)
	ON_BN_CLICKED(IDC_BUTTON24, OnButton24)
	ON_BN_CLICKED(IDC_BUTTON25, OnButton25)
	ON_BN_CLICKED(IDC_BUTTON26, OnButton26)
	ON_BN_CLICKED(IDC_BUTTON27, OnButton27)
	ON_BN_CLICKED(IDC_BUTTON28, OnButton28)
	ON_BN_CLICKED(IDC_BUTTON29, OnButton29)
	ON_BN_CLICKED(IDC_BUTTON30, OnButton30)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_WM_TIMER()
	ON_COMMAND(ID_GAME_NEW, OnGameNew)
	ON_COMMAND(ID_GAME_PAUSE, OnGamePause)
	ON_COMMAND(ID_SCORE_HIGHSCORE, OnScoreHighscore)
	ON_COMMAND(ID_EXIT_EXIT, OnExitExit)
	ON_COMMAND(ID_HELP_INSTRUCTION, OnHelpInstruction)
	ON_COMMAND(ID_HELP_ABOUTGAME, OnHelpAboutgame)
	ON_COMMAND(ID_OPTIONS_IMAGES_GENERALICONS, OnOptionsImagesGeneral)
	ON_COMMAND(ID_OPTIONS_IMAGES_FLAG, OnOptionsImagesFlag)
	ON_COMMAND(ID_OPTIONS_IMAGES_XP, OnOptionsImagesXp)
	ON_COMMAND(ID_OPTIONS_IMAGES_FAVORITE, OnOptionsImagesFavorite)
	ON_COMMAND(ID_OPTIONS_IMAGES_FACE, OnOptionsImagesFace)
	ON_COMMAND(ID_OPTIONS_SIZE_4X5, OnOptionsSize4x5)
	ON_COMMAND(ID_OPTIONS_SIZE_6X5, OnOptionsSize6x5)
	ON_COMMAND(ID_OPTIONS_SIZE_6X3, OnOptionsSize6x3)
	ON_WM_CTLCOLOR()
	ON_WM_ERASEBKGND()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSundar_GameDlg message handlers

BOOL CSundar_GameDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
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
	
	CheckNoOfButton = NoOfButton = 30;
	NoOfClick = ClickNo = 1;
	DlgState = 0;
	NumClick = 0;
	TimeScore = Min = 0.0;

	int index;
	for (index = 0; index < MAX_BUTTONS; index++)
	{
		hIcon[index] = AfxGetApp()->LoadIcon(IDI_ICON1 + index);
	}

	for (index = 0; index < NoOfButton; index++)
	{
		m_button[index] = ::GetDlgItem(m_hWnd, IDC_BUTTON1 + index);
	}
	
	SetTimer(3, 1, NULL);

	OnOptionsImagesGeneral();
	LoadIcons(NoOfButton);

	char buffer[10];
	sprintf(buffer, "%2.2f", Min);
	UpdateData(TRUE);
	m_Time.Format("%s",buffer);
	UpdateData(FALSE);

	::SetWindowText(m_hWnd, TITLE);

	Background.LoadBitmap(IDB_BITMAP2);
	
	BITMAP bm; //Create bitmap Handle to get dimensions
    Background.GetBitmap(&bm); //Load bitmap into handle
    bitmapSize = CSize(bm.bmWidth, bm.bmHeight); // Get bitmap Sizes;
    Invalidate(1); 

	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CSundar_GameDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CSundar_GameDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting
		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

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
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CSundar_GameDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CSundar_GameDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	CheckMatchIcon(0);
}

void CSundar_GameDlg::OnButton2() 
{
	// TODO: Add your control notification handler code here
	CheckMatchIcon(1);	
}

void CSundar_GameDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(2);	
}
void CSundar_GameDlg::OnButton4() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(3);	
}
void CSundar_GameDlg::OnButton5() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(4);	
}
void CSundar_GameDlg::OnButton6() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(5);	
}
void CSundar_GameDlg::OnButton7() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(6);	
}
void CSundar_GameDlg::OnButton8() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(7);	
}
void CSundar_GameDlg::OnButton9() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(8);	
}
void CSundar_GameDlg::OnButton10() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(9);	
}
void CSundar_GameDlg::OnButton11() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(10);	
}
void CSundar_GameDlg::OnButton12() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(11);	
}
void CSundar_GameDlg::OnButton13() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(12);	
}
void CSundar_GameDlg::OnButton14() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(13);	
}
void CSundar_GameDlg::OnButton15() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(14);	
}
void CSundar_GameDlg::OnButton16() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(15);	
}
void CSundar_GameDlg::OnButton17() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(16);	
}
void CSundar_GameDlg::OnButton18() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(17);	
}

void CSundar_GameDlg::OnButton19() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(18);	
}
void CSundar_GameDlg::OnButton20() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(19);	
}
void CSundar_GameDlg::OnButton21() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(20);	
}
void CSundar_GameDlg::OnButton22() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(21);	
}
void CSundar_GameDlg::OnButton23() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(22);	
}
void CSundar_GameDlg::OnButton24() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(23);	
}
void CSundar_GameDlg::OnButton25() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(24);	
}
void CSundar_GameDlg::OnButton26() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(25);	
}
void CSundar_GameDlg::OnButton27() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(26);	
}
void CSundar_GameDlg::OnButton28() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(27);	
}
void CSundar_GameDlg::OnButton29() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(28);
}
void CSundar_GameDlg::OnButton30() 
{
	// TODO: Add your control notification handler code here
	
	CheckMatchIcon(29);	
}

void CSundar_GameDlg::LoadIcons(int NoBtns)
{
	 int hIndex, index1;
	 int ran;
	
	index1 = hIndex = 0;
	ran = 0;
	
	srand( (unsigned)time( NULL ) );
	int index;
	for(index = 0; index < (NoBtns) ; index++)
	{
		do
		{
			ran = rand();
			ran %= (NoBtns);
			index1 = 0;
			for(index1 = 0; index1 < index ; index1++)
			{
				if(ran == Array[index1])
				{
					index1 = -1;
					ran = rand();
					ran %= (NoBtns);
					continue;
				}
			}
		}while ( ran < 0 || ran >= NoBtns);

		Array[hIndex] = ran;

		hIndex++;
	}

	for(index = 0; index < NoBtns ; index++)
	{
		if(Array[index] >= (NoBtns/2))
		{
			Array[index] -= (NoBtns/2);
		}
//		DisplayIcon(index, hIcon[Array[index]]);
	}
}

void CSundar_GameDlg::CheckMatchIcon(int BtnIndex)
{
	
	NumClick++;

	if(Init == FALSE)
	{
		Init = TRUE;
		OnGamePause();
	}

	if(ClickNo > 2)
	{	
		DisplayIcon(CurBtnIndex, NULL);
		DisplayIcon(SelBtnIndex, NULL);
		SelBtnIndex = BtnIndex;
		CurBtnIndex = BtnIndex;
		DisplayIcon(CurBtnIndex, hIcon[Array[BtnIndex]]);
		ClickNo = 2;
	}
	else 
	if(ClickNo == 2)
	{
		CurBtnIndex = BtnIndex;
		DisplayIcon(CurBtnIndex, hIcon[Array[BtnIndex]]);
		ClickNo++;

		if(CurBtnIndex != SelBtnIndex)
		{
			unsigned int diff = Array[CurBtnIndex] - Array[SelBtnIndex];
			if( diff == 0)
			{
				DisplayIcon(CurBtnIndex, NULL, TRUE);
				DisplayIcon(SelBtnIndex, NULL, TRUE);
				if(CheckNoOfButton <= 0)
				{
					DlgState = 1;
					Init = FALSE;
					KillTimer(2);

					TimeScore = Min; 
					NoOfClick = NumClick;
					CScoreDlg Dlg;
					Dlg.DoModal();
					
					DlgState = 2;
					Dlg.DoModal();

				}
			}
			else
			{
				SetTimer(1, 1500, NULL);
			}
		}	
	}
	else if(ClickNo == 1)
	{
		SelBtnIndex = BtnIndex;
		CurBtnIndex = BtnIndex;
		ClickNo++;

		DisplayIcon(CurBtnIndex, hIcon[Array[BtnIndex]]);
	}
}

void CSundar_GameDlg::OnOK() 
{
	// TODO: Add extra validation here
	exit(0);	
}

void CSundar_GameDlg::OnCancel() 
{
	// TODO: Add extra cleanup here
	
	CDialog::OnCancel();
}

void CSundar_GameDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default

		if(nIDEvent == 1 && CurBtnIndex != SelBtnIndex)
		{
			DisplayIcon(CurBtnIndex, NULL);
			DisplayIcon(SelBtnIndex, NULL);
			ClickNo = 1;
			KillTimer(1);
		}	
		if(nIDEvent == 2)
		{
			CurSys = ::GetTickCount();

			float diff = 0;
			diff = (float) (CurSys - PrevSys);
			
			diff /= 1000;

			float mindiff = diff / 60;
			Min += mindiff;
			char buffer[10];
			sprintf(buffer, "%2.2f", Min);
			UpdateData(TRUE);
			m_Time.Format("%s",buffer);
			UpdateData(FALSE);
			PrevSys = CurSys;
		}

		UpdateData(TRUE);
		m_Click = NumClick;
		UpdateData(FALSE);
		

		CDialog::OnTimer(nIDEvent);
}

void CSundar_GameDlg::OnGameNew() 
{
	// TODO: Add your command handler code here
	SetNewGame();
}

void CSundar_GameDlg::OnGamePause() 
{
	CString strAboutMenu;
	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->GetMenuString(ID_GAME_PAUSE, strAboutMenu, 50);
		if(NumClick >= 0 && (strAboutMenu.Compare("Start") == 0))
		{
			PrevSys = ::GetTickCount();
			SetTimer(2, 300, NULL);
			strAboutMenu.Format("Pause");
			pSysMenu->ModifyMenu(ID_GAME_PAUSE, FALSE, ID_GAME_PAUSE, strAboutMenu);
		}
		else if(strAboutMenu.Compare("Pause") == 0)
		{
			Init = FALSE;
			KillTimer(2);
			strAboutMenu.Format("Start");
			pSysMenu->ModifyMenu(ID_GAME_PAUSE, FALSE, ID_GAME_PAUSE, strAboutMenu);
		}
	}
}

void CSundar_GameDlg::OnScoreHighscore() 
{
	// TOD: Add your command handler code here
	DlgState = 0;
	CScoreDlg Dlg;
	Dlg.DoModal();
}

void CSundar_GameDlg::OnExitExit() 
{
	// TODO: Add your command handler code here
	
	exit(0);
}

void CSundar_GameDlg::SetNewGame() 
{
/*	for (int index = 0; index < MAX_BUTTONS; index++)
	{
		hIcon[index] = AfxGetApp()->LoadIcon(IDI_ICON2 + index);
	}
*/
	for (int index = 0; index < NoOfButton; index++)
	{
		m_button[index] = ::GetDlgItem(m_hWnd, IDC_BUTTON1 + index);
		Array[index] = -1;
		DisplayIcon(index, NULL);
	}
	
	Init = FALSE;
	ClickNo = 1;
	NumClick = SelBtnIndex = CurBtnIndex = NoOfClick = DlgState = 0;
	TimeScore = Min = 0.0;
	CheckNoOfButton = NoOfButton;
	OnGamePause();
	LoadIcons(NoOfButton);

	char buffer[10];
	sprintf(buffer, "%2.2f", Min);
	UpdateData(TRUE);
	m_Time.Format("%s",buffer);
	UpdateData(FALSE);

	m_b1.ShowWindow(SW_SHOW);
	m_b2.ShowWindow(SW_SHOW);
	m_b3.ShowWindow(SW_SHOW);
	m_b4.ShowWindow(SW_SHOW);
	m_b5.ShowWindow(SW_SHOW);
	m_b6.ShowWindow(SW_SHOW);
	m_b7.ShowWindow(SW_SHOW);
	m_b8.ShowWindow(SW_SHOW);
	m_b9.ShowWindow(SW_SHOW);
	m_b10.ShowWindow(SW_SHOW);
	m_b11.ShowWindow(SW_SHOW);
	m_b12.ShowWindow(SW_SHOW);
	m_b13.ShowWindow(SW_SHOW);
	m_b14.ShowWindow(SW_SHOW);
	m_b15.ShowWindow(SW_SHOW);
	m_b16.ShowWindow(SW_SHOW);
	m_b17.ShowWindow(SW_SHOW);
	m_b18.ShowWindow(SW_SHOW);
	m_b19.ShowWindow(SW_SHOW);
	m_b20.ShowWindow(SW_SHOW);
	m_b21.ShowWindow(SW_SHOW);
	m_b22.ShowWindow(SW_SHOW);
	m_b23.ShowWindow(SW_SHOW);
	m_b24.ShowWindow(SW_SHOW);
	m_b25.ShowWindow(SW_SHOW);
	m_b26.ShowWindow(SW_SHOW);
	m_b27.ShowWindow(SW_SHOW);
	m_b28.ShowWindow(SW_SHOW);
	m_b29.ShowWindow(SW_SHOW);
	m_b30.ShowWindow(SW_SHOW);

	if(NoOfButton <= 24)
	{
		if(NoOfButton == 18)
		{
			m_b19.ShowWindow(SW_HIDE);
			m_b20.ShowWindow(SW_HIDE);
			m_b21.ShowWindow(SW_HIDE);
			m_b22.ShowWindow(SW_HIDE);
			m_b23.ShowWindow(SW_HIDE);
			m_b24.ShowWindow(SW_HIDE);
		}
		m_b25.ShowWindow(SW_HIDE);
		m_b26.ShowWindow(SW_HIDE);
		m_b27.ShowWindow(SW_HIDE);
		m_b28.ShowWindow(SW_HIDE);
		m_b29.ShowWindow(SW_HIDE);
		m_b30.ShowWindow(SW_HIDE);
	}
}

void CSundar_GameDlg::DisplayIcon(int BtnIndex, HICON hIcon, BOOL Flag)
{
	if(Flag == FALSE)
	{
		switch(BtnIndex+1)
		{
		case 1:
			if(m_b1)
				m_b1.SetIcon(hIcon);
		break;
		case 2:
			if(m_b2)
				m_b2.SetIcon(hIcon);
		break;
		case 3:
			if(m_b3)
				m_b3.SetIcon(hIcon);
		break;
		case 4:
			if(m_b4)
				m_b4.SetIcon(hIcon);
		break;
		case 5:
			if(m_b5)
				m_b5.SetIcon(hIcon);
		break;
		case 6:
			if(m_b6)
				m_b6.SetIcon(hIcon);
		break;
		case 7:
			if(m_b7)
				m_b7.SetIcon(hIcon);
		break;
		case 8:
			if(m_b8)
				m_b8.SetIcon(hIcon);
		break;
		case 9:
			if(m_b9)
			m_b9.SetIcon(hIcon);
		break;
		case 10:
			if(m_b10)
			m_b10.SetIcon(hIcon);
		break;
		case 11:
			if(m_b11)
			m_b11.SetIcon(hIcon);
		break;
		case 12:
			if(m_b12)
			m_b12.SetIcon(hIcon);
		break;
		case 13:
			if(m_b13)
			m_b13.SetIcon(hIcon);
		break;
		case 14:
			if(m_b14)
			m_b14.SetIcon(hIcon);
		break;
		case 15:
			if(m_b15)
			m_b15.SetIcon(hIcon);
		break;
		case 16:
			if(m_b16)
			m_b16.SetIcon(hIcon);
		break;
		case 17:
			if(m_b17)
			m_b17.SetIcon(hIcon);
		break;
		case 18:
			if(m_b18)
			m_b18.SetIcon(hIcon);
		break;
		case 19:
			if(m_b19)
			m_b19.SetIcon(hIcon);
		break;
		case 20:
			if(m_b20)
			m_b20.SetIcon(hIcon);
		break;
		case 21:
			if(m_b21)
			m_b21.SetIcon(hIcon);
		break;
		case 22:
			if(m_b22)
			m_b22.SetIcon(hIcon);
		break;
		case 23:
			if(m_b23)
			m_b23.SetIcon(hIcon);
		break;
		case 24:
			if(m_b24)
			m_b24.SetIcon(hIcon);
		break;
		case 25:
			if(m_b25)
			m_b25.SetIcon(hIcon);
		break;
		case 26:
			if(m_b26)
			m_b26.SetIcon(hIcon);
		break;
		case 27:
			if(m_b27)
			m_b27.SetIcon(hIcon);
		break;
		case 28:
			if(m_b28)
			m_b28.SetIcon(hIcon);
		break;
		case 29:
			if(m_b29)
			m_b29.SetIcon(hIcon);
		break;
		case 30:
			if(m_b30)
			m_b30.SetIcon(hIcon);
		break;
		}
	}
	else
	{
		CheckNoOfButton --;
		switch(BtnIndex+1)
		{
		case 1:
			m_b1.ShowWindow(SW_HIDE);
		break;
		case 2:
			m_b2.ShowWindow(SW_HIDE);
		break;
		case 3:
			m_b3.ShowWindow(SW_HIDE);
		break;
		case 4:
			m_b4.ShowWindow(SW_HIDE);
		break;
		case 5:
			m_b5.ShowWindow(SW_HIDE);
		break;
		case 6:
			m_b6.ShowWindow(SW_HIDE);
		break;
		case 7:
			m_b7.ShowWindow(SW_HIDE);
		break;
		case 8:
			m_b8.ShowWindow(SW_HIDE);
		break;
		case 9:
			m_b9.ShowWindow(SW_HIDE);
		break;
		case 10:
			m_b10.ShowWindow(SW_HIDE);
		break;
		case 11:
			m_b11.ShowWindow(SW_HIDE);
		break;
		case 12:
			m_b12.ShowWindow(SW_HIDE);
		break;
		case 13:
			m_b13.ShowWindow(SW_HIDE);
		break;
		case 14:
			m_b14.ShowWindow(SW_HIDE);
		break;
		case 15:
			m_b15.ShowWindow(SW_HIDE);
		break;
		case 16:
			m_b16.ShowWindow(SW_HIDE);
		break;
		case 17:
			m_b17.ShowWindow(SW_HIDE);
		break;
		case 18:
			m_b18.ShowWindow(SW_HIDE);
		break;
		case 19:
			m_b19.ShowWindow(SW_HIDE);
		break;
		case 20:
			m_b20.ShowWindow(SW_HIDE);
		break;
		case 21:
			m_b21.ShowWindow(SW_HIDE);
		break;
		case 22:
			m_b22.ShowWindow(SW_HIDE);
		break;
		case 23:
			m_b23.ShowWindow(SW_HIDE);
		break;
		case 24:
			m_b24.ShowWindow(SW_HIDE);
		break;
		case 25:
			m_b25.ShowWindow(SW_HIDE);
		break;
		case 26:
			m_b26.ShowWindow(SW_HIDE);
		break;
		case 27:
			m_b27.ShowWindow(SW_HIDE);
		break;
		case 28:
			m_b28.ShowWindow(SW_HIDE);
		break;
		case 29:
			m_b29.ShowWindow(SW_HIDE);
		break;
		case 30:
			m_b30.ShowWindow(SW_HIDE);
		break;
		}
	}
}


void CSundar_GameDlg::OnHelpInstruction() 
{
	// TODO: Add your command handler code here

	CInstructDlg Dlg;
	Dlg.DoModal();
}

void CSundar_GameDlg::OnHelpAboutgame() 
{
	// TODO: Add your command handler code here
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();	
}

void CSundar_GameDlg::OnOptionsImagesGeneral() 
{
	// TODO: Add your command handler code here
	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_GENERALICONS, MF_BYCOMMAND | MF_CHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FLAG, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_XP, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FAVORITE, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FACE, MF_BYCOMMAND | MF_UNCHECKED);
	}

	for (int index = 0; index < MAX_BUTTONS; index++)
	{
		hIcon[index] = AfxGetApp()->LoadIcon(IDI_ICON2 + index);
	}
}

void CSundar_GameDlg::OnOptionsImagesFlag() 
{
	// TODO: Add your command handler code here
	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_GENERALICONS, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FLAG, MF_BYCOMMAND | MF_CHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_XP, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FAVORITE, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FACE, MF_BYCOMMAND | MF_UNCHECKED);
	}
	for (int index = 0; index < MAX_BUTTONS; index++)
	{
		hIcon[index] = AfxGetApp()->LoadIcon(IDI_ICON32 + index);
	}	
}

void CSundar_GameDlg::OnOptionsImagesXp() 
{
	// TODO: Add your command handler code here

	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_GENERALICONS, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FLAG, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_XP, MF_BYCOMMAND | MF_CHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FAVORITE, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FACE, MF_BYCOMMAND | MF_UNCHECKED);
	}
	for (int index = 0; index < MAX_BUTTONS; index++)
	{
		hIcon[index] = AfxGetApp()->LoadIcon(IDI_ICON17 + index);
	}
}

void CSundar_GameDlg::OnOptionsImagesFavorite() 
{
	// TODO: Add your command handler code here
	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_GENERALICONS, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FLAG, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_XP, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FAVORITE, MF_BYCOMMAND | MF_CHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FACE, MF_BYCOMMAND | MF_UNCHECKED);
	}

	for (int index = 0; index < MAX_BUTTONS; index++)
	{
		hIcon[index] = AfxGetApp()->LoadIcon(IDI_ICON47 + index);
	}	
	
}

void CSundar_GameDlg::OnOptionsImagesFace() 
{
	// TODO: Add your command handler code here
	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_GENERALICONS, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FLAG, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_XP, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FAVORITE, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_IMAGES_FACE, MF_BYCOMMAND | MF_CHECKED);
	}
	for (int index = 0; index < MAX_BUTTONS; index++)
	{
		hIcon[index] = AfxGetApp()->LoadIcon(IDI_ICON62 + index);
	}	
	
}

void CSundar_GameDlg::OnOptionsSize4x5() 
{
	// TODO: Add your command handler code here
	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->CheckMenuItem(ID_OPTIONS_SIZE_6X5, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_SIZE_4X5, MF_BYCOMMAND | MF_CHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_SIZE_6X3, MF_BYCOMMAND | MF_UNCHECKED);
	}

	NoOfButton = 24;
	m_b25.ShowWindow(SW_HIDE);
	m_b26.ShowWindow(SW_HIDE);
	m_b27.ShowWindow(SW_HIDE);
	m_b28.ShowWindow(SW_HIDE);
	m_b29.ShowWindow(SW_HIDE);
	m_b30.ShowWindow(SW_HIDE);
	SetNewGame();
	CheckMenuState();
}

void CSundar_GameDlg::OnOptionsSize6x5() 
{
	// TODO: Add your command handler code here
	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->CheckMenuItem(ID_OPTIONS_SIZE_6X5, MF_BYCOMMAND | MF_CHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_SIZE_4X5, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_SIZE_6X3, MF_BYCOMMAND | MF_UNCHECKED);
	}
	NoOfButton = 30;	
	SetNewGame();
	CString strAboutMenu;
	pSysMenu = GetMenu();
	CheckMenuState();
}

void CSundar_GameDlg::OnOptionsSize6x3() 
{
	// TODO: Add your command handler code here
	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->CheckMenuItem(ID_OPTIONS_SIZE_6X5, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_SIZE_4X5, MF_BYCOMMAND | MF_UNCHECKED);
		pSysMenu->CheckMenuItem(ID_OPTIONS_SIZE_6X3, MF_BYCOMMAND | MF_CHECKED);
	}
	NoOfButton = 18;
	m_b19.ShowWindow(SW_HIDE);
	m_b20.ShowWindow(SW_HIDE);
	m_b21.ShowWindow(SW_HIDE);
	m_b22.ShowWindow(SW_HIDE);
	m_b23.ShowWindow(SW_HIDE);
	m_b24.ShowWindow(SW_HIDE);

	m_b25.ShowWindow(SW_HIDE);
	m_b26.ShowWindow(SW_HIDE);
	m_b27.ShowWindow(SW_HIDE);
	m_b28.ShowWindow(SW_HIDE);
	m_b29.ShowWindow(SW_HIDE);
	m_b30.ShowWindow(SW_HIDE);
	SetNewGame();	
	CheckMenuState();

//	::SetWindowRgn(
//	::SetWindowPos()
}

void CSundar_GameDlg::CheckMenuState()
{
	CString strAboutMenu;
	CMenu* pSysMenu = GetMenu();
	if (pSysMenu != NULL)
	{
		pSysMenu->GetMenuString(ID_GAME_PAUSE, strAboutMenu, 50);
		if(strAboutMenu.Compare("Pause") == 0)
			OnGamePause();
	}
}

HBRUSH CSundar_GameDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	// TODO: Change any attributes of the DC here
	pDC->SetBkMode(TRANSPARENT);
    if( pWnd->GetDlgCtrlID() == IDC_STATIC) 
    //Example of changing Text colour specific to a certain 
    //Static Text Contol in this case IDC_STATIC.
    {
		pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(RGB(0, 0, 255));
		pDC->SetPolyFillMode(0);
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}
    if( pWnd->GetDlgCtrlID() == IDC_EDIT1 || 
		pWnd->GetDlgCtrlID() == IDC_EDIT2 ) 
	{
		pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(RGB(0, 0, 0));
        pDC->SetBkColor(RGB(0, 0, 0));
	}
    if( pWnd->GetDlgCtrlID() == IDC_BUTTON1)
	{
		pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(RGB(0, 0, 0));
        pDC->SetBkColor(RGB(0, 0, 0));
		pDC->SetPolyFillMode(0);
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}
    // TODO: Return a different brush if the default is not desired
	
	// TODO: Return a different brush if the default is not desired
	return hbr;
}

BOOL CSundar_GameDlg::OnEraseBkgnd(CDC* pDC)
{
    CDC dcMemory;
    dcMemory.CreateCompatibleDC(pDC);
    CBitmap* pOldbitmap = dcMemory.SelectObject(&Background);
    CRect rcClient;
    GetClientRect(&rcClient);
    const CSize& sbitmap = bitmapSize;
	pDC->StretchBlt(0, 0, rcClient.Width(), 
		rcClient.Height(), &dcMemory,
		0, 0,sbitmap.cx,sbitmap.cy, SRCCOPY);
    dcMemory.SelectObject(pOldbitmap);
    return TRUE;
    //return CDialog::OnEraseBkgnd(pDC); Remove and return TRUE
}

void CSundar_GameDlg::OnSize(UINT nType, int cx, int cy) 
{
	CDialog::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	
}
