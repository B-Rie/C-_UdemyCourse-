#include "Book.h"
#include <iostream>

using namespace std;

int Book::numbOfBooks = 0;

Book::Book(string title, string author, int publication_year){
	this->bookID = Book::numbOfBooks++;
	this->title = title;
	this->author = author;
	this->publication_year = publication_year;

}

Book::Book(const Book &obj){
	this->bookID = Book::numbOfBooks++;
	this->title = obj.getTitle();
	this->author = obj.getAuthor();
	this->publication_year = obj.getPublicationYear();
}

Book::Book(){

}

Book::~Book(){
	//cout << "Book Destructor!" << endl;
}

string Book::getTitle() const{
	return this->title;
}
string Book::getAuthor() const{
	return this->author;
}
int Book::getPublicationYear() const{
	return this->publication_year;
}
int Book::getBookID() const{
	return this->bookID;
}
