#include "Book.h"
#include "Library.h"
#include <iostream>

using namespace std;


int main(){ 
	
	Book bk1;
	Library library(3);

	bk1.author = "Dr. Seus";
	bk1.title = "Horton hears a Who";
	bk1.publication_year = 1983;

	library.addBook(bk1);

	cout << "Author: " << library.getBook(0).author << " ";
	cout << "Title: " << library.getBook(0).title << "  ";
    cout << "Publication Year: " << library.getBook(0).publication_year << endl;


	return 0;
}

