// InstructDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Sundar_Game.h"
#include "InstructDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CInstructDlg dialog


CInstructDlg::CInstructDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CInstructDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInstructDlg)
	m_Instruct = _T("");
	m_Instruct1 = _T("");
	m_Instruct2 = _T("");
	//}}AFX_DATA_INIT
}


void CInstructDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInstructDlg)
	DDX_Text(pDX, IDC_STATIC1, m_Instruct);
	DDX_Text(pDX, IDC_STATIC2, m_Instruct1);
	DDX_Text(pDX, IDC_STATIC3, m_Instruct2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInstructDlg, CDialog)
	//{{AFX_MSG_MAP(CInstructDlg)
	ON_WM_ERASEBKGND()
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInstructDlg message handlers

BOOL CInstructDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	UpdateData(TRUE);
	m_Instruct.Format("* How to play?\
		\nClick on similar pair of images clears the blocks.\
		\nGame will be finished when all the blocks are cleared.");

	m_Instruct1.Format("* Criteria for Highscore:\
		\na. The number of click event taken to finish the game.\
		b. The time taken to finish the game.");

	m_Instruct2.Format("* Options available:\
		 \ni. You can select different kind of images.\
		 \nii.You can change the block layout");

	UpdateData(FALSE);

	Background.LoadBitmap(IDB_BITMAP1);
	
	BITMAP bm; //Create bitmap Handle to get dimensions
    Background.GetBitmap(&bm); //Load bitmap into handle
    bitmapSize = CSize(bm.bmWidth, bm.bmHeight); // Get bitmap Sizes;
    Invalidate(1); 

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
HBRUSH CInstructDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	// TODO: Change any attributes of the DC here
	pDC->SetBkMode(TRANSPARENT);
    if( pWnd->GetDlgCtrlID() == IDC_STATIC1 ||
		pWnd->GetDlgCtrlID() == IDC_STATIC2 ||
		pWnd->GetDlgCtrlID() == IDC_STATIC3) 
    //Example of changing Text colour specific to a certain 
    //Static Text Contol in this case IDC_STATIC.
    {
		pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(RGB(255, 255, 255));
		pDC->SetPolyFillMode(0);
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}
    if( pWnd->GetDlgCtrlID() == IDC_STATIC4)
	{
		pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(RGB(155, 255, 155));
		pDC->SetPolyFillMode(0);
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}
    // TODO: Return a different brush if the default is not desired
	
	// TODO: Return a different brush if the default is not desired
	return hbr;
}

BOOL CInstructDlg::OnEraseBkgnd(CDC* pDC)
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
