#include <iostream>

using namespace std;
/* PoINTERS are ordinary variables that store addresses of variables */

int main() {
	int var = 5;
	int a - 20;
	cout << &var << endl;

	int* = *var; // *: used to INFORM that this variable is a POINTER so it is a variable that can point to address of another variable.

	cout << *p << endl; // - this *: is used to RETRIEVE (GET) value FROM indicated (pointed) area in our memory (address)

	//*p = 20;
	//var = 60;

	p = &a;
	*p = 60;
	cout << "var: " << var << endl;
	cout << "*p: " << *p << endl;
	cout << "a: " << *p << endl;

	int * const p_const = &a: // - this is a pointer that has to be initialized when defined, because it cannot change after defining the thing that it is pointing to (address)

	const int * p_2 = &a; // - this is a pointer that cannot change the value that is under the address its points to.

	cont int * const p_3 = &a; // - this is a pointer that cannot change the value that is under address it pointing to and also it cant change the address

	int ordinary_var = 10;
	int* ordinary_p = &ordinary_var;

	cout << "ordinary_var: " << ordinary_var << endl;	// integer value;
	cout << "&ordinary_var: " << &ordinary_var << endl;	// address
	cout << "ordianry_p" << ordianry_p << endl; 		// address
	cout << "*ordianry_p" << *ordianry_p << endl; 		// interger value from pointed place (ordinary_var);
	cout << "&ordianry_p" << &ordianry_p << endl; 		// address of pointer itself

	int** p_pointing_to_address_of_pointer = &ordinary_p;

	cout << "p_pointing_to_address_of_pointer" << p_pointing_to_address_of_pointer << endl;

	return 0;
}