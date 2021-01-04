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
#include <typeinfo>       // operator typeid

using namespace std;

///////////////////////////////
// --- Data Structure --- 
struct book {
	string title;
	string author;
	string publicationYear;
};

///////////////////////////////
// --- Function Declaration---
void bookInfo(book&);
void showBook(book bk);

int main(){
	book bk1, bk2, bk3;

	bookInfo(bk1);
	bookInfo(bk2);
	bookInfo(bk3);

	showBook(bk1);
	showBook(bk2);
	showBook(bk3);

	return 0;
}

///////////////////////////////
// 		--- Functions---
void bookInfo(book &setBook){
	cout << "Who is the author of the book: ";
    cin >> setBook.author;
    cout << "What is the title of the book: ";
    cin >> setBook.title;
    cout << "In what year was the book published: ";
    cin >> setBook.publicationYear;
}

void showBook(book bk){
	cout << endl << "Author: "<< bk.author <<  " Title: " << bk.title <<  " Year: " << bk.publicationYear << endl;
}