/*
Exercise 1.

Declare a string variable called "name", containing a name of your choice. For example
"Cassandra". Next declare three reference variables to "name" variable and name them
using the short version of the name you have chosen. Print out in the console all four
variables (name and its references) and their addresses.

eg.
var name = Cassandra
ref cassie = name
ref cassey = name
ref sandra = name

Output:
Cassandra 0x69fedc
Cassandra 0x69fedc
Cassandra 0x69fedc
Cassandra 0x69fedc

Exercise 2.

Write a function called "setValue" which takes one integer argument. The function should
ask the user to input a value and set the value of the sent argument. Write a simple program
in which you should declare an integer variable and send it to the setValue function. Then
print out the value of the variable in the console.

Exercise 3.

Write a function called "checkIfTheSame" that will take two integer arguments. Then the 
function checks the sent arguments for:
a) equality
b) if the two arguments are completely the same (values and addresses are the same)
c) if the values are the same but the addresses are different
d) if they are completely different. 
Each condition if satisfied should print out in the screen the info about the variables. Declare 4 variables a, b, c and d. 
Variables a and b should have different values, c should be equal to a and d should be a
reference to 'a'. Then sent those variables in different combinations to the "checkIfTheSame"
function (a and b, a and c, a and d).
*/


#include <iostream>
#include <typeinfo>       // operator typeid

using namespace std;
///////////////////////////////
// --- Function Declaration---
void exercise1();
void exercise2();
void exercise3();

void setValue(int&);
int userInput();
void checkIfTheSame(int&, int&);


int main(){
	cout<< "Select and exercise: 1, 2, or 3."<< endl;
	int x = userInput();
	if (x == 1){
		exercise1();
	} else if (x==2){
		exercise2();
	} else if (x==3){
		exercise3();
	} else {
		cout << "good-bye" << endl;
	}
	return 0;
}

////////////////////////////////
//   --- EX.1: FUNCTIONS ---
void exercise1(){
	string name = "Michael";
	string &mike = name;

	cout << name << " " << &name << endl;
	cout << mike << " " << &mike << endl;
}

////////////////////////////////
//   --- EX.2: FUNCTIONS ---
void exercise2(){
	int x;
	setValue(x);
	cout << "The set variable is: " << x << endl;
}
void setValue(int &value){
	cout << "Please set a value to x: ";
	value = userInput();
}

int userInput(){
	int decision;
	cin >> decision;

	// Error check
	while (!cin.good()){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		system("cls");
		cout << "\n > Please use Numeric values.";
		cin >> decision;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return decision;
}

////////////////////////////////
//   --- EX.3: FUNCTIONS ---
void exercise3(){
	int a = 4;
	int b = 8;
	int c = a;
	int &d = a;
	checkIfTheSame(a,b);
	checkIfTheSame(a,c);
	checkIfTheSame(a,d);

}
void checkIfTheSame(int &x, int &y){
	if (x == y && &x == &y){
		cout << "x:" <<x<< " is equal to y:" <<y<< " and both are at address: " <<&x<< endl;
	} else if (x != y) {
		cout << "x:" <<x<< " and y: " <<y<< " are not equal to each other." << endl;
	} else if(x == y && &x != &y){
		cout << "x = y, but address x: " <<&x<< " is not equal to address y:" <<&y<< endl;
	}
}