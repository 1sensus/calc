
// calcRakov.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CcalcRakovApp:
// Сведения о реализации этого класса: calcRakov.cpp
//

class CcalcRakovApp : public CWinApp
{
public:
	CcalcRakovApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CcalcRakovApp theApp;
