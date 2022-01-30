#pragma once
#include <string>

#include <sstream> 
using namespace std;
string ws2s(const wstring& ws);
wstring s2ws(const string& s);
template <class Type>
Type stringToNum(const string& str)
{
	istringstream iss(str);
	Type num;
	iss >> num;
	return num;
}