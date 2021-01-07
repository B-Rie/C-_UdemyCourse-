#ifndef	LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include "Book.h"
#include <iostream>
using namespace std;

class Library{
	private:
		Book books[5];
	public:
		void addBook(Book);
		Book getBook(int);
};

#endif