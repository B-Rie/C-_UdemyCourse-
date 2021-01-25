#include "Book.h"
#include "Library.h"
#include <iostream>

using namespace std;


int main(){ 
	
	
	

	const Book bk1("Horton hears a Who", "Dr. Seus", 1983);
	const Book bk2("HellBoy", "Mike", 1991);
	const Book bk3("Tokyo Ghoul", "Whyn", 2003);

	Library library(5);

	library.addBook(bk1);
	library.addBook(bk2);
	library.addBook(bk3);

	

	library.showBooks();


	return 0;
}

	