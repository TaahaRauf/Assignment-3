#include<iostream>
using namespace std;
int main()
{
	srand(time(0));
	int initial, firstTurn, difficulty;
	initial = 10 + rand() % 100;
	// 1 = Computer's Turn
	// 0 = Human's turn
	firstTurn = rand() % 1;
	// 1 = Computer's smart
	// 0 = Computer's stupid
	difficulty = rand() % 1;
	if (firstTurn == 1) {
		while (initial != 1) {

		}
	}
}