// FirtstDlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "OpenDialog.h"
#include "FirtstDlg.h"
#include "afxdialogex.h"


// FirtstDlg 대화 상자

IMPLEMENT_DYNAMIC(FirtstDlg, CDialogEx)

FirtstDlg::FirtstDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DLG_FIRST, pParent)
{

}

FirtstDlg::~FirtstDlg()
{
}

void FirtstDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(FirtstDlg, CDialogEx)
END_MESSAGE_MAP()


// FirtstDlg 메시지 처리기
