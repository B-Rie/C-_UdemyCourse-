/*

Exercise 1.

Write a program that prints out in the console the whole alphabet "abcdefghijklmnopqrstuvwxyz".
All of the characters from the alphabet should be stored in a 27 element array of chars and
printing out of each of those elements should be done with the use of the for loop.

eg.
Output:
abcdefghijklmnopqrstuvwxyz

Exercise 2.

Write a program similar to the one in the exercise 1. However, this time instead of using a 27
element array of chars use the string type. Printing out should be done the same way as in the 
exercise 1.

eg.
Output:
abcdefghijklmnopqrstuvwxyz

Exercise 3.

Write a program that asks the user to input a number of characters he would like to input. Then
create a dynamic array of characters where the number inputted by the user stands for the size
of the array. Next the user should input as many characters as the size of the array. 
The characaters should be stored in the dynamic array one by one. 
Print out in the console all of the characters in the array, thus creating a string of 

characters. Remember to free the memory.

eg.

User Inputted:
3
a
b
c

Output:
1 character: a
2 character: b
3 character: c
The inputted string of characters was: abc

*/

#include <iostream>

using namespace std;

int main(){
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	char arr[27] = "abcdefghijklmnopqrstuvwxyz";
	
	// ex: 1
	for (int i=0; i<26; i++){
		cout << alphabet[i];
	}

	cout << endl;
	// ex: 2
	for (int i=0; i<26; i++){
		cout << arr[i];
	} 

	cout << endl;
	//ex: 3
	cout << endl << "How many characters would you like to input: ";
	int numb;
	cin >> numb;

	char *newArr = new char[numb];

	for (int i=0; i<numb; i++){
		cout << i+1 << " character: ";
		cin >> newArr[i];
	}

	cout << endl;
	cout << "The inputted string of characters was: ";
	for (int i=0; i<numb; i++){
		cout << *(newArr+i);	
	}

	delete []newArr;
	return 0;
}