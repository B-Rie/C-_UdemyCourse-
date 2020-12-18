#include <iostream>
#include <fstream>		// - file stream

using namespace std;
/* Open and Close Files: 

*/

int main(){

	fstream file;

	// file.open("03_sample.txt", ios::out);			// - this creates the sample.txt file
	file.open("03_sample.txt", ios::out | ios::ate);	// - creates file and sets pointer at the end

	/*
		ios::in    - INPUT  	- READING
		ios::out   - OUT 		- WRITE to FILE, if there is no file then creat it, if there 
						   		  is a file then truncate is (remove content) unless it occurs with
				 		     	  ios::in flag.
		ios::trunc - TRUNCATE 	- it is truncating the file (cutting everything inside).
		ios::ate   - At The End - sets pointer at the end of the file - the place of the pointer 
								  can be changed in that mode, it's possible to real to read ad writein that mode.
		ios::app   - Append		- the constract is added at the end of file (it's not possible to remove content nor
								  is adding something in other palce than the end of file).
		ios::binary- Binary 	- opens the file as a binary file
	*/
	/*
		DEFAULT MODE (FLAGS)
		- fstream - ios::in | ios::out

	*/

	if (file.is_open()) {
		file << "sample text_1 \n";
		file << "sample text_2 \n";
		
		
	} else {
		cout << "The file was NOT open properly";
	}


	file.close();		// - close file to free memory
	return 0;
}