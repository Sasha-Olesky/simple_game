// Sundar_GameDlg.h : header file
//

#if !defined(AFX_SUNDAR_GAMEDLG_H__FA57EB4D_BA67_4CDA_9785_DD969A481863__INCLUDED_)
#define AFX_SUNDAR_GAMEDLG_H__FA57EB4D_BA67_4CDA_9785_DD969A481863__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CSundar_GameDlg dialog
#define MAX_BUTTONS	15
#include <time.h>
#include "ScoreDlg.h"

#define TITLE "- SS Memory Plus +"

class CSundar_GameDlg : public CDialog
{
// Construction
public:

	static BOOL Init;
	float Min;
	DWORD CurSys, PrevSys;
	HICON hIcon[MAX_BUTTONS];
	short Array[30];
	HWND  m_button[30];
	long NumClick;
	int ClickNo, NoOfButton, CheckNoOfButton ;
	int SelBtnIndex, CurBtnIndex;

	CBitmap Background; // For Holding The bitmap
    CBrush BrushHol; //For Handling Background of Text in Static Text
    CSize bitmapSize;

	void LoadIcons(int NoBtns);
	void CheckMatchIcon(int BtnIndex);
	void DisplayIcon(int BtnIndex, HICON hIcon, BOOL Flag = FALSE);
	void SetNewGame();
	void CheckMenuState();
public:
	CSundar_GameDlg(CWnd* pParent = NULL);	// standard constructor
// Dialog Data
	//{{AFX_DATA(CSundar_GameDlg)
	enum { IDD = IDD_SUNDAR_GAME_DIALOG };
	CButton	m_b9;
	CButton	m_b8;
	CButton	m_b7;
	CButton	m_b6;
	CButton	m_b5;
	CButton	m_b4;
	CButton	m_b30;
	CButton	m_b3;
	CButton	m_b29;
	CButton	m_b28;
	CButton	m_b27;
	CButton	m_b26;
	CButton	m_b25;
	CButton	m_b24;
	CButton	m_b23;
	CButton	m_b22;
	CButton	m_b21;
	CButton	m_b20;
	CButton	m_b2;
	CButton	m_b19;
	CButton	m_b18;
	CButton	m_b17;
	CButton	m_b16;
	CButton	m_b15;
	CButton	m_b14;
	CButton	m_b13;
	CButton	m_b12;
	CButton	m_b11;
	CButton	m_b10;
	CButton	m_b1;
	long	m_Click;
	CString	m_Time;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSundar_GameDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CSundar_GameDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton10();
	afx_msg void OnButton11();
	afx_msg void OnButton12();
	afx_msg void OnButton13();
	afx_msg void OnButton14();
	afx_msg void OnButton15();
	afx_msg void OnButton16();
	afx_msg void OnButton17();
	afx_msg void OnButton18();
	afx_msg void OnButton19();
	afx_msg void OnButton20();
	afx_msg void OnButton21();
	afx_msg void OnButton22();
	afx_msg void OnButton23();
	afx_msg void OnButton24();
	afx_msg void OnButton25();
	afx_msg void OnButton26();
	afx_msg void OnButton27();
	afx_msg void OnButton28();
	afx_msg void OnButton29();
	afx_msg void OnButton30();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnGameNew();
	afx_msg void OnGamePause();
	afx_msg void OnScoreHighscore();
	afx_msg void OnExitExit();
	afx_msg void OnHelpInstruction();
	afx_msg void OnHelpAboutgame();
	afx_msg void OnOptionsImagesGeneral();
	afx_msg void OnOptionsImagesFlag();
	afx_msg void OnOptionsImagesXp();
	afx_msg void OnOptionsImagesFavorite();
	afx_msg void OnOptionsImagesFace();
	afx_msg void OnOptionsSize4x5();
	afx_msg void OnOptionsSize6x5();
	afx_msg void OnOptionsSize6x3();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SUNDAR_GAMEDLG_H__FA57EB4D_BA67_4CDA_9785_DD969A481863__INCLUDED_)
