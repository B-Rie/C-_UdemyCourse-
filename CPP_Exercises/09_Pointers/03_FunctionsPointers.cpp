/*
In this set of exercises you will create a simple program (step by step) for sorting the
numbers inputted by the user into a dynamically allocated array of integers. The user will
also make the choice concerning the order (ascending or descending) the array should be 
sorted with. For dynamically allocated variables remember to free the memory.

Exercise 1.

Create a function "createArray" that initializes a dynamically allocated array of integers
with the size of the array sent as the argument of the function. The function should return
the array it creates so it can be assigned to any dynamically allocated variable in other
functions.

Exercise 2.

Create a function "swapTwoValues" that swaps the value of one variable with the value of 
the second variable. Both variables should be sent as the arguments. Instead of using
references use pointers. 

Exercise 3.

Create functions "fillArrayWithValues" and "printArrayValues". Both of the functions should
take the array and its size as the arguments. First function should fill the array with values,
the second should print all values of the array.

Exercise 4.

Create a function "bubbleSort". The function should take three arguments, array and its 
size and order of sorting. Depending on the third parameter the function should either sort
the array with ascending or descending order, the default argument should be set as ascending.


Concerning the workflow of the bubble sort algorithm please visit the websites below.
However, try to develop the code on your own. Use the "swapTwoValues" function to simplify the
algorithm and "printArrayValues" function to print the values of the sorted array after the
procedure is done.

https://en.wikipedia.org/wiki/Bubble_sort
http://www.go4expert.com/articles/bubble-sort-algorithm-absolute-beginners-t27883/

Exercise 5.

Create a function "selectionSort". The function should take three arguments, array and its
size and order of sorting. Depending on the third parameter the function should either sort
the array with ascending or descending) order, the default argument should be set as ascending.
Use the "swapTwoValues" function to simplify the algorithm and "printArrayValues" function
to print the values of the sorted array after the procedure is done.

Concerning the workflow of the selection sort algorithm please visit the websites below.
However, try to develop the code on your own. Use the "swapTwoValues" function to simplify the
algorithm and "printArrayValues" function to print the values of the sorted array after the
procedure is done.

https://en.wikipedia.org/wiki/Selection_sort
https://www.tutorialspoint.com/data_structures_algorithms/selection_sort_algorithm.htm

Exercise 6.

Using the functions created in exercises from 1 to 5 write a program that asks the user for 
the size of the array. Declare a dynamically allocated variable and assign to it the "createArray"
function with the inputted size as the argument. Using "fillArrayWithValues" fill the created
array. And show the user the numbers he/she inputted with "printArrayValues". Then ask the user
if the array should be sorted with ascending or descending (default: ascending) order and which
sorting algorithm should be used (default bubble).

eg.

Output: 
Input the size of the array to sort:

User Inputted:
10

Output/User Inputted: 
Enter 1 element: 3
Enter 2 element: 4
Enter 3 element: 123
Enter 4 element: 15
Enter 5 element: 35
Enter 6 element: 12324
Enter 7 element: 424
Enter 8 element: 8
Enter 9 element: 9
Enter 10 element: 10

Sort Ascending - 1, Descending - 2: 2
Bubble Sort - B or b, Selection Sort - S or s: B

Output:
Array[0] = 12324
Array[1] = 424
Array[2] = 123
Array[3] = 35
Array[4] = 15
Array[5] = 10
Array[6] = 9
Array[7] = 8
Array[8] = 4
Array[9] = 3
*/

#include <iostream>

using namespace std;

int *createArray(int);
int numericInput();
void swapTwoValues(int *, int *);
void fillArrayWithValues(int[], int);
void printArrayValues(int[], int);
void bubbleSort(int[], int, int=1);
void selectionSort( int[], int, int=1);

int main(){
	cout << "Input the size of the array to sort: ";
	int size = numericInput();
	int *a = createArray(size);
	fillArrayWithValues(a, size);
	printArrayValues(a, size);

	cout << endl << "Sort: Ascending - 1 or Descending - 2: ";
	int order = numericInput();
	if(order != 2){		// - setting order to default
		order = 1;
	}

	char sortChoice;
	cout << endl <<" Bibble Sort - B or b, Selection Sort - S or s: ";
	cin >> sortChoice;
	if (sortChoice != 'S' || sortChoice != 's'){	// - setting sortChoice to default
		sortChoice = 'B';
	}
	if (sortChoice == 'B' || sortChoice == 'b'){
		bubbleSort(a, size, order);
	} else if (sortChoice == 'S' || sortChoice == 's'){
		selectionSort(a, size, order);
	}
	
	delete []a;
	return 0;
}

//////////////////////////////////
// --- Functions ---
/*	- this functions creates a dynamically allocated array with the size of the array sent
	  as an arguement of the function. This function will be assigned to a dynmically allocated
	  variable in main.																		*/
int *createArray(int size){
	int *newArr = new int[size];
	return newArr;
}

int numericInput(){
	int x;
	cout << "> ";
	cin >> x;

	while (!cin.good()){
		// cleared stream
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get Input
		cout << "Enter a numeric values ONLY!";
		cin >> x;
	}
	// cleared stream
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return x;
}
/*	- this function points to two values and switches them using pointers */
void swapTwoValues(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void fillArrayWithValues(int arr[], int len){

	for (int i=0; i<len; i++){
		cout << "Enter " << i+1 << " element: ";
		arr[i] = numericInput();
	}
	system("cls");
}

void printArrayValues(int arr[], int len){
	for (int i=0; i<len; i++){
		cout << "Array["<<i<<"] = " << arr[i] << endl;
	}
}

void bubbleSort(int arr[], int len, int sort){
	int size = len;
	while (size != 0){
		for (int i=0; i<len-1; i++)
			if (sort==1 && arr[i] > arr[i+1]){
				swapTwoValues(arr+i, arr+i+1);
			} else if (sort==2 && arr[i] < arr[i+1])
				swapTwoValues(arr+i, arr+i+1);
		size--;
	}
	printArrayValues(arr, len);
}

void selectionSort( int arr[], int len, int sort){
	
	for (int i=0; i<len; i++){
		int min = i;
		for (int j=i+1; j<len; j++){
			if (sort==1 && arr[j] < arr[min]){
				min = j;
			} else if (sort==2 && arr[i] > arr[min]){
				min = j;
			}
		}
		swapTwoValues(arr+i , arr+min);
	}
	printArrayValues(arr, len);	
}