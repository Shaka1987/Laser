#pragma once
#include <string>
#include <boost/json.hpp>

namespace ParameterSpace {

	typedef struct binData
	{
		CString name;
		CString description;
	}BinData;
	typedef std::array<BinData, 8> BinArray;

	class CParaJson
	{
	public:
		std::string m_lines;
		bool m_bBin;
		DWORD m_index;
		CString m_title;

		BinArray m_binArray;
	public:
		CParaJson(std::string lines, CString title, bool bBin, DWORD index, BinArray& binArray);

		~CParaJson() {};
	};
	CParaJson tag_invoke(boost::json::value_to_tag<CParaJson>, boost::json::value const& jv);

}