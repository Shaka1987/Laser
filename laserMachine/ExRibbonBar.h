#pragma once
#include <afxribbonbar.h>
#include "ExRibbonContextCaption.h"
class CExRibbonBar :
    public CMFCRibbonBar
{
public:
    CExRibbonContextCaption* GetConextCaption(int index);
};

