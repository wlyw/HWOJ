//#include<iostream>
//using namespace std;
//
//int main() {
//	int num;
//	while (cin >> num) {
//		int res = 0;
//		for (int i = 7; i <= num; ++i) {
//			if (i % 7 == 0) ++res;
//			else {
//				int tmp = i;
//				while (tmp != 0) {
//					if (tmp % 10 == 7) { ++res; break; }
//					tmp /= 10;
//				}
//			}
//		}
//		cout << res << endl;
//	}
//	return 0;
//}