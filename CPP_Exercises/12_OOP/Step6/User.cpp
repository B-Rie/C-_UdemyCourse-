#include "User.h"
#include "Library.h"

#include <iostream>
using namespace std;

///////////////////////////////////
// --- User methods ---
User::User(string firstName, string lastName){
	this->m_firstName = firstName;
	this->m_lastName = lastName;
}
string User::getFirstName(){
	return this->m_firstName;
}
string User::getLastName(){
	return this->m_lastName;
}
User::~User(){}
///////////////////////////////////

///////////////////////////////////
// --- Borrower methods ---
Borrower::Borrower(string firstName, string lastName, int maxAmount): User(firstName, lastName){
	this->m_currentAmountOfBooks = 0;
	this->m_maxAmountOfBooks = maxAmount;
	this->m_books = new Book[maxAmount];
}

Borrower::~Borrower(){
	delete [] m_books;
}

void Borrower::returnBooks(Library& libraryToReturnTo, int position){
	if (position < this->m_currentAmountOfBooks && this->m_currentAmountOfBooks > 0){
		libraryToReturnTo.addBook(m_books[position]);
		for (int i=0; i<m_maxAmountOfBooks-1; i++){
			if (i >= position){
				m_books[i] = m_books[i+1];
			}
		this->m_currentAmountOfBooks--;
		}
	} else{
	}
}

Book& Borrower::getBook(int position){
	if (position < this->m_currentAmountOfBooks){
		return m_books[position];
	} else {
		return m_books[0];
	}
}

void Borrower::showBooks(){
	cout << getFirstName() << " " << getLastName() << " BOOKS: " << endl;
    for (int i = 0; i < m_currentAmountOfBooks; i++){
        cout << "BOOK ID: " << getBook(i).getBookID() << "  ";
        cout << "POSITION IN USER: " << i << "  ";
        cout << "Author: " << getBook(i).getAuthor() << "  ";
        cout << "Title: " << getBook(i).getTitle() << "  ";
        cout << "Publication Year: " << getBook(i).getPublicationYear() << endl;
    }
    cout << endl;
 }
///////////////////////////////////

///////////////////////////////////
// --- Librarian Methods ---
Librarian::Librarian(string firstName, string lastName, int maxAmount): Borrower( firstName,  lastName,  maxAmount){
}

void Librarian::lendBook(Library& libraryToLendFrom, Borrower& borrowerToLendTo, int position){
	if (libraryToLendFrom.m_currentAmountOfBooks > 0){
		if (borrowerToLendTo.m_currentAmountOfBooks < borrowerToLendTo.m_maxAmountOfBooks && position < libraryToLendFrom.m_currentAmountOfBooks){
			borrowerToLendTo.m_books[borrowerToLendTo.m_currentAmountOfBooks] = libraryToLendFrom.m_books[position];
			for (int i=0; i < libraryToLendFrom.m_maxAmountOfBooks-1; i++){
				if (i >= position){
					libraryToLendFrom.m_books[i] = libraryToLendFrom.m_books[i+1];
				}
			}
			libraryToLendFrom.m_currentAmountOfBooks--;
			borrowerToLendTo.m_currentAmountOfBooks++;
		} else {

		}
	} else{

	}
}