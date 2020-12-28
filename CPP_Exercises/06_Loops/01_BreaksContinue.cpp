/*
Exercise 1.

Write a program that asks the user to input an integer number. Then the program calculates
the sum of all even numbers up to the number that the user inputted. Use continue instruction
to leave all odd numbers.

eg.

User inputted:
12

Output:
0 + 2 = 2
2 + 4 = 6
6 + 6 = 12
12 + 8 = 20
20 + 10 = 30
30 + 12 = 42
*/
/*
Exercise 2.

Write a program that shows the user current sum of numbers (starting with 0). Then it asks if
the user wants to add next number (raising by 1 in an infinite loop). If the user inputs Y or y
it adds the said number. If the user inputs N or n the number is skipped and gets incremented
by 1 (continue). If the user inputs anything else then Y/y or N/n the loop closes (break).

eg.

Output:
The current sum is: 0.
Do you want to add 1 ? 

User inputted:
N/n

Output:
The current sum is: 0.
Do you want to add 2 ?

User inputted:
Y/y

Output:
The current sum is: 2.
Do you want to add 3 ?
*/


#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>		// string
#include <algorithm> 	// tolower



using namespace std;
/////////////////////////////
// Function Declaration
double userNumbers();
string userDecision();
void exercise1();
void exercise2();



int main(){
	cout<< "Which Exercise would you like to try: 1 or 2:";
	double choice = userNumbers();
	if(choice==1){
		exercise1();
	}else if(choice==2){
		exercise2();
	}else{
		cout << "good bye" << endl;
	}
	return 0;
}


////////////////////////////////
//  	--- FUNCTIONS ---
 
// -- INITIALIZATION -- //

double userNumbers(){
	double numbers;
	cout << "> ";
	cin >> numbers;

	// Error check
	while (!cin.good()){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		cout << "\n > Please enter a Numeric value ";
		cin >> numbers;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return numbers;
};

string userDecision(){
	string decision;
	cout << "> ";
	cin >> decision;

	// Error check
	while (!cin.good()){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		cout << "\n > Please enter a Numeric value ";
		cin >> decision;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return decision;
};

void exercise1(){
	cout << "This program will calculate the sum of all the even numbers to to the requested number."<< endl;
	cout << "Please enter a number";
	int numb = userNumbers();
	int x=0;

	for(int i=0; i <= numb; i++){
		if(i%2==0){
			cout <<x<< " + " <<i<< " = " <<x+i<< endl;
			x=x+i;
		}
	}
}

void exercise2(){
	int x = 0;
	int i = 1;
	while(1){
		cout <<"The current value is: " <<x<< endl;
		cout <<" Would you like to add " <<i<< "? \n(enter Y or N)"<< endl;
		string s = userDecision();
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout << s[0];
		if (s[0] == 'y'){ 
			x +=i; 
			i++;
		}else if(s[0] == 'n'){
			i++;
		}else if(s[0] != 'y' || s[0] != 'n'){ 
			system("cls");
			break; 
		}
	}
}