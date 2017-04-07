//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int solve(string& s) {
//	if (s.empty()) return 0;
//	int res = 0;
//	auto itor = s.end();
//	for (--itor; itor >= s.begin(); --itor) { 
//		if (*itor != ' ') break;
//		if (itor == s.begin()) return 0;
//	}
//	for (; itor >= s.begin(); --itor) {
//		if (*itor == ' ') break;
//		++res;
//		if (itor == s.begin()) return res;
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