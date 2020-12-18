#include <iostream>
#include <fstream>		

using namespace std;
/* Read from files: 
	read 	- (where to read, how mnay bytes to read);

*/

int main(){
 
	fstream file;

	file.open("08_sample.txt", ios::in | ios::binary | ios::ate);	

	if (file.is_open()) {


	} else
		cout << "The file couldn't be opened properly" << endl;
		//file.close();		
	return 0;
}