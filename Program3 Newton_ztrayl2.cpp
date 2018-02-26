/* ------------------------------------------------
   TraylorProg3.cpp
 
   Program #3: Newton game to get 5 in a row.
               Players alternate placing a piece or
               rotating a column.
   Class: CS 141
   Author: Zachary Traylor
   Lab: Tues 5am
   System:  C++ Mac Xcode

   Grading Rubric:

   50 Execution points
         2 Displays header info and instructions on screen when run
         5 Move number and character-to-move update correctly
         3 Handles upper and lower-case user input, spaces between inputs, and 'X' to exit
         5 Does error checking of user input for valid input and space in column
        10 Handles 'R' to rotate a column
        10 Correctly places pieces on board
        15 Detects a win of 5 in a row, and gives the corresponding ending message
   45 Programming Style (Given only if program runs substantially correctly)
         5 Program naming convention is followed
        10 Meaningful identifier names
        10 Comments: Has header and this rubric.  Has comments on each block of code
        10 Appropriate data and control structures 
        10 Code Layout: Appropriate indentation and blank lines
   ------------------------------------------------
*/
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <ctime>

using namespace std;

void DisplayBoard(char board[8][5]){
	cout << "  1    2    3    4    5 " << endl;
	cout << " ---  ---  ---  ---  ---" << endl;
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 5; j++){
			cout << "  " << board[i][j] << "  ";
		}
		cout << endl;
	}
	cout << " ---  ---  ---  ---  ---" << endl;
	cout << "  1    2    3    4    5 " << endl;
}

int main(){
	
	char board[8][5];
	
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 5; j++){
			board[i][j] = '.';
		}
	}
	
	DisplayBoard(board);
	
	return 0;
}
	
