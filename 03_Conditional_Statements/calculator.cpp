#include <iostream>
using namespace std;

double var1, var2;
char x;
string decision;


main() {
	beginning:
	system("cls");
	cout << " Welcome to your simple calculator" << endl;
	cout << "Enter first Number: ";
	cin >> var1;

	cout << "Enter second Number: ";
	cin >> var2;

	cout << "Would you like to +, -, *, or /: ";
	cin >> x;

	system("cls");

	switch(x) {
		case '+': 
			cout << var1 << " + " << var2 << " = " << var1 + var2 << endl;
			break;
		case '-':
			cout << var1 << " - " << var2 << " = " << var1 - var2 << endl;
			break;
		case '*':
			cout << var1 << " * " << var2 << " = " << var1 * var2 << endl;
			break;
		case '/':
			if (var2 == 0) {
				cout << " You cannot divide by 0";
			} else
				cout << var1 << " / " << var2 << " = " << var1 / var2 << endl;
			break;
		default:
			cout << " please enter +, -, *, or /" << endl;
			break;
	}

	cout << "Would you like to make another calculation? (Y/N):";
	cin >> decision;

	if (tolower(decision[0]) == 'y'){ 
		goto beginning;
	} else cout << ("good by") << endl;

}