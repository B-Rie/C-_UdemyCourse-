#include <iostream>
#include <vector>

using namespace std;
/* ITERATOR: objects indicating specific ELEMENT inside a CONATAINER

	How to create ITERATOR:
		containerType::iterator iteratorName;
*/

// -- ITERATION --repetition

int main(){

	vector<int> wholeNumbers{20, 10, 4, -3, 25};	

	
	// - instead  using a for-loop, we'll use ITERATORS

	vector<int>::iterator it = wholeNumbers.begin();

	cout << *it << endl;	// - op: 20
	it++;					
	cout << *it << endl;	// - op: 10
	it+=2;
	cout << *it << endl;	// - op: -3
	

	
	return 0;
}

