#include<iostream>

using namespace std;
#include <cmath>
int main()
{
	srand(time(0));
	int initial, firstTurn, difficulty, turn, compMarbles, HumanMarbles,i=0;
	unsigned int x=0;
	bool found = false;
	initial = 10 + rand() % 91;
	// 1 = Computer's Turn
	// 0 = Human's turn
	firstTurn = rand() % 2;
	// 1 = Computer's smart
	// 0 = Computer's stupid
	difficulty =  rand() % 2;
	if (firstTurn == 1) {
		cout << "Computer has first turn " << endl;
		turn = 1;
		// turn = 1 means that currently it is computer's turn
		// turn = 0 means that currently it is human's turn
		if (difficulty == 0) {
			cout << "Computer is playing smartly " << endl;
			while (initial != 1) {
				cout << "The number of marbles left are " << initial << endl;
				compMarbles = 1 + rand() % ((initial / 2)+1);
				cout << "The computer took " << compMarbles << endl;
				initial = initial - compMarbles;
				cout << "The number of marbles left are " << initial << endl;
				cout << "Human turn now : Enter number of marbles you wanna take " << endl;
				if (initial == 1) {
					break;
				}
				turn = 0;
				cin >> HumanMarbles;
				while (HumanMarbles > (initial / 2) || HumanMarbles == 0) {
					cout << "Please make a valid move " << endl;
					cin >> HumanMarbles;
				}
				initial = initial - HumanMarbles;
				turn = 1;
				cout << "Computer's turn  now " << endl;

			}
			if (turn == 0) {
				cout << "Human Loses ";
			}
			else {
				cout << "Computer Loses ";
			}
		}
		else {
			cout << "Computer is playing smartly " << endl;
			while (initial != 1) {
				cout << "The number of marbles left are " << initial << endl;
				for ( i = (initial / 2); i >= 1; i--) {

					x = initial - i;
					for (int j = 0; j <= initial; j++) {
						if (x == (pow(2, j) - 1)) {
							// valid number so loop must break
							found = true;

							break;
						}
					}
					if (found == true) {
						break;
					}
				}
				if (found == true) {
					compMarbles = i;
				}
				else {
					compMarbles = 1 + rand() % ((initial / 2)+1);
				}
				cout << "The computer took " << compMarbles << endl;
				initial = initial - compMarbles;
				cout << "The number of marbles left are " << initial << endl;
				cout << "Human turn now : Enter number of marbles you wanna take " << endl;
				if (initial == 1) {
					break;
				}
				turn = 0;
				cin >> HumanMarbles;
				while (HumanMarbles > (initial / 2) || HumanMarbles == 0) {
					cout << "Please make a valid move " << endl;
					cin >> HumanMarbles;
				}
				initial = initial - HumanMarbles;
				turn = 1;
				cout << "Computer's turn  now " << endl;

			}
			if (turn == 0) {
				cout << "Human Loses ";
			}
			else {
				cout << "Computer Loses ";
			}

		}
	}
	else{
		cout << "Player has first turn " << endl;
		turn = 0;
		// turn = 1 means that currently it is computer's turn
		// turn = 0 means that currently it is human's turn
		if (difficulty == 0) {
			cout << "Computer is playing smartly " << endl;
			while (initial != 1) {

				cout << "The number of marbles left are " << initial << endl;
				cout << "Human turn now : Enter number of marbles you wanna take " << endl;
				cin >> HumanMarbles;
				while (HumanMarbles > (initial / 2) || HumanMarbles == 0) {
					cout << "Please make a valid move " << endl;
					cin >> HumanMarbles;
				}
				initial = initial - HumanMarbles;
				if (initial == 1) {
					break;
				}
				turn = 1;
				cout << "The number of marbles left are " << initial << endl;
				compMarbles = 1 + rand() % ((initial / 2)+1);
				cout << "The computer took " << compMarbles << endl;
				initial = initial - compMarbles;
				
				turn = 0;
				cout << "Human's turn  now " << endl;

			}
			if (turn == 0) {
				cout << "Human Loses ";
			}
			else {
				cout << "Computer Loses ";
			}
		}
		else {
			cout << "Computer is playing smartly " << endl;
			while (initial != 1) {
				cout << "The number of marbles left are " << initial << endl;
				cout << "Human turn now : Enter number of marbles you wanna take " << endl;
				cin >> HumanMarbles;
				while (HumanMarbles > (initial / 2) || HumanMarbles == 0) {
					cout << "Please make a valid move " << endl;
					cin >> HumanMarbles;
				}
				initial = initial - HumanMarbles;
				if (initial == 1) {
					break;
				}
				turn = 1;
				cout << "Computer's turn  now " << endl;
				cout << "The number of marbles left are " << initial << endl;
				for (i = (initial / 2); i >= 1; i--) {

					x = initial - i;
					for (int j = 0; j <= initial; j++) {
						if (x == (pow(2, j) - 1)) {
							// valid number so loop must break
							found = true;

							break;
						}
					}
					if (found == true) {
						break;
					}
				}
				if (found == true) {
					compMarbles = i;
				}
				else {
					compMarbles = 1 + rand() % ((initial / 2)+1);
				}
				cout << "The computer took " << compMarbles << endl;
				initial = initial - compMarbles;
				
			
			
				turn = 0;
				

			}
			if (turn == 0) {
				cout << "Human Loses ";
			}
			else {
				cout << "Computer Loses ";
			}

		}

	}
}
// LINES POORI 200 KARNI HAIN