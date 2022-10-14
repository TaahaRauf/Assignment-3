//#include<iostream>
//using namespace std;
//int main()
//{
//	int N, temp, chain=0, highest=0, starting;
//	cout << "Enter the number you want to check up to ";
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		temp = i;
//		chain = 0;
//
//			do {
//				if (temp % 2 == 0)
//				{
//					temp = temp / 2;
//					chain = chain + 1;
//				}
//				else{
//					temp = (3 * temp) + 1;
//					chain = chain + 1;
//				}
//
//			} while (temp != 1);
//
//			if (chain > highest) {
//				highest = chain;
//				starting = i;
//
//		}
//	}
//	cout << "The largest chain is produced at " << starting;
//
//
//
//}