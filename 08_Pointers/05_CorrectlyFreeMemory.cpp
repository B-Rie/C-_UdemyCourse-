#include <iostream>

using namespace std;

int main() {
	/* INCORECT WAY TO DELETE MEMORY 
	char *inscription = new char[20];

	inscription[0] = 'a';
	inscription[1] = 'b';
	inscription[2] = 'c';
	inscription[3] = '\0'; 

	 
	while (*inscription) //do until inscription is not equal to '\0'
	 cout << *inscription++; 
	 
	delete [] inscription; //this is IMPROPER way to free memory in this case - but WHY?
	*/

	/*	Why was the above code INCORRRECT? Well because of line (cout << *inscription++). 
		As we reach the end of the while-loop ('\0'), the pointer is left at this element.
		Delete [] inscription will only delete the last elemnt beacuse of the location of the 
		POINTER. This we cause a memory leak.

		CORRECT WAY:
		- We have to set the pointer as a CONSTANT. This will ensure that a message
		  will informus that this is only read only.
		- Next we must create a new tmp pointer and assign to it the address that inscription 
		  is pointing to. With this new tmp, we can change the address with (cout << *inscription++;)

	/* CORRECT WAY TO DELETE MEMORY */
	char *const inscription = new char[20];

	inscription[0] = 'a';
	inscription[1] = 'b';
	inscription[2] = 'c';
	inscription[3] = '\0'; 

	char *tmpPointer = inscription;
	 
	while (*tmpPointer) //do until inscription is not equal to '\0'
	// cout << *inscription++; // read-only error appears
	 cout << *tmpPointer++; 
	 
	delete [] inscription; //this is IMPROPER way to free memory in this case - but WHY?

return 0;
}