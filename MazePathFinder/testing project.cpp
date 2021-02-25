// testing project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cell.h"
#include "pathfinder.h"
using namespace std;

int main()
{	
	cout << "Final Project" << endl;
	cout << "-------------" << endl;
	cout << "\nMap: " << endl;
	
	cell fullMap[5][6];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++)
			fullMap[i][j].setCellType(1); 
	}



	/* // map 1
	fullMap[1][0].setCellType(0);
	fullMap[1][1].setCellType(0);
	fullMap[1][2].setCellType(0);
	fullMap[1][3].setCellType(0);
	fullMap[1][4].setCellType(0);

	fullMap[2][4].setCellType(0);

	fullMap[3][4].setCellType(0);
	fullMap[4][4].setCellType(2);
	*/

	/* // map 2
	fullMap[0][3].setCellType(0);

	fullMap[1][1].setCellType(0);
	fullMap[1][2].setCellType(0);
	fullMap[1][3].setCellType(0);
	fullMap[1][4].setCellType(0);
	fullMap[1][5].setCellType(0);

	fullMap[2][0].setCellType(0);
	fullMap[2][1].setCellType(0);
	fullMap[2][3].setCellType(0);
	fullMap[2][5].setCellType(0);

	fullMap[3][0].setCellType(0);
	fullMap[3][3].setCellType(0);
	fullMap[3][5].setCellType(2);
	*/


	/*
	 // map 3
	fullMap[0][1].setCellType(0);
	fullMap[0][2].setCellType(0);
	fullMap[0][3].setCellType(0);

	fullMap[1][3].setCellType(0);

	fullMap[2][1].setCellType(0);
	fullMap[2][2].setCellType(0);
	fullMap[2][3].setCellType(0);
	fullMap[2][4].setCellType(0);
	fullMap[2][5].setCellType(0);

	fullMap[3][1].setCellType(0);
	fullMap[3][3].setCellType(0);

	fullMap[4][1].setCellType(0);
	fullMap[4][3].setCellType(2);
	*/

	
	// map 4
	fullMap[2][2].setCellType(0);
	fullMap[2][3].setCellType(0);
	fullMap[2][4].setCellType(0);

	fullMap[3][1].setCellType(0);
	fullMap[3][2].setCellType(0);
	fullMap[3][3].setCellType(0);
	fullMap[3][4].setCellType(0);

	fullMap[4][1].setCellType(0);
	fullMap[4][2].setCellType(0);
	fullMap[4][3].setCellType(2);
	fullMap[4][4].setCellType(0);
	

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			cout << fullMap[i][j].getCellType() << " ";
		}
		cout << endl;
	}


	pathfinder pf(&fullMap[0][0], 3, 1);

	cout << "\nPath: " << endl;

	pf.search();

	cout << endl;

}


