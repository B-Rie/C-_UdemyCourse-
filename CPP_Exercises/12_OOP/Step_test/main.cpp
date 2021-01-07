#include "Book.h"
#include "Library.h"

#include <iostream>

using namespace std;

int manin(){

	Book bk;
	Library library;

	bk.author = "Dr. Seus";
	bk.title = "Green Eggs and Ham";
	bk.publication_year = 1982;

	library.addBook(bk);



	return 0;
}