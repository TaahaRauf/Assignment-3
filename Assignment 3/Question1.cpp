#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
int main() {
	int DiceRoll, totalP1=0, totalP2=0;
	srand((unsigned)time(0));
	cout << "Welcome Player 1 and Player 2 " << endl;
	do {
		cout << "Press any key to roll the dice " ;
		system("pause");
		DiceRoll = 1 + (rand() % 6);
		cout << "Player 1's turn: " << DiceRoll << endl;
		totalP1 = totalP1 + DiceRoll;
		cout << " Player 1 total : " << totalP1 <<endl;
		if (totalP1 > 20) {
			totalP1 = totalP1 - DiceRoll;
			cout << "Player cant move, value exceeds 20" <<endl;
			cout << "Player 1's total is back to " << totalP1 << endl;
		}
		cout << "Press any key to roll the dice " ;
		system("pause");
		DiceRoll = 1 + (rand() % 6);
		cout << "Player 2's turn: " << DiceRoll << endl;
		totalP2 = totalP2 + DiceRoll;
		cout << " Player 2 total : " << totalP2 << endl;
		if (totalP2 > 20) {
			totalP2 = totalP2 - DiceRoll;
			cout << "Player cant move, value exceeds 20" << endl;
			cout << "Player 2's total is back to " << totalP2 << endl; 
		}
		if (totalP1 == 20) {
			cout << "Player 1 wins ";
			break;
		}
		else if (totalP2 == 20)
		{
			cout << "Player 2 wins ";
			break;
		}
	}
	while (totalP1 != 20 && totalP2 != 20);
}
