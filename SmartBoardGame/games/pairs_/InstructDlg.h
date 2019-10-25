#if !defined(AFX_INSTRUCTDLG_H__A233B452_31EA_4128_A534_2A994E202A0A__INCLUDED_)
#define AFX_INSTRUCTDLG_H__A233B452_31EA_4128_A534_2A994E202A0A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// InstructDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInstructDlg dialog

class CInstructDlg : public CDialog
{
// Construction
public:
	CInstructDlg(CWnd* pParent = NULL);   // standard constructor

	CBitmap Background; // For Holding The bitmap
    CBrush BrushHol; //For Handling Background of Text in Static Text
    CSize bitmapSize;

// Dialog Data
	//{{AFX_DATA(CInstructDlg)
	enum { IDD = IDD_INSTRUCTHELP };
	CString	m_Instruct;
	CString	m_Instruct1;
	CString	m_Instruct2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInstructDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInstructDlg)
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INSTRUCTDLG_H__A233B452_31EA_4128_A534_2A994E202A0A__INCLUDED_)
