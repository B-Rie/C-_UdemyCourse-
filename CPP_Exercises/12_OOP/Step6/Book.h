#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include <iostream>

using namespace std;

class Book{
	private:
		string m_author;
		string m_title;
		int m_publicationYear;
		int m_bookID;
	public:

		static int numberOfBooks;

		string getAuthor() const;
		string getTitle() const;
		int getPublicationYear() const;
		int getBookID() const;

		Book(string, string, int);
		Book();
		Book(const Book&);
		~Book();
};

#endif