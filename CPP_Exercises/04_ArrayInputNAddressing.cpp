/*
Write an application that asks the user to input four numbers. 
The inputted numbers should be stored in a 4 element array of doubles. 
The numbers should be summarized and the result printed in the console 
as well as the address of first and last element of the array.

eg.
	User inputted:
	val 1 = 2
	val 2 = 3
	val 3 = 5
	val 4 = 6

Output:
	Result = 16
	Address of first element = 0x69fed8
	Address of last element = 0x69fef8
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
double userNumbers();




int main(){
	double arr[4];
	int len = sizeof(arr)/sizeof(arr[0]);
	initMenu();
	for (int i=0; i<len; i++){
		arr[i] = userNumbers();
	}

	for (int j=0; j<len; j++){
		cout << "array[" << j <<"] = " << arr[j] <<", address @ "<< &arr[j] << endl;
	}
	
	return 0;
}


////////////////////////////////
//  	--- FUNCTIONS ---
 
// -- INITIALIZATION -- //
void initMenu(){
	cout << "Please enter four numbers you would like stored into the array." << endl;
}

double userNumbers(){
	double numbers;
	//initMenu();
	cout << "> ";
	cin >> numbers;

	// Error check
	while (!cin.good()){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		//system("cls");
		initMenu();
		cout << "\n > Please enter Numeric values ";
		cin >> numbers;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return numbers;
};

