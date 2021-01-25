#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <iostream>
using namespace std;

class Book{

		string title;
		string author;
		int publication_year;
		int bookID;

	public:
		static int numbOfBooks;

		string getTitle() const;
		string getAuthor() const;
		int getPublicationYear() const;
		int getBookID() const;
		
		Book(string, string, int);
		Book(const Book &);
		Book();
		~Book();
};

#endif