////Title:邮箱地址合法性校验
//#include<iostream>
//#include<string>
//using namespace std;
//
//bool solve(string s) {
//	if (s.size() < 5 || s.substr(s.size() - 4) != ".com") return false;
//	int cnt = 0;
//	for (auto each : s) {
//		if (each == '@') ++cnt;
//		else if (!isalnum(each) && each != '.' && each != '_') return false;
//	}
//	if (cnt != 1) return false;
//	return true;
//}
//
//int main() {
//	string s;
//	while (getline(cin, s)) {
//		if (solve(s)) cout << 1 << endl;
//		else cout << 0 << endl;
//	}
//	return 0;
//}