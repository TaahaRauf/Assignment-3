//#include <iostream>
//using namespace std;
//
//
//int main() {
//	int N;
//	double guess, approximation;
//	signed int input = 0;
//	srand(time(0));
//	guess = rand() % 10;
//	cout << "Please enter the number you want to find the square root of ";
//	cin >> N;
//	while (input != -1) {
//		for (int i = 0; i < 10; i++) {
//			approximation = (guess + (N / guess)) / 2;
//			guess = approximation;
//			cout << "The approximate guess is " << guess << endl;
//		}
//		cout << "Do you want to approximate more? Press -1 to exit";
//		cin >> input;
//	}
//
//
//}