/*
Exercise 1.

Using SWITCH modify the vending machine program from the Conditional Statements. Write a program
immitating a vending machine. The program should present the user with a choice of 6 products of
your choice (Coke, Water, Chocolate Bar etc). Then allow the user to choose a product by entering
a number 1-6. Add an exception for invalid input if the user inputs a number which doesn't
correspond to any choice.

eg.

1. Cola
2. Chocolate Bar
3. ...
4. ...
5. ...
6. ...

User inputted:
Choice: 2

Output:
Your have chosen a Chocolate Bar.

eg.

User inputted:
Choice: 7

Output:
Error. Invalid choice.
*/


#include <iostream>
#include <string>
#include <windows.h>
#include <math.h>
#include <iomanip>


using namespace std;
/////////////////////////////
// Function Declaration
int quantity();
int exchange(int, int, int);
int userDecision();


int main(){
	int wallet = 100;
	int quant = 0;
	int decision;
	int price = 0;
	while(decision != 7){
		cout << "\n";
		wallet < 1 ? cout << "Your wallet is empty. \nPlease enter 7 to exit" : cout << "You have: $" << wallet << " in your wallet" << endl;
		cout <<"\n";
		decision = userDecision();
		system("cls");
		switch(decision){
			case(1):
				cout << "> How many Cokes?" << endl;
				quant = quantity();
				price = 1;
				wallet = exchange(wallet, quant, price);
				break;
			case(2):
				cout << "> How many Waters?" << endl;
				quant = quantity();
				price = 3;
				wallet = exchange(wallet, quant, price);
				break;
			case(3):
				cout << "> How many Candy Bars?" << endl;
				quant = quantity();
				price = 1.50;
				wallet = exchange(wallet, quant, price);
				break;
			case(4):
				cout << "> How many Power up Mushrooms?" << endl;
				quant = quantity();
				price = 10;
				wallet = exchange(wallet, quant, price);
				break;
			case(5):
				cout << "> How many Arm Cannons?" << endl;
				quant = quantity();
				price = 45;
				wallet = exchange(wallet, quant, price);
				break;
			case(6):
				cout << "> How many Extra Lives?" << endl;
				quant = quantity();
				price = 50;
				wallet = exchange(wallet, quant, price);
				break;
			default:
				cout<< "You left with $" << wallet << " in you wallet."<< endl;
				cout<< "Good Bye" << endl;
		}
	}
	return 0;
}

////////////////////////////////
//  	--- FUNCTIONS ---
 
// -- INITIALIZATION -- //
void initMenu(){
	cout << "--- VENDING MACHINE of WONDER ---?" << endl;
	cout << "(1.) $1.00:	Coke" << endl;
	cout << "(2.) $3.00:	Water" << endl;
	cout << "(3.) $1.50:	Candy bar" << endl;
	cout << "(4.) $10.00:	Mario growth Mushroom" << endl;
	cout << "(5.) $45.00:	Metro arm blaster" << endl;
	cout << "(6.) $50.00:	Extra Life" << endl;
	cout << "(7.) 			exit machine" << endl;
	//cout << "(8.) Refund Money		 	" << endl;
}

int userDecision(){
	int decision;
	initMenu();
	cin >> setw(1) >> decision;

	// Error check
	while (!cin.good() || decision > 8 || decision < 1){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		//system("cls");
		initMenu();
		cout << "\n > INVALID CHOSE: Please choose options 1 - 7: ";
		cin >> decision;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return decision;
};

int exchange(int wallet, int quant, int price){
	int ex;
	
	if (wallet < 1 ){
		cout << "Insufficient funds"<< endl;
		ex = wallet;
	} else {
		ex = wallet - (quant*price);
	}
	return ex;
}

int quantity(){
	int choice;
	cout << "> Please choose a quantity between 1 - 10 or 0: > ";	
	cin >> setw(2) >> choice;
	// Error check
	while (!cin.good() || choice > 10 || choice < 0){
		// Cleared steam
		cin.clear();
 		cin.ignore(INT_MAX, '\n');
		// Get input
		cout << "\n > INVALID quantity: Please choose between 1 - 10: > ";
		cin >> choice;
	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return choice;
}

/*
Furtue addtions:
- Adding an array that keeps track of the items purchased and display them.
- Clean up the code in the int main()