/*
Exercise 1.
Create a two dimensional 3x3 array of integers that holds some numbers of your 
choice (each array cell should be initialised in program).

Write a program that asks the user to input x and y numbers (from 1 to 3). 
The program prints out in the console the value that is stored in the array 
cell numbered by x, y coordinates.
*/

#include <iostream>
#include <string>
#include <windows.h>
#include <math.h>
#include <iomanip>


using namespace std;
/////////////////////////////
// Function Declaration
void initMenu();
int userNumbers();




int main(){
	int multArr[3][3] = {{0,1,2}, {3,4,5}, {6,7,8}};

	//arr[i] = userNumbers();
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << "array["<<i<<"] ["<<j<<"] = "<<multArr[i][j]<< endl;
		}
	}

	initMenu();

	cout << "x: "; 
	int x = userNumbers();
	cout << "y: "; 
	int y = userNumbers();

	cout << "You requested to see the value "<<multArr[x][y]<< " at corrdinates x: "<<x<< " and y: "<<y<< endl;
	return 0;
}


////////////////////////////////
//  	--- FUNCTIONS ---
 
// -- INITIALIZATION -- //
void initMenu(){
	cout << "Please enter the x and y corrdinates of which value you would like to see." << endl;
}

int userNumbers(){
	int numbers;
	//initMenu();
	cout << "> ";
	cin >> setw(1)>> numbers;

	// Error check
	while (!cin.good()){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		//system("cls");
		initMenu();
		cout << "\n > Please enter Numeric values from 0-2 ";
		cin >> numbers;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return numbers;
};

