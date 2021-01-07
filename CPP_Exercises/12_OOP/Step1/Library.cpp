#include "Library.h"
#include <iostream>

using namespace std;

// Library::Library(){

// }
// Library::~Library(){
// 	cout << "Library Destructor!" << endl;
// }

void Library::addBook(Book book){
	this->books[0] = book;
}

Book Library::getBook(int index){
	return books[index];
}