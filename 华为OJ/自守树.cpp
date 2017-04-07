//#include<iostream>
//#include<string>
//using namespace std;
//
//int solve(int n) {
//	if (n == 0) return 1;
//	if (n == 1) return 2;
//	int res = 2;
//	for (int i = 2; i <= n; ++i) {
//		string l(to_string(i*i));
//		string r(to_string(i));
//		if (l.substr(l.size() - r.size()) == r)
//			++res;
//	}
//	return res;
//}
//
//int main() {
//	int n;
//	while (cin >> n) {
//		cout << solve(n) << endl;
//	}
//	return 0;
//}