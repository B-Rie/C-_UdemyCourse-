#include <iostream>
#include <vector>

using namespace std;
/* ITERATOR VECTOR:
*/


int main(){

	vector<int> wholeNumbers{20, 10, 4, -3, 25};

	vector<int>::iterator it = wholeNumbers.begin();	

	cout << " -- ITERATOR While-loop --" << endl;
	
	while(it != wholeNumbers.end()){
		cout << *it << endl;
		it++;
	}

	cout << endl << " -- ITERATOR for-loop --" << endl;
	for(vector<int>::iterator it = wholeNumbers.begin(); it != wholeNumbers.end(); it++){
		cout << *it << endl;
	}

	
	return 0;
}

