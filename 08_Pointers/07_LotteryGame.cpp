#include <iostream>
#include <ctime>  

using namespace std;

void lottery (int, int);

int main() {

	lottery(5, 4);
	

	return 0;
}

void lottery(int totalDraw, int draws){

	if(draws > totalDraw) {	return; }

	int * draw = new int[draws];

	srand(time(NULL));

	for(int i=0; i<draws; i++){
		draw[i]=rand()%totalDraw+1;
		for(int j=0; j<i+1; j++){
			if(draw[i] == draw[j] && i != j){
				i--;
				break;
			} else if(j==i) {
				cout<<"array["<<i<<"] = "<<draw[i]<<endl;
			}
		}
	}
	//cout << draw[0] << endl;
	delete[] draw;				// -clear values in memeory
	//cout << draw << endl;
	//cout << draw[0] << endl;
}