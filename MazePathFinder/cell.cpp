#include "cell.h"

void cell::setCellType(int type) {
	cellType = type;
}
int cell::getCellType() {
	return cellType;
}

cell::cell() {
	cellType = 0; 
}