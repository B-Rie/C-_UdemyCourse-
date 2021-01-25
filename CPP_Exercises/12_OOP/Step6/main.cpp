#include "Book.h"
#include "Library.h"
#include "User.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	const Book bk1("David Brent", "How i built this", 1231);
	const Book bk2("Tolken", "L.O.T.R.", 1943);
	const Book bk3("Michael", "HellBoy", 1987);
	const Book bk4 = bk3;
	const Book bk5 = bk3;
	cout <<" HERE";
	Library library(5);
	cout <<" HERE";
	Borrower b1("Mike", "Civitak", 5);
	cout <<" HERE";
	Librarian l1("Gwen", "Stacy", 5);
	cout <<" HERE";
	library.addBook(bk1);
	library.addBook(bk2);
	library.addBook(bk3);
	library.addBook(bk4);
	library.addBook(bk5);

	int position;
	char choice;
	int cont = true;

	while (cont == true){
		library.showBooks();
		b1.showBooks();
		cout << "To rent a book, enter ( B / b )" << endl;
		cout << "To return a book, enter ( R / r )" << endl;
		cout << "To exit, enter ( E / e )" << endl;
		cout << "> ";
		cin >> choice;

		switch(choice){
			case 'b':
			case 'B': {
				cout << "Which book would you like to Rent, POSITION IN LIBRARY: ";
				cin >> position;
				l1.lendBook(library, b1, position);
				break;
			}
			case 'r':
			case 'R': {
				cout << "WHich Book would you like to Return, POSITION IN BORROWER: ";
				cin >> position;
				b1.returnBooks(library, position);
				break;
			}
			case 'e':
			case 'E': {
				cout << "GoodBye" << endl;
				cont = false;
				break;
			}
			default:
				break;	
		}
		system("cls");
	}
return 0;
}

