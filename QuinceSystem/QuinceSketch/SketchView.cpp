
// SketchView.cpp : implementation of the SketchView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "QuinceSketch.h"
#endif

#include "SketchDocument.h"
#include "SketchView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// SketchView

IMPLEMENT_DYNCREATE(SketchView, CView)

BEGIN_MESSAGE_MAP(SketchView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// SketchView construction/destruction

SketchView::SketchView()
{
	// TODO: add construction code here

}

SketchView::~SketchView()
{
}

BOOL SketchView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// SketchView drawing

void SketchView::OnDraw(CDC* /*pDC*/)
{
	SketchDocument* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}

void SketchView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void SketchView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// SketchView diagnostics

#ifdef _DEBUG
void SketchView::AssertValid() const
{
	CView::AssertValid();
}

void SketchView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

SketchDocument* SketchView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(SketchDocument)));
	return (SketchDocument*)m_pDocument;
}
#endif //_DEBUG


// SketchView message handlers
