
// wcf to csv GUI.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CwcftocsvGUIApp:
// See wcf to csv GUI.cpp for the implementation of this class
//

class CwcftocsvGUIApp : public CWinApp
{
public:
	CwcftocsvGUIApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CwcftocsvGUIApp theApp;