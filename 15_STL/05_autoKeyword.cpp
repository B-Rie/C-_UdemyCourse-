#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> wholeNumbers{20, 10, 4, -3, 25};

	vector<int>::iterator it = wholeNumbers.begin();	

	/* auto - AUTOmatically infers (deduce) the type of variable by what is assigned to it.
	*/
	int nrPeople = 20;

	// - replace( vector<int>::iterator )--> auto
	for(auto it = wholeNumbers.begin(); it != wholeNumbers.end(); it++){
		cout << *it << endl;
	}

	
	return 0;
}

