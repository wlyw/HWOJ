//#include<iostream>
//#include<math.h>
//using namespace std;
//
//bool IsPrime(int num) {
//	if (num < 2) return false;
//	for (int i = 2; i <= sqrt(num); ++i) {
//		if (num % i == 0) return false;
//	}
//	return true;
//}
//
//int main() {
//	int fir, sec;
//	cin >> fir >> sec;
//	int res = 0, dis = 0, length = 0;
//	for (int i = fir; i <= sec; ++i) {
//		if (IsPrime(i)) {
//			for (int j = 1; j <= sec - i; ++j) {
//				int tmp = 1;
//				for (int k = i + j; k <= sec; k += j) {
//					if (!IsPrime(k)) break;
//					else ++tmp;
//				}
//				if (tmp > length || tmp == length && j > dis) {
//					res = i;
//					dis = j;
//					length = tmp;
//				}
//			}
//		}
//	}
//	while (length--) {
//		cout << res << endl;
//		res += dis;
//	}
//	return 0;
//}