
// calcRakovDlg.h: файл заголовка
//

#pragma once


// Диалоговое окно CcalcRakovDlg
class CcalcRakovDlg : public CDialogEx
{
// Создание
public:
	CcalcRakovDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCRAKOV_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP();
	float num1;
	float num2;
	char sign;
	CString temp_num;
public:
	// num_for_saving
	
	afx_msg void OnClickedButton0();
	afx_msg void OnClickedButton1();
	afx_msg void OnClickedButton2();
	afx_msg void OnClickedButton3();
	afx_msg void OnClickedButton4();
	afx_msg void OnClickedButton5();
	afx_msg void OnClickedButton6();
	afx_msg void OnClickedButton7();
	afx_msg void OnClickedButton8();
	afx_msg void OnClickedButton9();
	afx_msg void OnClickedButtoneq();
	afx_msg void OnClickedButtonminus();
	afx_msg void OnClickedButtonplus();
	afx_msg void OnClickedButtonmultiply();
	afx_msg void OnClickedButtondivide();
	afx_msg void OnClickedDot();
	void STR_to_Float(CString str,float &result);
};
