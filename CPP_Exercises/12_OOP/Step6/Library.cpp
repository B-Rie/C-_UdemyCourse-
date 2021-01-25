

#include "Library.h"
#include <iostream>

using namespace std;

void Library::addBook(const Book& book){
	if (m_currentAmountOfBooks < m_maxAmountOfBooks){
		this->m_books[m_currentAmountOfBooks] = book;
		this->m_currentAmountOfBooks++;
	} else {

	}
}

void Library::showBooks(){
	cout << "LIBRARY BOOKS: " << endl;
	for (int i=0; i<m_currentAmountOfBooks; i++){
		cout << "Positon [" << i+1 << "]:  ";
		cout << "Book ID: " << m_books[i].getBookID() << "     ";
		cout << "Author: " << m_books[i].getAuthor() << "     ";
		cout << "Title: " << m_books[i].getTitle() << "     ";
	    cout << "Publication Year: " << m_books[i].getPublicationYear()<< endl;
	}
	cout << endl;
}

Book& Library::getBook(int position){
	if (position < m_currentAmountOfBooks){
		return m_books[position];
	} else {
		return m_books[0];
	}
}

Library::Library(int maxAmount){
	this->m_currentAmountOfBooks = 0;
	this->m_maxAmountOfBooks = maxAmount;
	this->m_books = new Book[maxAmount];
}


Library::~Library(){
	delete [] m_books;
}