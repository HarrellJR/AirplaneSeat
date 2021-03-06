/*
Jeremy Harrell
ITSE 1301
Airline seating
Making a program to make an airline seat chart
Programming something to mark down where passengars sit
*/


#include "stdafx.h"
#include <iostream>
using namespace std;

//Constant Rows and Columns for seating
const int INT_ROWS = 12;
const int INT_COLUMNS = 6;

//Setting up the seats for the rows and columns
void printSeats(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		cout << "Row " << (intRow + 1);
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << "\t";
			cout << arySeats[intRow][intColumn];
		}
		cout << endl;
	}
}

//Sets the blank spaces with .s
void clearSeats(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			arySeats[intRow][intColumn] = '.';
		}
	}
}

//Any set marks puts in an X
void fillSeat(char arySeats[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	arySeats[intRow][intColumn] = 'X';
}

int main()
{
	//Determines the number where the X will be put 
	char arySeats[INT_ROWS][INT_COLUMNS];
	clearSeats(arySeats, INT_ROWS);
	fillSeat(arySeats, INT_ROWS, 0, 0);
	fillSeat(arySeats, INT_ROWS, 1, 0);
	fillSeat(arySeats, INT_ROWS, 2, 0);
	fillSeat(arySeats, INT_ROWS, 3, 0);
	fillSeat(arySeats, INT_ROWS, 4, 0);
	fillSeat(arySeats, INT_ROWS, 5, 0);
	fillSeat(arySeats, INT_ROWS, 6, 0);
	fillSeat(arySeats, INT_ROWS, 3, 1);
	fillSeat(arySeats, INT_ROWS, 0, 2);
	fillSeat(arySeats, INT_ROWS, 1, 2);
	fillSeat(arySeats, INT_ROWS, 2, 2);
	fillSeat(arySeats, INT_ROWS, 3, 2);
	fillSeat(arySeats, INT_ROWS, 4, 2);
	fillSeat(arySeats, INT_ROWS, 5, 2);
	fillSeat(arySeats, INT_ROWS, 6, 2);
	fillSeat(arySeats, INT_ROWS, 0, 3);
	fillSeat(arySeats, INT_ROWS, 2, 3);
	fillSeat(arySeats, INT_ROWS, 3, 3);
	fillSeat(arySeats, INT_ROWS, 4, 3);
	fillSeat(arySeats, INT_ROWS, 5, 3);
	fillSeat(arySeats, INT_ROWS, 6, 3);
	printSeats(arySeats, INT_ROWS);
    return 0;
}

