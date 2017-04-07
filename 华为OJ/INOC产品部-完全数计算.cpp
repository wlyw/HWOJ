//#include<iostream>
//#include<math.h>
//#include<vector>
//using namespace std;
//
//int solve(int& N) {
//	int res = 0;
//	for (int i = 2; i <= N; ++i) {
//		int tmp = 1;
//		for (int j = 2; j <= sqrt(i); ++j) {
//			if (i%j == 0) {
//				tmp += j;
//				tmp += i / j;
//			}
//		}
//		if (i == tmp) ++res;
//	}
//	return res;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	cout << solve(N) << endl;
//	return 0;
//}