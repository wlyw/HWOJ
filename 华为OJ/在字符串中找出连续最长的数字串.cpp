//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string s;
//	while (cin >> s) {
//		int len = 0;
//		string res;
//		for (int i = 0; i < s.size(); ++i) {
//			if (isdigit(s[i])) {
//				int tmp = 0; int pos = i;
//				while (i < s.size() && isdigit(s[i])) {
//					++tmp; ++i;
//				}
//				if (tmp == len) res += s.substr(pos, len);
//				if (tmp > len) {
//					res.clear();
//					res += s.substr(pos, tmp);
//					len = tmp;
//				}
//			}
//		}
//		if (len == 0) cout << len << endl;
//		else cout << res << "," << len << endl;
//	}
//	return 0;
//}