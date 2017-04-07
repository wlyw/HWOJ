//#include<iostream>
//#include<vector>
//using namespace std;
//
//int solve(int& num) {
//	int res = 0;
//	while (num >= 2) {
//		if (num == 2) { ++res; num = 0; }
//		res += num / 3;
//		num = num % 3 + num / 3;
//	}
//	return res;
//}
//
//int main() {
//	int num;
//	while (cin >> num && num != 0) {
//		cout << solve(num) << endl;
//	}
//	return 0;
//}