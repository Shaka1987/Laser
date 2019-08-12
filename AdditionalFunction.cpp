#include "stdafx.h"
#include "AdditionalFunction.h"
#include <locale.h>

string ws2s(const wstring& ws)
{
	size_t i;
	string curLocale = setlocale(LC_ALL, NULL);
	setlocale(LC_ALL, "chs");
	const wchar_t* _source = ws.c_str();
	size_t _dsize = 2 * ws.size() + 1;
	char* _dest = new char[_dsize];
	memset(_dest, 0x0, _dsize);
	wcstombs_s(&i, _dest, _dsize, _source, _dsize);
	string result = _dest;
	delete[] _dest;
	setlocale(LC_ALL, curLocale.c_str());
	return result;
}

wstring s2ws(const string& s)
{
	size_t i;
	string curLocale = setlocale(LC_ALL, NULL);
	setlocale(LC_ALL, "chs");
	const char* _source = s.c_str();
	size_t _dsize = s.size() + 1;
	wchar_t* _dest = new wchar_t[_dsize];
	wmemset(_dest, 0x0, _dsize);
	mbstowcs_s(&i, _dest, _dsize, _source, _dsize);
	wstring result = _dest;
	delete[] _dest;
	setlocale(LC_ALL, curLocale.c_str());
	return result;
}