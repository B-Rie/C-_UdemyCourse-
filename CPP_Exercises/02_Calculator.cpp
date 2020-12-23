/* 
Exercise 1.
Write a program that asks the user to input a value of length expressed in inches, convert
it to centimeters and print in the console.

Exercise 2.
Write a program that asks the user to input a temperature in celsius degrees. The result
should be the temperature expressed in Fahrenheit and Kelvin scales. Find the conversion 
formulas on the web.

Exercise 3. 
Write a program that asks the user to input two numbers and calculates their sum (addition).
Print the result on in the console.

Exercise 4.
Write a program that asks the user to input two numbers and calculates their difference (subtraction).
Print the result in the console.

Exercise 5.
Write a program that asks the user to input two numbers and calculates their product (multiplication).
Print the result in the console.

Exercise 6.
Write a program that asks the user to input two numbers and calculates their quotient (divison).
Print the result in the console.

Exercise 7.
Write a program that asks the user to input two numbers and calculates the remainder of their divison
(modulo). Print the result in the console.
*/

#include <iostream>
#include <string>
#include <windows.h>
#include <math.h>
#include <iomanip>


using namespace std;
/////////////////////////////
// Function Declaration
void length();
void temperature();
void calculator();
void initMenu();
int userDecision();
double inputChecker();
char operatorChecker();


int main(){
	
	int decision;
	while(decision != 4){
		cout << "\n";
		decision = userDecision();
		system("cls");
		switch(decision){
			case(1):
				length();
				break;
			case(2):
				temperature();
				break;
			case(3):
				calculator();
				break;
			default:
				
				cout<< "Good Bye" << endl;
		}
	}
	return 0;
}

////////////////////////////////
//  	--- FUNCTIONS ---
 
// -- INITIALIZATION -- //
void initMenu(){
	cout << "Which calculation would you like to use?" << endl;
	cout << "(1.) Length: inches to centimeters" << endl;
	cout << "(2.) Temperature: Celsius to Fahrenheit" << endl;
	cout << "(3.) Calculator" << endl;
	cout << "(4.) Leave the program" << endl;
}

int userDecision(){
	int decision;
	initMenu();
	cin >> setw(1) >> decision;

	// Error check
	while (!cin.good() || decision > 5 || decision < 1){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		system("cls");
		initMenu();
		cout << "\n > Please choose 1, 2, 3, or 4: ";
		cin >> decision;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return decision;
};


// -- OPTIONS -- //
void length(){
	
	cout << "Enter the length in inches you would like to calculate in centimeters." << endl;
	cout << "inches: ";
	double inches = inputChecker();
	Sleep(500);
	cout <<"calculating..."<< endl;
	Sleep(500);
	cout << "> " << inches*2.54 << " cm" << endl;
}

void temperature(){

	cout << "Enter temperature in Celsius that you would like to convert to Fahrenheit." << endl;
	cout << "Celsius: ";
	double temp = inputChecker();
	Sleep(1000);
	cout <<"calculating..."<< endl;
	Sleep(1000);
	cout << "> " << (temp*9/5)+32 << " F" << endl;
}

void calculator(){
	int j =1;
	cout << "Enter first Number: ";
	double var1 = inputChecker();

	cout << "Enter second Number: ";
	double var2 = inputChecker();
	
	do{
		cout << "Would you like to +, -, *, or /: ";
		char x = operatorChecker();
		switch(x) {
			case '+': 
				cout << "> " << var1 << " + " << var2 << " = " << var1 + var2 << endl;
				j = 0;
				break;
			case '-':
				cout << "> " << var1 << " - " << var2 << " = " << var1 - var2 << endl;
				j = 0;
				break;
			case '*':
				cout << "> " << var1 << " * " << var2 << " = " << var1 * var2 << endl;
				j = 0;
				break;
			case '/':
				if (var2 == 0) {
					cout << "> " << " You cannot divide by 0";
				} else
					cout << "> " << var1 << " / " << var2 << " = " << var1 / var2 << endl;
					j=0;
				break;
			default:
				cout << "Error occured" << endl;
				break;
		}
	}while(j == 1);
}


// --USER INPUT VALIDATION -- //
double inputChecker(){
	double input;
	cin >> input;

	// Error check
	while (!cin.good()){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		cout << "Error: Please Enter Numeric values" << endl;
		cin >> input;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return input;
}

char operatorChecker(){
	char input;
	cin >> setw(1) >> input;

	// Error check
	while (!cin.good()){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		cout << "Error: Please Enter an operator: +, -, / or *" << endl;
		cin >> input;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return input;

}