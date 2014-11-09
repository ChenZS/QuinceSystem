#pragma once

class ChildFrame : public CMDIChildWndEx
{
	DECLARE_DYNCREATE(ChildFrame)
public:
	ChildFrame();

protected:
	CSplitterWndEx m_wndSplitter;
public:
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual ~ChildFrame();

protected:
	DECLARE_MESSAGE_MAP()
};
