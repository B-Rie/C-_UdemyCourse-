#include "Book.h"
#include <iostream>

using namespace std;
int Book::numberOfBooks = 0;

Book::Book(string author, string title, int publicationYear){
	this->m_author = author;
	this->m_title = title;
	this->m_publicationYear = publicationYear;
	this->m_bookID = Book::numberOfBooks++;
};

Book::Book(const Book& bookToCopy){
	this->m_author = bookToCopy.getAuthor();
	this->m_title = bookToCopy.getTitle();
	this->m_publicationYear = bookToCopy.getPublicationYear();
	this->m_bookID = Book::numberOfBooks++;
};

Book::Book(){}
Book::~Book(){}

string Book::getAuthor() const {
	return this->m_author;
}

string Book::getTitle() const {
	return this->m_title;
}

int Book::getPublicationYear() const {
	return this->m_publicationYear;
}

int Book::getBookID() const {
	return this->m_bookID;
}

