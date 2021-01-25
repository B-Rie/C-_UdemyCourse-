#include "Library.h"
#include <iostream>

using namespace std;

Library::Library(int maxAmountOfBooks){
	this->currentAmountOfBooks = 0;
	this->maxAmountOfBooks = maxAmountOfBooks;
	this->books = new Book[maxAmountOfBooks]; 
}
Library::~Library(){
	delete []books;
	//cout << "Library Destructor!" << endl;
}

void Library::addBook(const Book& book){
	if (currentAmountOfBooks < maxAmountOfBooks){
		this->books[currentAmountOfBooks] = book;
		this->currentAmountOfBooks++;
	}

	else {

	}
	
}

Book Library::getBook(int index){
	if (index < maxAmountOfBooks){
		return books[index];
	}
	return books[0];
}

void Library::showBooks(){
	for (int i=0; i < currentAmountOfBooks; i++){
		cout << "Library Book[" << getBook(i).getBookID() << "] : ";
		cout << "Title: " << getBook(i).getTitle() << "   ";
		cout << "Author: " <<getBook(i).getAuthor() << "  ";
	    cout << "Publication Year: " << getBook(i).getPublicationYear() << endl;
	}
}