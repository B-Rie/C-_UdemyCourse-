#include <iostream>
#include <fstream>		// - file stream

using namespace std;
/* Open and Close Files: 

*/

int main(){

	fstream myFileHandler;

	myFileHandler.open("test.txt");

	if (myFileHandler.is.open) {
		cout << "The file was open properly";
		myFileHandler << "this is a sample test";	// op: we write this to file
	} else {
		myFileHandler.close();		// - close file to free memory
	}
	
	return 0;
}