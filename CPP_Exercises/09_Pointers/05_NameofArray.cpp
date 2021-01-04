/*

Exercise 1:
Declare 5 element array of integers and a pointer to the first element of the array.
Use the pointer and its incrementation instead of array notation, fill the array with
any integer numbers. Print all of the elements out in the console.

*/
#include <iostream>

using namespace std;

int main(){
	int arr[5];

	int *p = arr;

	for (int i=0; i<5; i++){
		cout <<"Enter the an input for element arr[" << i << "] : ";
		cin >> *(p++); // - pointer incrementation
	}
	
	for (int i=0; i<5; i++){
		cout <<"Number " << i+1 << " : " <<arr[i]<< endl;
	}

	return 0;
}
