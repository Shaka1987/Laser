#include "stdafx.h"
#include "ParaJson.h"

#include <boost/locale.hpp>
ParameterSpace::CParaJson::CParaJson(std::string lines, CString title, bool bBin, DWORD index, BinArray& binArray)
{
	m_lines = lines;
	m_title = title;
	m_bBin = bBin;
	m_index = index;
	m_binArray = binArray;
}

ParameterSpace::CParaJson ParameterSpace::tag_invoke(boost::json::value_to_tag<CParaJson>, boost::json::value const& jv)
{
	auto& jo = jv.as_object();

	auto lines = jo.at("lines").as_string().c_str();
	CString title = CString(boost::locale::conv::from_utf(jo.at("title").as_string().c_str(), "GBK").c_str());
	DWORD index = atoi(jo.at("index").as_string().c_str());
	auto bBin = jo.at("bin").as_bool();
	ParameterSpace::BinArray binArray;
	if (bBin)
	{
		auto bins = jo.at("text").as_array();
		int i = 0;
		for (auto bin : bins)
		{
			binArray.at(i).name = CString(boost::locale::conv::from_utf(bin.at("name").as_string().c_str(), "GBK").c_str());
			binArray.at(i).description = CString(boost::locale::conv::from_utf(bin.at("description").as_string().c_str(), "GBK").c_str());
			i++;
			if (i > 8) break;
		}
	}
	return ParameterSpace::CParaJson(lines, title, bBin, index, binArray);
}
