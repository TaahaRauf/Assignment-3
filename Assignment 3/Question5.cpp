//#include <iostream>
//using namespace std;
//
//int factorial(int n) {
//	int  factorial = 1;
//	factorial = factorial * n;
//	for (int i = 1; i < n; i++) {
//		factorial = factorial * (n - i);
//	}
//	return factorial;
////}
//
//int permutation(int n, int r){
//	int  factorial1=1, factorial2=1,nPr;
//	factorial1 = factorial1 * n;
//	for (int i = 1; i < n; i++) {
//		factorial1 = factorial1  * (n - i);
//	}
//	factorial2 = factorial2 * (n-r);
//	for (int i = 1; i < (n-r); i++) {
//		factorial2 = factorial2 * ((n-r) - i);
//	}
//	nPr = factorial1 / factorial2;
//	return nPr;
//}
//
//int combination(int n, int r) {
//	int  factorial1 = 1, factorial2 = 1, factorial3=1, nCr;
//	factorial1 = factorial1 * n;
//	for (int i = 1; i < n; i++) {
//		factorial1 = factorial1 * (n - i);
//	}
//	factorial1 = factorial2 * (n - r);
//	for (int i = 1; i < (n - r); i++) {
//		factorial2 = factorial2 * ((n - r) - i);
//	}
//	factorial3 = factorial3 * (r);
//	for (int i = 1; i < (r); i++) {
//		factorial3 = factorial3 * ((r)-i);
//	}
//	nCr = factorial1 / (factorial2 * factorial3);
//	return nCr;
//}
//
//int combination2(int n, int r) {
//	int factorial3=1, nCr2;
//	factorial3 = factorial3 * (r);
//	for (int i = 1; i < (r); i++) {
//		factorial3 = factorial3 * ((r)-i);
//	}
//
//	nCr2 = permutation(n, r) * factorial3;
//	return nCr2;
//}
//
//
//int main() {
//
//	int input,n,r, result;
//
//	cout << "PLEASE CHOOSE FROM THE FOLLOWING OPTIONS " << endl;
//	cout << "a. On 1 print factorial of number \n b.On 2 print nPr.\n c.On 3 print nCr designed in part 3. \n d.On 4 print nCr designed in part 4.\n e.On 5 Exit Program.";
//	cin >> input;
//	if (input == 1) {
//		cout << "Enter n " << endl;
//		cin >> n;
//		result = factorial(n);
//		cout << result;
//
//	}
//	if (input == 2) {
//		cout << "Enter n " << endl;
//		cin >> n;
//		cout << "Enter r " << endl;
//		cin >> r;
//		result = permutation(n,r);
//		cout << result;
//		
//
//	}
//	if (input == 3) {
//		cout << "Enter n " << endl;
//		cin >> n;
//		cout << "Enter r " << endl;
//		cin >> r;
//		result = combination(n,r);
//		cout << result;
//
//	}
//	if (input == 4) {
//		cout << "Enter n " << endl;
//		cin >> n;
//		cout << "Enter r " << endl;
//		cin >> r;
//		result = combination2(n, r);
//		cout << result;
//	}
//	if (input == 5) {
//		
//
//	}
//
//
//}