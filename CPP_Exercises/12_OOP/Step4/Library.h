#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#include "Book.h"

#include <iostream>
using namespace std;

class Library{
		
		int currentAmountOfBooks;
		int maxAmountOfBooks;
		Book *books;

	public:
		Library(int);
		~Library();
		void addBook(Book);
		Book getBook(int);
		void showBooks();

};

#endif