//#include <iostream>
//using namespace std;
//
//
//int main() {
//	int cardNumber, i, digit, temp, temp2,sum1=0,j, sum2=0, sum3=0,value, checkdigit;
//	cout << "Enter 8 digit " << endl;
//	cin >> cardNumber;
//	temp = cardNumber;
//
//	for (i = 0; i <= 3; i++) {
//		
//		digit = temp % 10;
//		temp = temp / 100;
//		sum1 = sum1 + digit;
//
//	}
//	temp = cardNumber/10;
//	for (i = 0; i <= 3; i++) {
//		digit = (temp % 10) * 2;
//		temp = temp / 100;
//		temp2 = digit;
//		for (j = 0; j <= 2; j++) {
//			digit = temp2 % 10;
//			temp2 = temp2 / 10;
//			sum2 = sum2 + digit;
//		}
//
//
//	}
//	sum3 = sum2 + sum1;
//	if (sum3 % 10 == 0) {
//		cout << "Card Number is valid " << endl;
//	}
//	else {
//		value = sum3 % 10;
//		checkdigit = (cardNumber % 10) + value;
//		cout << "The check digit should be " << value;
//	}
//}