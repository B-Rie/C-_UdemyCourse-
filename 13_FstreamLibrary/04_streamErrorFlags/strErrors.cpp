#include <iostream>
#include <fstream>		

using namespace std;
/* Error Flags: 
	bad()	- bad(1) - badbit - returns true if thee is an error like writing to a file 
							   which was opened only for reading (ios::in)
	fail() 	- failbit(0) - returns true if we try to assign string to integer while reading f
						from file or when badbit occurs
	eof()	- eofbit(2) - returns true if the file opened to read reaches the End of File.
	good()	- goodbit(0) - return true if everything is fine (if nay of the above flags are false)
	rdstate() -	Read State 
	clear()	- clear state 


*/

int main(){

	fstream file;

	file.open("04_sample.txt", ios::in);	

	if (file.is_open()) {
		
		string buffer ;

		do {
			file >> buffer;
			cout << buffer << endl;
		} while (!file.eof());

		cout << (file.rdstate() ^ ifstream::eofbit) << endl;
		if ((file.rdstate() ^ ifstream::eofbit)==0) {
			file.clear();
			// set indicator of place in file to some other place
			// some other seperation of file.
		}
		cout << file.rdstate();

	} else
		cout << "The file couldn't be opened properly" << endl;
		file.close();		
	return 0;
}