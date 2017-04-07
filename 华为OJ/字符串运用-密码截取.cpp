//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int solve(string& s) {
//	int res = 0;
//	for (int i = 0; i < s.size(); ++i) {
//		int l = i - 1, r = i + 1;
//		while (l >= 0 && r < s.size()) {
//			if (s[l] == s[r]) {
//				--l;
//				++r;
//			}
//			else break;
//		}
//		res = max(res, r - l - 1);
//	}
//
//	for (int i = 0; i < s.size() - 1; ++i) {
//		int l = i, r = i + 1;
//		while (l >= 0 && r < s.size()) {
//			if (s[l] == s[r]) {
//				--l;
//				++r;
//			}
//			else break;
//		}
//		res = max(res, r - l - 1);
//	}
//	return res;
//}
//
//int main() {
//	string s;
//	getline(cin, s);
//	cout << solve(s) << endl;
//	return 0;
//}