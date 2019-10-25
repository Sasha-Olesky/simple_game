// ScoreDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Sundar_Game.h"
#include "ScoreDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

extern INT NoOfClick;
extern double TimeScore;
extern short DlgState;

/////////////////////////////////////////////////////////////////////////////
// CScoreDlg dialog
CBrush m_bredtBrush;


CScoreDlg::CScoreDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CScoreDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CScoreDlg)
	//}}AFX_DATA_INIT
}


void CScoreDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CScoreDlg)
	DDX_Control(pDX, IDC_EDIT10, m_Score5);
	DDX_Control(pDX, IDC_EDIT9, m_Score4);
	DDX_Control(pDX, IDC_EDIT8, m_Score3);
	DDX_Control(pDX, IDC_EDIT7, m_Score2);
	DDX_Control(pDX, IDC_EDIT6, m_Score1);
	DDX_Control(pDX, IDC_EDIT5, m_Name5);
	DDX_Control(pDX, IDC_EDIT4, m_Name4);
	DDX_Control(pDX, IDC_EDIT3, m_Name3);
	DDX_Control(pDX, IDC_EDIT2, m_Name2);
	DDX_Control(pDX, IDC_EDIT1, m_Name1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CScoreDlg, CDialog)
	//{{AFX_MSG_MAP(CScoreDlg)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_WM_TIMER()
	ON_WM_ERASEBKGND()
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CScoreDlg message handlers

void CScoreDlg::OnOK() 
{
	// TODO: Add extra validation here
	if(DlgState == 1 )
	{
		WriteData(FALSE);
	}
	else if(DlgState == 2)
	{
		WriteData(TRUE);
	}
	DlgState = 0;
	CDialog::OnOK();
}

BOOL CScoreDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();

	if(DlgState == 0)
	{
		::CheckDlgButton(m_hWnd, IDC_RADIO2, 1);
		UpdateDataDlg(TRUE);
	} 
	else if(DlgState == 1)
	{
		::CheckDlgButton(m_hWnd, IDC_RADIO1, 1);
		CWnd* pGroupWnd = GetDlgItem(IDC_RADIO2);
		pGroupWnd->EnableWindow(FALSE);
		pGroupWnd = GetDlgItem(IDC_RADIO1);
		pGroupWnd->EnableWindow(FALSE);
		CheckScore(FALSE);
	}
	else if(DlgState == 2)
	{
		::CheckDlgButton(m_hWnd, IDC_RADIO2, 1);
		CWnd* pGroupWnd = GetDlgItem(IDC_RADIO1);
		pGroupWnd->EnableWindow(FALSE);
		pGroupWnd = GetDlgItem(IDC_RADIO2);
		pGroupWnd->EnableWindow(FALSE);
		CheckScore(TRUE);
	}

	Background.LoadBitmap(IDB_BITMAP3);
	
	BITMAP bm; //Create bitmap Handle to get dimensions
    Background.GetBitmap(&bm); //Load bitmap into handle
    bitmapSize = CSize(bm.bmWidth, bm.bmHeight); // Get bitmap Sizes;
    Invalidate(1); 
	// TODO: Add extra initialization here
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void CScoreDlg::UpdateDataDlg(BOOL ScoreIndex)
{
	char buffer[10];
	
	if(ScoreIndex == FALSE)
	{
		fp = fopen("C:\\TGame.dat", "a+");
	}
	else
	{
		fp = fopen("C:\\NGame.dat", "a+");
	}

	if( fp != NULL)
	{
		for (int i = 0; i < MAXIM_ENTRIES; i++)
		{
			memset(&ScoreTbl, 0x00, sizeof(SCORETable));

			fread(&ScoreTbl, sizeof(SCORETable), 1, fp);

			UpdateData(TRUE);
			memset(buffer,0,10);
			if(ScoreIndex == FALSE)
				sprintf(buffer, "%2.2f",ScoreTbl.HScore);
			else
				sprintf(buffer, "%-3.0f",ScoreTbl.HScore);

			switch(i+1)
			{
				case 1:
				SetDlgItemText(IDC_EDIT1, ScoreTbl.Name);
				SetDlgItemText(IDC_EDIT6, buffer);
				break;
				case 2:
				SetDlgItemText(IDC_EDIT2, ScoreTbl.Name);
				SetDlgItemText(IDC_EDIT7, buffer);
				break;
				case 3:
				SetDlgItemText(IDC_EDIT3, ScoreTbl.Name);
				SetDlgItemText(IDC_EDIT8, buffer);
				break;
				case 4:
				SetDlgItemText(IDC_EDIT4, ScoreTbl.Name);
				SetDlgItemText(IDC_EDIT9, buffer);
				break;
				case 5:
				SetDlgItemText(IDC_EDIT5, ScoreTbl.Name);
				SetDlgItemText(IDC_EDIT10, buffer);
				break;
			}
			UpdateData(FALSE);
		}	
		fclose(fp);
	}
}
void CScoreDlg::CheckScore(BOOL ScoreIndex)
{
	char buffer[10];
	BOOL Flag = FALSE;
	UpdateDataDlg(ScoreIndex);
	if(ScoreIndex == FALSE)
	{
		fp = fopen("C:\\TGame.dat", "r+");
		sprintf(buffer, "%-2.2f", TimeScore);
	}
	else
	{
		fp = fopen("C:\\NGame.dat", "r+");
		sprintf(buffer, "%-3d", NoOfClick);
	}

	if( fp != NULL)
	{
		for (int i = 0; i < MAXIM_ENTRIES; i++)
		{
			memset(&ScoreTbl, 0x00, sizeof(SCORETable));
			fread(&ScoreTbl, sizeof(SCORETable), 1, fp);

			int j = 0;
			if(j >= 0)
			{
				if((TimeScore <= ScoreTbl.HScore && ScoreIndex == FALSE) || (ScoreIndex == FALSE && ScoreTbl.HScore == 0))
				{
					Flag = TRUE;
				}
				else if((NoOfClick <= ScoreTbl.HScore && ScoreIndex == TRUE) || (ScoreIndex == TRUE && ScoreTbl.HScore == 0))
				{
					Flag = TRUE;				
				}
				if(TRUE == Flag)
				{
					Flag = FALSE;				
					switch (i+1)
					{
						case 1:
						{
							UpdateData(TRUE);
							
							m_Name1.EnableWindow(TRUE);
							SetDlgItemText(IDC_EDIT1, NULL);
							SetDlgItemText(IDC_EDIT6, buffer);
		
							SetDlgItemText(IDC_EDIT2, ScoreTbl.Name);
							Display(IDC_EDIT7,ScoreIndex,ScoreTbl.HScore);

							memset(&ScoreTbl, 0x00, sizeof(SCORETable));
							fread(&ScoreTbl, sizeof(SCORETable), 1, fp);;
							SetDlgItemText(IDC_EDIT3, ScoreTbl.Name);
						
							Display(IDC_EDIT8,ScoreIndex,ScoreTbl.HScore);

							memset(&ScoreTbl, 0x00, sizeof(SCORETable));
							fread(&ScoreTbl, sizeof(SCORETable), 1, fp);;
							SetDlgItemText(IDC_EDIT4, ScoreTbl.Name);

							Display(IDC_EDIT9,ScoreIndex,ScoreTbl.HScore);

							memset(&ScoreTbl, 0x00, sizeof(SCORETable));
							fread(&ScoreTbl, sizeof(SCORETable), 1, fp);;
							SetDlgItemText(IDC_EDIT5, ScoreTbl.Name);

							Display(IDC_EDIT10,ScoreIndex,ScoreTbl.HScore);

							UpdateData(FALSE);
						}
						return;
					
						case 2:
						UpdateData(TRUE);

						m_Name2.EnableWindow(TRUE);
						
						SetDlgItemText(IDC_EDIT2, NULL);
						SetDlgItemText(IDC_EDIT7, buffer);
		
						SetDlgItemText(IDC_EDIT3, ScoreTbl.Name);
						Display(IDC_EDIT8, ScoreIndex,ScoreTbl.HScore);

						memset(&ScoreTbl, 0x00, sizeof(SCORETable));
						fread(&ScoreTbl, sizeof(SCORETable), 1, fp);;
						SetDlgItemText(IDC_EDIT4, ScoreTbl.Name);
						
						Display(IDC_EDIT9,ScoreIndex,ScoreTbl.HScore);

						memset(&ScoreTbl, 0x00, sizeof(SCORETable));
						fread(&ScoreTbl, sizeof(SCORETable), 1, fp);;
						SetDlgItemText(IDC_EDIT5, ScoreTbl.Name);

						Display(IDC_EDIT10,ScoreIndex,ScoreTbl.HScore);

						UpdateData(FALSE);
						return;

						case 3:
						UpdateData(TRUE);
						
						m_Name3.EnableWindow(TRUE);

						SetDlgItemText(IDC_EDIT3, NULL);
						SetDlgItemText(IDC_EDIT8, buffer);

						SetDlgItemText(IDC_EDIT4, ScoreTbl.Name);

						Display(IDC_EDIT9,ScoreIndex,ScoreTbl.HScore);

						memset(&ScoreTbl, 0x00, sizeof(SCORETable));
						fread(&ScoreTbl, sizeof(SCORETable), 1, fp);;
						SetDlgItemText(IDC_EDIT5, ScoreTbl.Name);

						Display(IDC_EDIT10,ScoreIndex,ScoreTbl.HScore);

						UpdateData(FALSE);
						return;
					
						case 4:
						UpdateData(TRUE);

						m_Name4.EnableWindow(TRUE);

						SetDlgItemText(IDC_EDIT4, NULL);
						SetDlgItemText(IDC_EDIT9, buffer);


						SetDlgItemText(IDC_EDIT5, ScoreTbl.Name);

						Display(IDC_EDIT10,ScoreIndex,ScoreTbl.HScore);

						UpdateData(FALSE);
						return;
					
						case 5:
						UpdateData(TRUE);

						m_Name5.EnableWindow(TRUE);
						
						SetDlgItemText(IDC_EDIT5, NULL);
						SetDlgItemText(IDC_EDIT10, buffer);

						UpdateData(FALSE);
						return;
					}
				}
			}
		}
	}
}
void CScoreDlg::Display(int ID, BOOL ScoreIndex, double Value)
{
	char buffer[10];

	memset(buffer,0,10);
	if(ScoreIndex == FALSE)
		sprintf(buffer, "%-2.2f",Value);
	else
		sprintf(buffer, "%-3.0f",Value);

	SetDlgItemText(ID, buffer);
}

void CScoreDlg::WriteData(BOOL ScoreIndex)
{
	char buff[10];
	if(ScoreIndex == FALSE)
	{
		fp = fopen("C:\\TGame.dat", "w+");
	}
	else
	{
		fp = fopen("C:\\NGame.dat", "w+");
	}

	if( fp != NULL)
	{
		for (int i = 0; i < MAXIM_ENTRIES; i++)
		{
			memset(&ScoreTbl, 0x00, sizeof(SCORETable));
			memset(buff, 0x00, 10);
			UpdateData(TRUE);
			switch(i+1)
			{
				case 1:
				GetDlgItemText(IDC_EDIT1, (LPTSTR) ScoreTbl.Name, 25);
				GetDlgItemText(IDC_EDIT6, (LPTSTR) buff, 5);
				ScoreTbl.HScore = atof(buff);
				break;

				case 2:
				GetDlgItemText(IDC_EDIT2, ScoreTbl.Name, 25);
				GetDlgItemText(IDC_EDIT7, (LPTSTR) buff, 5);
				ScoreTbl.HScore = atof(buff);
				break;
				case 3:
				GetDlgItemText(IDC_EDIT3, ScoreTbl.Name, 25);
				GetDlgItemText(IDC_EDIT8, (LPTSTR) buff, 5);
				ScoreTbl.HScore = atof(buff);
				break;
				case 4:
				GetDlgItemText(IDC_EDIT4, ScoreTbl.Name, 25);
				GetDlgItemText(IDC_EDIT9, (LPTSTR) buff, 5);
				ScoreTbl.HScore = atof(buff);
				break;
				case 5:
				GetDlgItemText(IDC_EDIT5, ScoreTbl.Name, 25);
				GetDlgItemText(IDC_EDIT10, (LPTSTR) buff, 5);
				ScoreTbl.HScore = atof(buff);
				break;
			}
			UpdateData(FALSE);
			fwrite(&ScoreTbl, sizeof(SCORETable), 1, fp);
		}	
		fclose(fp);
	}
}

void CScoreDlg::OnRadio1() 
{
	// TODO: Add your control notification handler code here
	UpdateDataDlg(FALSE);
}

void CScoreDlg::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	UpdateDataDlg(TRUE);	
}

void CScoreDlg::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	
	KillTimer(1);


	CDialog::OnTimer(nIDEvent);
}

HBRUSH CScoreDlg::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	CBrush m_brush;
	
	// TODO: Change any attributes of the DC here
	pDC->SetBkMode(TRANSPARENT);
    if( pWnd->GetDlgCtrlID() == IDC_STATIC) 
    //Example of changing Text colour specific to a certain 
    //Static Text Contol in this case IDC_STATIC.
    {
		pDC->SetBkMode(TRANSPARENT);
        pDC->SetTextColor(RGB(255, 0, 0));
		return (HBRUSH)GetStockObject(NULL_BRUSH);
	}
    if( pWnd->GetDlgCtrlID() == IDC_EDIT1 || 
		pWnd->GetDlgCtrlID() == IDC_EDIT2 ||
		pWnd->GetDlgCtrlID() == IDC_EDIT3 ||
		pWnd->GetDlgCtrlID() == IDC_EDIT4 ||
		pWnd->GetDlgCtrlID() == IDC_EDIT5 ||
		pWnd->GetDlgCtrlID() == IDC_EDIT6 ||
		pWnd->GetDlgCtrlID() == IDC_EDIT7 ||
		pWnd->GetDlgCtrlID() == IDC_EDIT8 ||
		pWnd->GetDlgCtrlID() == IDC_EDIT9 ||
		pWnd->GetDlgCtrlID() == IDC_EDIT10) 
	{

		CBitmap m_edtbgbmp;
		m_edtbgbmp.DeleteObject();
		m_edtbgbmp.LoadBitmap(IDB_BITMAP2);
		m_bredtBrush.DeleteObject();
		m_bredtBrush.CreatePatternBrush(&m_edtbgbmp);

		pDC->SetBkMode(TRANSPARENT);
		pDC->SetTextColor(RGB(255,255,255));
		pDC->SelectObject(&m_bredtBrush);
		hbr=(HBRUSH)m_bredtBrush;
	}
    // TODO: Return a different brush if the default is not desired
	
	// TODO: Return a different brush if the default is not desired
	return hbr;
}

BOOL CScoreDlg::OnEraseBkgnd(CDC* pDC)
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
