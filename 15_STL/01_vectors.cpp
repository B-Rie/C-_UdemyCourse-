#include <iostream>
#include <vector>

/* Vectors: - we do not have to specify the size of the vector like an array.
			-
*/

using namespace std;

int main(){

	vector<int> wholeNumbers;	// - (vector<datatype> vectorName)
	wholeNumbers.push_back(1);
	wholeNumbers.push_back(25);
	wholeNumbers.push_back(-45);
	wholeNumbers.push_back(350);

	cout << wholeNumbers.at(0) << endl;
	cout << wholeNumbers.at(1)<< endl;
	cout << wholeNumbers.at(2) << endl;
	cout << wholeNumbers.at(3) << endl;
	
	cout << "size: " << wholeNumbers.size() << endl;
	cout << "capacity: " << wholeNumbers.capacity() << endl;


	// - changing vector content
	wholeNumbers[2] = 500;
	cout << wholeNumbers.at(2) << endl;


	

	
	return 0;
}

