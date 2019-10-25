#if !defined(AFX_SCOREDLG_H__1FBBA6B0_CAA2_46E7_89DC_E73AFF91FA82__INCLUDED_)
#define AFX_SCOREDLG_H__1FBBA6B0_CAA2_46E7_89DC_E73AFF91FA82__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ScoreDlg.h : header file
//
#include <stdio.h>

typedef struct
{
	CHAR Name[25];
	double HScore;
}SCORETable;
/////////////////////////////////////////////////////////////////////////////
// CScoreDlg dialog
#define MAXIM_ENTRIES	5

class CScoreDlg : public CDialog
{
// Construction
public:
	SCORETable ScoreTbl;
	FILE *fp;
	BOOL ScoreIndex;

	CBitmap Background; // For Holding The bitmap
    CBrush BrushHol; //For Handling Background of Text in Static Text
    CSize bitmapSize;

	void UpdateDataDlg(BOOL ScoreIndex = FALSE);
	void WriteData(BOOL ScoreIndex = FALSE);
	void CheckScore(BOOL ScoreIndex = FALSE);
	void Display(int ID, BOOL Index, double Value);
public:
	CScoreDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CScoreDlg)
	enum { IDD = IDD_SCORE };
	CEdit	m_Score5;
	CEdit	m_Score4;
	CEdit	m_Score3;
	CEdit	m_Score2;
	CEdit	m_Score1;
	CEdit	m_Name5;
	CEdit	m_Name4;
	CEdit	m_Name3;
	CEdit	m_Name2;
	CEdit	m_Name1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CScoreDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CScoreDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SCOREDLG_H__1FBBA6B0_CAA2_46E7_89DC_E73AFF91FA82__INCLUDED_)
