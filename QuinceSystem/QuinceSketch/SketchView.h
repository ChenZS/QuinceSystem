#pragma once


class SketchView : public CView
{
protected: // create from serialization only
	SketchView();
	DECLARE_DYNCREATE(SketchView)

// Attributes
public:
	SketchDocument* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~SketchView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SketchView.cpp
inline SketchDocument* SketchView::GetDocument() const
   { return reinterpret_cast<SketchDocument*>(m_pDocument); }
#endif

