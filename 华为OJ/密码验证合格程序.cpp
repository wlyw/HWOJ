//#include<iostream>
//#include<string>
//using namespace std;
//
//bool judgepass(string& s) {
//	if (s.size() <= 8) return false;
//
//	int up = 0, lo = 0, nu = 0, ot = 0;
//	for (auto each : s) {
//		if (isupper(each)) up = 1;
//		else if (islower(each)) lo = 1;
//		else if (isalnum(each)) nu = 1;
//		else ot = 1;
//	}
//	if (up + lo + nu + ot < 3) return false;
//
//	for (int i = 0; i < s.size(); ++i) {
//		for (int j = i + 3; j < s.size() - 2; ++j) {
//			if (s[i] == s[j] && s[i + 1] == s[j + 1] && s[i + 2] == s[j + 2])
//				return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	string s;
//	while (cin >> s) {
//		if (judgepass(s)) cout << "OK" << endl;
//		else cout << "NG" << endl;
//	}
//	return 0;
//}