//#include<iostream>
//using namespace std;
//
//int main() {
//	int n;
//	while (cin >> n) {
//		int res = 0;
//		for (int i = 0; i < 32; ++i) {
//			if (n & 1) {
//				int tmp = 0;
//				while (n & 1) {
//					++tmp;
//					n >>= 1;
//				}
//				res = tmp > res ? tmp : res;
//			}
//			else n >>= 1;
//		}
//		cout << res << endl;
//	}
//	return 0;
//}