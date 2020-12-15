#include <iostream>

using namespace std;

// -- FUNCTION POINTER with SIZE --
/* */
void multiplyArray(int *, int, int);

int main() {

	int array[10];
	int arraySize = sizeof(array)/sizeof(array[0]);

	for (int i = 0; i < arraySize; i++){
		array[i] = i;
	}
	multiplyArray(array, 5 , arraySize);

	for(int i = 0; i < arraySize; i++){
		cout << "array["<<i<<"] = "<<array[i]<<endl;
	}

	return 0;
}

void multiplyArray(int *array, int amount, int size){		//- to have access to the sizeof array, is if we inlucde it as a parameter.
	while(size--){
		array[size] *= amount;
	};
}




// -- Return FUNCTION POINTER --
/* 
int *multiplyBy(int *, int);

int main() {

	int a = 10;
	int *b = multiplyBy(&a, 5);

	*b = 999; // - this will change the vlaue at both a nd b locations

	cout << a << endl;
	cout << *b << endl;
	return 0;
}

int *multiplyBy(int *var, int amount){
	
	*var *= amount;
	return var;	
}
*/


// -- FUNCTION POINTER --
/* 
void multiplyBy(int *, int);

int main() {

	int a = 10;

	multiplyBy(&a, 5);

	cout << a << endl;
	return 0;
}

void multiplyBy(int *var, int amount){
	
	*var *= amount;
}

*/