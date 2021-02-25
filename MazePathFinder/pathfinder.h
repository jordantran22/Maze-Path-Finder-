#pragma once
#include "cell.h"
#include "position.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class pathfinder
{
private:
	cell* map;
	position currentPosition;
	
	// depth first search 
	bool dfs(position p, vector<string>& v);

public:
	// search function
	void search();
	
	// constructor
	pathfinder(cell* pmap, int initialRow, int initialColumn);

};

