#include "position.h"

void position::setColumn(int c) {
	column = c;
}
void position::setRow(int r) {
	row = r;
}
int position::getColumn() {
	return column;
}
int position::getRow() {
	return row;
}

position::position() {
	row = 0;
	column = 0;
}
position::position(int r, int c) {
	row = r;
	column = c; 
}