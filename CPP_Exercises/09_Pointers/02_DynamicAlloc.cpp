/*
In the lecture you have learned about the concept of dynamic allocation
of memory. In the exercises concerned this topic, please remember to 
always free the memory allocated dynamically.

Exercise 1.

Declare two integer variables, the first statically allocated and the second dynamically
allocated. To the statically allocated variable declare a pointer containing its address.
To both variables assign any integer values (in case of statically allocated variable use
its pointer). Print out in the console both values and addresses of the variables. 

Try to run the program few times and look at the addresses.

eg.

Output:
The value of the statically allocated variable: 10, and the address: 0x69fef4
The value of the dynamically allocated variable: 15, and the address: 0x7b56b0

Output:
The value of the statically allocated variable: 10, and the address: 0x69fef4
The value of the dynamically allocated variable: 15, and the address: 0x715760

Output:
The value of the statically allocated variable: 10, and the address: 0x69fef4
The value of the dynamically allocated variable: 15, and the address: 0x25730

Exercise 2.

Write a program that asks the user to input the size of the dynamic array of integers. 
Using the pointer and its incrementation instead of array notation, fill the array with
any integer numbers. Print all of the elements out in the console. All of the conditions
of the loops should work with the size of the array inputted by the user.

eg.

User inputted:
Input the size of the dynamic array you want to create: 4
Input 1 number: 12
Input 2 number: 14
Input 3 number: 15
Input 4 number: 16

Output:
Number 1: 12
Number 2: 14
Number 3: 15
Number 4: 16
*/


#include <iostream>

using namespace std;

///////////////////////////////
// --- Function Declaration---
void exercise1();
void exercise2();

int main(){
	// cout << " --- Exercise 1 ---" << endl;
	// exercise1();

	cout << " --- Exercise 2 ---" << endl;
	exercise2();
	return 0;
}

//////////////////////////////////
// 	--- Functions ---

void exercise1(){
	int statical;

	int *statically = &statical;
	int *dynamically = new int;

	*statically = 10;
	*dynamically = 15;

	cout << "statical allocated variable: " << statical << ", and the address: " << &statical<< endl;
	cout << "statically allocated variable: " << *statically << ", and the address: " << statically<< endl;
	cout << "dynamically allocated variable: " << *dynamically << ", and the address: " << dynamically<< endl;

	delete dynamically;
}

void exercise2(){
	int size;
	cout << "Input the size of the dynamic array you want to create: ";
	cin >> size;

	int *p = new int[size];

	if (p != NULL) {	// - checks to verify memory was allocated to p
		for (int i  = 0; i < size; i++) {
			cout << "Enter " << (i+1) << " number: ";
			cin >> *(p+i);
		}

		for (int i = 0; i < size; i++) { 
			cout << "p [" << i << "] = " << *(p+i) << " at address: "<< p+i <<endl;
		}
	} else {
		cout << "Not enough memory " << endl;
	}

	delete [] p;
}