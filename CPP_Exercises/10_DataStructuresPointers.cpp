/*

Exercise 1.

Create a structure of data called "book" containing three properties: title, author,
publication year. In the main function declare three variables with the "book" type.

Exercise 2.

Modify the program from exercise 1. Create a function that will set (fill) values of each
propery of every book type variable created in the exercise 1. Values should be taken from
the user input.

Exercise 3.

Modify the program from exercise 2. Create a function that will print out in the console the
values of properties of the book sent as the argument of the function.

*/


#include <iostream>

using namespace std;

struct book{
	string title;
	string author;
	string publication_year;
}bk1, bk2, bk3;

void exercise2(book&);
void exercise3(book);

int main(){ 
	
	exercise2(bk1);
	exercise2(bk2);
	exercise2(bk3);

	cout << endl;
	exercise3(bk1);
	exercise3(bk2);
	exercise3(bk3);

	return 0;
}

void exercise2(book &bk){
	cout << "Please enter the Book Title: ";
	cin >> bk.title;
	cout << "Enter authors name: ";
	cin >> bk.author;
	cout << "Enter publication Year: ";
	cin >> bk.publication_year;

}

void exercise3(book bk){
	cout << "Book Title: "<< bk.title << endl;
	cout << "Authors name: " << bk.author << endl;
	cout << "Publication Year: " << bk.publication_year << endl;
}