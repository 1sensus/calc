
// calcRakovDlg.cpp: файл реализации
//

#include "pch.h"
#include "framework.h"
#include "calcRakov.h"
#include "calcRakovDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Диалоговое окно CcalcRakovDlg



CcalcRakovDlg::CcalcRakovDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCRAKOV_DIALOG, pParent)
	, temp_num(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	num1 = 0.0f;
	num2 = 0.0f;
	sign = 0;
}

void CcalcRakovDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, temp_num);
}

BEGIN_MESSAGE_MAP(CcalcRakovDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON0, &CcalcRakovDlg::OnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON1, &CcalcRakovDlg::OnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CcalcRakovDlg::OnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CcalcRakovDlg::OnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CcalcRakovDlg::OnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CcalcRakovDlg::OnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CcalcRakovDlg::OnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CcalcRakovDlg::OnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CcalcRakovDlg::OnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CcalcRakovDlg::OnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTONeq, &CcalcRakovDlg::OnClickedButtoneq)
	ON_BN_CLICKED(IDC_BUTTONminus, &CcalcRakovDlg::OnClickedButtonminus)
	ON_BN_CLICKED(IDC_BUTTONplus, &CcalcRakovDlg::OnClickedButtonplus)
	ON_BN_CLICKED(IDC_BUTTONmultiply, &CcalcRakovDlg::OnClickedButtonmultiply)
	ON_BN_CLICKED(IDC_BUTTONdivide, &CcalcRakovDlg::OnClickedButtondivide)
	ON_BN_CLICKED(IDC_dot, &CcalcRakovDlg::OnClickedDot)
END_MESSAGE_MAP()


// Обработчики сообщений CcalcRakovDlg

BOOL CcalcRakovDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Задает значок для этого диалогового окна.  Среда делает это автоматически,
	//  если главное окно приложения не является диалоговым
	SetIcon(m_hIcon, TRUE);			// Крупный значок
	SetIcon(m_hIcon, FALSE);		// Мелкий значок

	// TODO: добавьте дополнительную инициализацию

	return TRUE;  // возврат значения TRUE, если фокус не передан элементу управления
}

// При добавлении кнопки свертывания в диалоговое окно нужно воспользоваться приведенным ниже кодом,
//  чтобы нарисовать значок.  Для приложений MFC, использующих модель документов или представлений,
//  это автоматически выполняется рабочей областью.

void CcalcRakovDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // контекст устройства для рисования

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Выравнивание значка по центру клиентского прямоугольника
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Нарисуйте значок
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Система вызывает эту функцию для получения отображения курсора при перемещении
//  свернутого окна.
HCURSOR CcalcRakovDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}





void CcalcRakovDlg::OnClickedButton0()
{
	UpdateData(true);
	if (temp_num != _T(""))
		temp_num = temp_num + _T("0");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButton1()
{
	UpdateData(true);
	temp_num = temp_num + _T("1");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButton2()
{
	UpdateData(true);
	temp_num = temp_num + _T("2");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButton3()
{
	UpdateData(true);
	temp_num = temp_num + _T("3");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButton4()
{
	UpdateData(true);
	temp_num = temp_num + _T("4");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButton5()
{
	UpdateData(true);
	temp_num = temp_num + _T("5");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButton6()
{
	UpdateData(true);
	temp_num = temp_num + _T("6");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButton7()
{
	UpdateData(true);
	temp_num = temp_num + _T("7");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButton8()
{
	UpdateData(true);
	temp_num = temp_num + _T("8");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButton9()
{
	UpdateData(true);
	temp_num = temp_num + _T("9");
	UpdateData(false);
}


void CcalcRakovDlg::OnClickedButtoneq()
{
	switch (sign)
	{
	case'+':
		UpdateData(true);
		STR_to_Float(temp_num, num1);
		num1 += num2;
		temp_num.Format(_T("%.3f"), num1);
		UpdateData(false);
		break;
	case '-':
		UpdateData(true);
		STR_to_Float(temp_num, num1);
		num1 -= num2;
		temp_num.Format(_T("%.3f"), num1);
		UpdateData(false);
		break;
	case '*':
		UpdateData(true);
		STR_to_Float(temp_num, num2);
		num1 *= num2;
		temp_num.Format(_T("%.3f"), num1);
		UpdateData(false);
		break;
	case '/':
		UpdateData(true);
		STR_to_Float(temp_num, num2);
		if (num2 == 0)
		{
			temp_num = _T("Error: dividing on zero");
		}
		else 
		{
			num1 /= num2;
			temp_num.Format(_T("%.3f"), num1);
		}
		UpdateData(false);
		break;

	case'0':break;
	}
}


void CcalcRakovDlg::OnClickedButtonminus()
{
	UpdateData(true);
	STR_to_Float(temp_num, num1);
	temp_num = "";
	UpdateData(false);
	sign = '-';
}


void CcalcRakovDlg::OnClickedButtonplus()
{
	UpdateData(true);
	STR_to_Float(temp_num, num1);
	temp_num = "";
	UpdateData(false);
	sign = '+';
}

void CcalcRakovDlg::OnClickedButtonmultiply()
{
	UpdateData(true);
	STR_to_Float(temp_num, num1);
	temp_num = "";
	UpdateData(false);
	sign = '*';
}


void CcalcRakovDlg::OnClickedButtondivide()
{
	UpdateData(true);
	STR_to_Float(temp_num, num1);
	temp_num = "";
	UpdateData(false);
	sign = '/';
}


void CcalcRakovDlg::OnClickedDot()
{
	UpdateData(true);
	temp_num = temp_num + _T(".");
	UpdateData(false);
}

void CcalcRakovDlg::STR_to_Float(CString str, float& result)
{
}
