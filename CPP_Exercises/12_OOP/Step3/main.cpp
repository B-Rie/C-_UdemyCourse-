#include "Book.h"
#include "Library.h"
#include <iostream>

using namespace std;


int main(){ 
	
	Book bk1, bk2;
	Library library(5);

	bk1.author = "Dr. Seus";
	bk1.title = "Horton hears a Who";
	bk1.publication_year = 1983;

	bk2.author = "Mike";
	bk2.title = "Whoop";
	bk2.publication_year = 1990;

	library.addBook(bk1);
	library.addBook(bk2);

	library.showBooks();


	return 0;
}

