//#include<iostream>
//#include<string>
//using namespace std;
//
//int solve(string& s, char& c) {
//	if (s.empty())return 0;
//	int res = 0;
//	for (auto each : s) {
//		if ((each - 'a') == (c - 'A'))++res;
//		else if ((each - 'A') == (c - 'a'))++res;
//		else if (each == c)++res;
//	}
//	return res;
//}
//
//int main() {
//	string s;
//	char c;
//	getline(cin, s);
//	c = getchar();
//	cout << solve(s, c) << endl;
//	return 0;
//}