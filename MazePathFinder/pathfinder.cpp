#include "pathfinder.h"


void pathfinder::search() {
	vector<string> solution;
	if (dfs(currentPosition, solution)) {
		// store initial position 
		solution.push_back("(" + to_string(currentPosition.getRow()) + "," + to_string(currentPosition.getColumn()) + ")");

		// print solution
		for (int i = solution.size() - 1; i >= 0; i--) {
			cout << solution.at(i) << " ";
		}
	}
	else {
		cout << "No path found. " << endl;
	}
}

bool pathfinder::dfs(position p, vector<string> &v) {
	const int rowSize = 5;
	const int columnSize = 6;

	cell* currentCell = map + (p.getRow() * columnSize + p.getColumn()); 
	if (currentCell->getCellType() == 2) {
		//string output = "(" + to_string(p.getRow()) + "," + to_string(p.getColumn()) + ")";
		//v.push_back(output); // position in the format (row, column)
		return true; 
	}

	// mark as visited 
	currentCell->setCellType(3);


	// order of the actions
	// left (decrease column value)
	// right (increase column value)
	// up (decrease row value)
	// down (increase row value)

	//paramaters 
	// 1) is the next position within the array boundaries 
	// 2) is the next position a wall 
	// 3) has the next position been visited 
	// 4) check whether the next position contains the path to the solution (call dfs again w/ next position)


	// pointers to the positions around current position

	cell *leftCell = map + (p.getRow() * columnSize + (p.getColumn() - 1));
	cell *rightCell = map + (p.getRow() * columnSize + (p.getColumn() + 1));
	cell *upCell = map + ((p.getRow() - 1) * columnSize + p.getColumn());
	cell *downCell = map + ((p.getRow() + 1) * columnSize + p.getColumn());

	// position objects around current position
	position leftPosition(p.getRow(), p.getColumn() - 1);
	position rightPosition(p.getRow(), p.getColumn() + 1);
	position upPosition(p.getRow() - 1, p.getColumn());
	position downPosition(p.getRow() + 1, p.getColumn()); 


	// left
	if (p.getColumn() - 1 >= 0 && leftCell->getCellType() != 1 && leftCell->getCellType() != 3 && dfs(leftPosition,v)) {
		// part of path of solution

		string output = "(" + to_string(leftPosition.getRow()) + "," + to_string(leftPosition.getColumn()) + ")";
		v.push_back(output); // position in the format (row, column)
			return true;
	}
	// right
	else if (p.getColumn() + 1 <= columnSize && rightCell->getCellType() != 1 && rightCell->getCellType() != 3 && dfs(rightPosition, v)) {
		string output = "(" + to_string(rightPosition.getRow()) + "," + to_string(rightPosition.getColumn()) + ")";
			v.push_back(output); // position in the format (row, column)
			return true;
	}
	// up
	else if (p.getRow() - 1 >= 0 && upCell->getCellType() != 1 && upCell->getCellType() != 3 && dfs(upPosition, v)) {
		string output = "(" + to_string(upPosition.getRow()) + "," + to_string(upPosition.getColumn()) + ")";
		v.push_back(output); // position in the format (row, column)
		return true;

	}
	// down 
	else if (p.getRow() + 1 <= rowSize && downCell->getCellType() != 1 && downCell->getCellType() != 3 && dfs(downPosition,v)) {
		string output = "(" + to_string(downPosition.getRow()) + "," + to_string(downPosition.getColumn()) + ")";
		v.push_back(output); // position in the format (row, column)
		return true;
	}


	return false;
}

pathfinder::pathfinder(cell* pmap, int initialRow, int initialColumn) {
	map = pmap;
	currentPosition.setRow(initialRow);
	currentPosition.setColumn(initialColumn);
}