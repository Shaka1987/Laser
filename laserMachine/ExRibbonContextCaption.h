#pragma once
#include <afxribbonbar.h>
class CExRibbonContextCaption :
    public CMFCRibbonContextCaption
{
public:
    void SetColor(AFX_RibbonCategoryColor color);
};

