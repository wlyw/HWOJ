//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//void trans(string& s) {
//	for (int i = 0; i < s.size(); ++i) {
//		if (isupper(s[i])) {
//			s[i] = (s[i] - 'A' + 1) % 26 + 'a';
//		}
//		else if (islower(s[i])) {
//			if (s[i] <= 'c') s[i] = '2';
//			else if (s[i] <= 'f') s[i] = '3';
//			else if (s[i] <= 'i') s[i] = '4';
//			else if (s[i] <= 'l') s[i] = '5';
//			else if (s[i] <= 'o') s[i] = '6';
//			else if (s[i] <= 's') s[i] = '7';
//			else if (s[i] <= 'v') s[i] = '8';
//			else s[i] = '9';
//		}
//	}
//}
//
//int main() {
//	string s;
//	getline(cin, s);
//	trans(s);
//	cout << s << endl;
//	return 0;
//}