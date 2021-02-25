#pragma once
class position
{
	private:
		int row;
		int column;
	public:
		// accessor and mutators 
		void setColumn(int c);
		void setRow(int r);
		int getColumn();
		int getRow();

		// constructors
		position();
		position(int r, int c);

};

