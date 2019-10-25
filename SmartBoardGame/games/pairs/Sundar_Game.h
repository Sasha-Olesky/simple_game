// Sundar_Game.h : main header file for the SUNDAR_GAME application
//

#if !defined(AFX_SUNDAR_GAME_H__78471893_8509_4C12_B63C_1441B1430798__INCLUDED_)
#define AFX_SUNDAR_GAME_H__78471893_8509_4C12_B63C_1441B1430798__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CSundar_GameApp:
// See Sundar_Game.cpp for the implementation of this class
//

class CSundar_GameApp : public CWinApp
{
public:
	CSundar_GameApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSundar_GameApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CSundar_GameApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SUNDAR_GAME_H__78471893_8509_4C12_B63C_1441B1430798__INCLUDED_)
