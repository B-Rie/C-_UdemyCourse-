#include <iostream>

using namespace std;
int a = 10;
int b = 4;
float c = 4;
double d = 4;
int e = 4;
int f = 5;



main(){
	/* */
	cout << "-- Operators --" << endl;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	
	cout << a / b << endl; // willl not give us a realnumber and will not around
	cout << a / d << endl; // double: will give us the real number
	cout << a / c << endl; // float: will give us the real number
	
	cout << a % b << endl; // %: will only give us the remainder, can not be used with float or double
	
	cout << d++ << endl;   // d++ : post incremenet
	cout << ++d << endl;   // ++d: pre increment


	cout << "-- Relational Operators --" << endl;
	cout << (a == b) << endl;	// equal to
	cout << (a != b) << endl;	// not equal to
	cout << (a > b) << endl;	// greater than
	cout << (a < b) << endl;	// less than
	cout << (a >= b) << endl;	// greater than and equal
	cout << (a <= b) << endl;	// less than and equal
	cout << !(a == b) << endl;	//if false = true(1), if true = false(0)
	

	cout << "-- Logical Operators --" << endl;
	cout << "AND: " << ((a != b) && (b == e)) << endl;	// True: if both ar true. False: if either one is false
	cout << "OR: " << ((a != b) || (b == 4)) << endl;	// true: if either one true. False: if both are false


	cout << "-- Bitwise Operators --" << endl;
	cout << "&: " << (10 & 2) << endl;	// and
	cout << "|: " << (10 | 2) << endl;	// or
	cout << "^: " << (10 ^ 2) << endl;	// xor
	cout << "~: " << (~10) << endl;		// negation
	cout << "<<: " << (10 << 1) << endl;	// shift to the left, raise to the power of 2
	cout << ">>: " << (10 >> 1) << endl;	// shift to the right, divided by the power of 2

}