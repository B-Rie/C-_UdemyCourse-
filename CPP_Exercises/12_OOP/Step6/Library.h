#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include "Book.h"
#include "User.h"
#include <iostream>

using namespace std;

class Library{
	private:

		int m_currentAmountOfBooks;
		int m_maxAmountOfBooks;
		Book* m_books;
	public:
		void addBook(const Book&);
		void showBooks();
		Book& getBook(int);

		friend void Librarian::lendBook(Library&, Borrower&, int);

		Library(int);
		~Library();

};

#endif