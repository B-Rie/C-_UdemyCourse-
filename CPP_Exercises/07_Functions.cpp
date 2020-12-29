/*
Exercise 1.

Initialize three variables with different types (int, double, string). 
Write a function "variableType" and overload it two times. Each three overloaded functions
should take as an argument different type of variable eg. variableType(int), 
variableType(double), variableType(string). Send the variables created in the beginning to
 the variableType function with corresponding type of argument and print out in the screen
 information about what type of variable was used.

eg.
Output:
2 - this variable was an integer
0.123 - this variable was a double
"What a beautiful day" - this variable was a string


Exercise 2. (Modified Exercise )

Write a program that asks the user how many values should get added together (from 2 to 5).
Then the user should input those numbers. Write a function "addition" that takes two double
parameters and adds them together, printing out in the console the calculation. Furthermore
overload the "addition" function 3 times so it takes three parameters, four parameters and
five parameters adding those parameters in each case. Prepare a switch that uses the version
of addition function with as many parameters as the user inputted at the beginning.

eg.
User inputted:
3

Output:
Input 1 Number.
Input 2 Number.
Input 3 Number.

User inputted:
2
3
4

Output:
2 + 3 + 4 = 9

PS Keep in mind that this exercise can be solved better than the given solution when you have more knowledge of C++. Better solution will be shown in future lessons.
*/


#include <iostream>
#include <typeinfo>       // operator typeid

using namespace std;
/////////////////////////////
// Function Declaration
void variableType(string);
void variableType(int);
void variableType(double);

int userInput();
void exercise1();
void exercise2();
void addition(double*, int);


int main(){

	cout<< "Select and exercise: 1 or 2"<< endl;
	int x = userInput();
	if (x == 1){
		exercise1();
	}else if (x==2){
		exercise2();
	} else {
		cout << "good-bye" << endl;
	}
	return 0;
}

////////////////////////////////
//  	--- FUNCTIONS ---
void exercise1(){
	int var1 = 2;
	double var2 = 0.123;
	string var3 = "hello world";
	system("cls");
	variableType(var1);
	variableType(var2);
	variableType(var3);
}

// -- function Overloading --
void variableType(string var3){
	cout << "var3 is: " <<typeid(var3).name()<< endl;
}
void variableType(int var1){
	cout << "var1 is: " <<typeid(var1).name()<< endl;
}
void variableType(double var2){
	cout << "var2 is: " <<typeid(var2).name()<< endl;
}

// --User Input--
int userInput(){
	int numb;
	cin >> numb;

	while ( !cin.good() || numb >5 || numb < 1){
		// Cleared stream
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		cout << "\n > Error, try again: ";
		cin >> numb;
	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return numb;
}

void exercise2(){
	system("cls");
	cout << "Please choose the amount of numbers you would like to add from 2 - 5: ";
	int amount = userInput();
	double array[amount];
	int len = sizeof(array)/sizeof(array[0]);
	
	for (int i = 0; i < len; i++){
		double x;
		cout << "Enter " <<i+1<<": ";
		cin >> x;  
		array[i]=x;
	}
	addition(array, len);
}

void addition(double* arr, int len){
	double value = 0;
	for (int i=0; i<len; i++){
		value +=arr[i];
		if (i == len-1){
			cout << arr[i] << " = ";
		}else{
		cout << arr[i] << " + ";
		}
	}
	cout << value;
}