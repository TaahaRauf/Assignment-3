//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//    int n, i, j, k;
//    bool flag = false;
//    bool is_prime = true;
//    bool is_Secondprime = true;
//
//    cout << "Enter a positive  integer: ";
//    cin >> n;
//    for (i = 2; i <= (n/2); i++) {
//        is_prime = true;
//        is_Secondprime = true;
//
//        for (j = 2; j < i; j++) {
//            if (i % j == 0) {
//                is_prime = false;
//                j = i;
//            }
//        }
//        for (k = 2; k < (n - i); k++) {
//            if ((n - i) % k == 0) {
//                    is_Secondprime = false;
//                    k = n - i;
//                }
//            }
//
//  
//        if (is_prime && is_Secondprime) {
//            cout << "The number " << n << " is a sum of " << i << " and  " << n - i << endl;
//        }
//
//
//
//    }
//    if (!is_prime && !is_Secondprime) {
//        cout << "Not a sum of two prime numbers ";
//    }
//
//    return 0;
//}
