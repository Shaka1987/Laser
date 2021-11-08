#include "stdafx.h"
#include "ExRibbonBar.h"

CExRibbonContextCaption* CExRibbonBar::GetConextCaption(int nIndex)
{
	ASSERT_VALID(this);

	if (nIndex < 0 || nIndex >= (int)m_arContextCaptions.GetSize())
	{
		ASSERT(FALSE);
		return NULL;
	}

	return (CExRibbonContextCaption*)m_arContextCaptions[nIndex];
}
