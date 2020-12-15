#include <iostream>

using namespace std;

int main() {
	
	int a[3];
	a[0] = 0;
	a[1] = 20;
	a[2] = 40;
	short int zm;
	int * const p = &a[0]; 	// - const: can not be changed

	cout << p << endl;		// - will point to the address of "a"
	cout << a << endl;		// - will display address location

	cout << endl << endl;		

	cout << &a[0] << endl;	// - ref to "a[0]" address
	cout << &a[1] << endl;	// - ref to "a[1]" address
	cout << &a[2] << endl;	// - ref to "a[2]" address

	cout << endl << endl;

	cout << a << endl;		// - address to "a[0]"
	cout << a + 1 << endl;	// - address to "a[1]"
	cout << a + 2 << endl;	// - address to "a[2]"

	cout << endl << endl;

	cout << *a << endl;			// - value at a[0] 
	cout << *(a + 1) << endl;	// - value at a[1] 
	cout << *(a + 2) << endl;	// - value at a[2] 

	cout << endl << endl;
	
	cout << a[0] << endl;	// - value at a[0]
	cout << a[1] << endl;	// - value at a[0]
	cout << a[2] << endl;	// - value at a[0]

	cout << endl << endl;

	int *p2 = &a[0];		// can now be changed

	cout << *p2 << endl;	// - pints to a[0] address
	cout << ++*p2 << endl;	// - increment value at *p2 address
	cout << *++p2 << endl;	// - points to next 4bytes (elemnt in the array a[1])
	cout << *p2++ << endl;	// - outputs value and increases next elemnts value
	cout << *p2 << endl;	// - outputs value at next element (a[2])
	cout << *++p2 << endl;	// BEWARE: there is no a[3], so elemnt was created with random number
	cout << a[3] << endl;

	return 0;
}