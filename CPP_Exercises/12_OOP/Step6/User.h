#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

#include <string>
#include "Book.h"
#include <iostream>

using namespace std;

class Library;

///////////////////////////////////
// --- User Class ---
class User{
	protected:
		string m_firstName;
		string m_lastName;

	public:
		User(string, string);
		string getFirstName();
		string getLastName();
		~User();
};
///////////////////////////////////

///////////////////////////////////
// --- Borrower Class ---
class Borrower: public User{
	protected:
		friend class Librarian;
		int m_currentAmountOfBooks;
		int m_maxAmountOfBooks;
		Book* m_books;
	public:
		Borrower(string, string, int);
		~Borrower();

		Borrower (const Borrower&) = delete;
		Borrower& operator= (const Borrower&) = delete;

		void returnBooks(Library&, int);
		void showBooks();
		Book& getBook(int);
};
///////////////////////////////////

///////////////////////////////////
// --- Librarian Class ---
class Librarian: public Borrower{
	public:
		Librarian(string, string, int);
		void lendBook(Library&, Borrower&, int);
};

#endif