#include <iostream>

using namespace std;

main(){
	
	cout << "-- array --" << endl;
	int array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	
	cout << array[2] << endl;	// - ouputs the value at element 2 in the array
	cout << &array[0] << endl;	// - gives us the address where the element in the array is located
	cout << &array << endl;		// - give us the address where the array is located

	cout << "-- multidimensional array --" << endl;
	int biArrayp[2][3] = {0};	/*- creates a mutlidimensional array:  [] [] []
																	   [] [] [] */

}