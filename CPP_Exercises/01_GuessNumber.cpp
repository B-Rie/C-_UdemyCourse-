/*Exercise 1.
This Program is a Guess the Number Game.
The computer will select a number between 1 - 10 and ask the user to guess.
After each guess, the computer will tell the user whether the number is too high or to low.
The user will get 4 attempts.
*/

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int userGuess();
void playGame();
void intro();


int main (){
	string playAgain = "yes";
	string i;
	
	while(playAgain[0] == 'y'){
		playGame();
		cout << endl << "Do you want to play again? (yes/no): ";
		cin >> i;
		transform(i.begin(), i.end(), i.begin(), ::tolower);
		playAgain = i;
	}
	
	return 0;
}


///////////////////////////////////
// 		--- FUNCTIONS ---

int userGuess(){
	int guess = 0;
	cout << "Enter a number between 1 - 20: ";
	cin >> setw(2) >> guess;

	// Error check
	while (!cin.good() || guess > 20 || guess < 1){
		// Cleared steam
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		// Get input
		cout << "Error: Please Enter a NUMBER between 1 - 20: ";
		cin >> guess;

	}
	// Cleared steam
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return guess;
};

void playGame(){
	int attempts = 6;
	int array[6];
	int arraySize = sizeof(array)/sizeof(array[0]);
	srand(time(NULL));
	int compNumb = rand()%20+1;
	bool winner = true;
	
	intro();
	while (attempts != 0){

		int guess = userGuess();

		if (guess < compNumb){
			cout << "You guessed to LOW" << endl;
			attempts--;
			cout << "attempts: " << attempts << endl;
		}
		if (guess > compNumb){
			cout << "You guessed to HIGH" << endl;
			attempts--;
			cout << "attempts: " << attempts << endl;
		}			
		if (guess == compNumb){
			cout << "WINNER" << endl;
			winner = false;
			break;
		}

		
	}
	if (winner == true){
		cout << " You ran out of chances. The Computer chose: " << compNumb << endl;
	}
};

void intro(){
	cout << "WELCOME TO GUESS THE NUMBER GAME" << endl;
	cout << "You will have 6 attempts to guess a number the computer has chosen from 1 - 20." << endl;
	cout << "Good luck!" << endl;
};