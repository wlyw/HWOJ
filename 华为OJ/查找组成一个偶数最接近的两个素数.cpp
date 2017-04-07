//#include<iostream>
//#include<cmath>
//using namespace std;
//
//bool isPrime(int n) {
//	for (int i = 2; i <= sqrt(n); ++i) {
//		if (n % i == 0) return false;
//	}
//	return true;
//}
//
//int main() {
//	int n;
//	while (cin >> n) {
//		for (int i = n / 2; i < n - 1; ++i) {
//			if (isPrime(i) && isPrime(n - i)) {
//				cout << n - i << endl << i << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}