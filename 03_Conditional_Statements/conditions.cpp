#include <iostream>

using namespace std;

int a = 5;
int b = 10;
int c = 0;
int d = 123;

main() {
	cout << "-- If elseIf else --" << endl;
	if ( a > b) {
		cout << " a > b" << endl;
	} else if (a < b) {
		cout << " a < b " << endl;
	} else {
		cout << " a == b" << endl;
	}


	cout << "-- switch --" << endl;
	switch (d) {	// - switch only excepts integer and char types.
		case 0: 
			cout << " a is " << a << endl;
			break;
		case 5:
			cout << " b is " << b << endl;
			break;
		case 10:
			cout << " c is " << c << endl;
			break;
		default:
			cout << " d is " << d << endl;
			break;
	}

	cout << "-- conditional operators --" << endl;
	string message = (a > b) ? "a > b" : "a < b";

	cout << message << endl;
	cout << ((a > b) ? a : b) + 10 << endl;

}