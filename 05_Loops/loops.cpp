#include <iostream>

using namespace std;

main(){
	/* */
	cout << "-- for-loop --" << endl;	
	system("cls");
	for (int i = 0; i < 5; i++) {
		cout << i << endl;
	}
	cout << "lala" << endl;
	
	int array[5];
	for ( int i = 0; i <=8; i++){
		array[i] = i;
		cout << array[i] << endl;
	}


	cout << "-- while --" << endl;
	int j = 0;
	while(j++ < 10){
		cout << j << "\t";
	}
	

	cout << "-- do-while --" << endl;	
	do {
		cout << j << "\t";
	
	}while(j-- > 0);
	

	cout << "-- nested loops --" << endl;
	for (int i = 1; i <= 5; i++){
		//cout << i << " ";
		for (int j = 1; j <= 6; j++){
			cout.width(4);
			cout << i * j;
		}
		cout << endl;
	}
	

	cout << "-- nested loops with CONTINUE and BREAK--" << endl;
	for (int i = 1; i <= 5; i++){
		if (i==3) continue; // EVERYTHING AFTER the contune instruction WILL NOT BE executed BUT loop will continue once i++
		if (i == 4) break;	// EVERYTHING after break WILL NOT be executed AND we are LEAVING the ACTUAL loop
		for (int j = 1; j <= 6; j++){
			cout.width(4);
			cout << i * j;
		}
		cout << endl;
	}
	

	cout << "-- Another way to create nested loops --" << endl;
	for (int i = 1, j = 1; i <= 10; i++){
		cout.width(4);
		cout << i * j;

		if(i == 10){
			j++;
			i = 0;
			cout << endl;
		}
		if (j == 11) { break; }
	}
}