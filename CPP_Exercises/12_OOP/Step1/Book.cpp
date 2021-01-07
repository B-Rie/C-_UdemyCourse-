#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(string author, string title, int publication_year){
	this->author = author;
	this->title = title;
	this->publication_year = publication_year;

}
Book::~Book(){
	cout << "Book Destructor!" << endl;
}