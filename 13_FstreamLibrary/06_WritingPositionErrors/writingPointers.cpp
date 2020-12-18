#include <iostream>
#include <fstream>		

using namespace std;
/* Writing Position Pointers: 
	tellp	- tell put - tell where is the putting pointer. 
	seekp 	- seek put - set writing (putting) pointer at specified position.

	seekg(how_many_bytes_from_the_flag_place, flag);

	possible flags:
	ios::beg	- (begin) set from the begin (default).
	ios::end	- set from the end. 
	ios::cur	- (current) set from current place.
*/

int main(){
 
	fstream file;

	file.open("06_sample.txt", ios::out | ios::binary);	

	if (file.is_open()) {
		string tmp = "this is text about nothing";
		file << tmp;
		cout << file.tellp() << endl;
		file.seekp(0, ios::beg);
		file << "T";				// - Changeing the first character in the string
		
	} else
		cout << "The file couldn't be opened properly" << endl;
		//file.close();		
	return 0;
}