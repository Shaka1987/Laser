#include "stdafx.h"
#include "LaserProg.h"
#include <fstream>
#include <string>
#include "CAMGraph.h"
#include "NCGraph.h"
using namespace std;

CLaserProg::CLaserProg(tstring_view fileName)
	:m_fileName(fileName)
{
}


CLaserProg::~CLaserProg()
{
	m_graphList.clear();
}

void CLaserProg::Build()

{
	m_graphList.clear();
	ifstream i(m_fileName.data());
	string str;
	while (getline(i, str))
	{
		sptString one_program = boost::make_shared<string>(str);
		sptGraph graph = CreateGraph(one_program); 
		m_graphList.push_back(graph);
	}
	i.close();
}

sptGraph CLaserProg::CreateGraph(sptString string)
{
	boost::shared_ptr<CGraph> graph;
	// to do : Change it to endwith();
	if (m_fileName.find(_T(".CAM")) == m_fileName.length() - 4)
	{
		graph = boost::make_shared<CCAMGraph>();
	}
	else if (m_fileName.find(_T(".NC")) == m_fileName.length() - 3)
	{
		graph = boost::make_shared<CNCGraph>();
	}
	else
	{
		graph = boost::make_shared<CGraph>();
	}
	graph->setup(string);
	return graph;
}


