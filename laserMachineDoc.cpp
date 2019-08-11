// This MFC Samples source code demonstrates using MFC Microsoft Office Fluent User Interface
// (the "Fluent UI") and is provided only as referential material to supplement the
// Microsoft Foundation Classes Reference and related electronic documentation
// included with the MFC C++ library software.
// License terms to copy, use or distribute the Fluent UI are available separately.
// To learn more about our Fluent UI licensing program, please visit
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// Copyright (C) Microsoft Corporation
// All rights reserved.

// laserMachineDoc.cpp : implementation of the ClaserMachineDoc class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "laserMachine.h"
#endif

#include "laserMachineDoc.h"
#include "LaserProg.h"
#include "FactoryLaserProg.h"

#include <propkey.h>
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// ClaserMachineDoc

IMPLEMENT_DYNCREATE(ClaserMachineDoc, CDocument)

BEGIN_MESSAGE_MAP(ClaserMachineDoc, CDocument)
	ON_COMMAND(ID_EDIT_PASTE, &ClaserMachineDoc::OnEditPaste)
	ON_COMMAND(ID_FILE_OPEN, &ClaserMachineDoc::OnFileOpen)
END_MESSAGE_MAP()


// ClaserMachineDoc construction/destruction

ClaserMachineDoc::ClaserMachineDoc() noexcept
{
	// TODO: add one-time construction code here

}

ClaserMachineDoc::~ClaserMachineDoc()
{
}

BOOL ClaserMachineDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// ClaserMachineDoc serialization

void ClaserMachineDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

#ifdef SHARED_HANDLERS

// Support for thumbnails
void ClaserMachineDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modify this code to draw the document's data
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support for Search Handlers
void ClaserMachineDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Set search contents from document's data.
	// The content parts should be separated by ";"

	// For example:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void ClaserMachineDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())1
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// ClaserMachineDoc diagnostics

#ifdef _DEBUG
void ClaserMachineDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void ClaserMachineDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// ClaserMachineDoc commands


void ClaserMachineDoc::OnEditPaste()
{
	AfxMessageBox(_T("111"));
}


void ClaserMachineDoc::OnFileOpen()
{
	CString strFilter(_T("All Files(*.*)|*.*||"));
	CFileDialog dlg(TRUE, NULL, NULL, OFN_EXPLORER/*|OFN_HIDEREADONLY*/ | OFN_ENABLESIZING | OFN_FILEMUSTEXIST | OFN_NOCHANGEDIR, strFilter);
	if (dlg.DoModal() == IDOK)
	{
		m_CurrentProg =  CFactoryLaserProg::Create(dlg.GetPathName().GetBuffer(0));
		m_CurrentProg->Convert();
		((CMainFrame*)AfxGetApp()->m_pMainWnd)->UpdateProgram();
		UpdateAllViews(NULL);
	}

	//CStdioFile file;
	//CString strNc;
	//file.Open(_T("NC PROGRAM\\bird.NC"), CFile::modeRead);
	//while (file.ReadString(strNc))
	//{
	//	CLaserProg* pPrgElement = new CLaserProg;
	//	pPrgElement->SetNCString(strNc);
	//	m_progArray.Add(pPrgElement);
	//}
	//file.Close();
}
