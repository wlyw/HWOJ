//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//void solve(string& s) {
//	if (s.empty()) return ;
//	reverse(s.begin(), s.end());
//	for (auto itor = s.begin(); itor != s.end(); ) {
//		if (find(s.begin(), itor, *itor) != itor) {
//			itor = s.erase(itor);
//		}
//		else ++itor;
//	}
//
//	if (s.size() == 1) return;
//	for (auto itor = s.begin(); itor != s.end();) {
//		if (*itor == '0') itor = s.erase(itor);
//		else break;
//	}
//}
//
//int main() {
//	string s;
//	while (cin >> s) {
//		solve(s);
//		cout << s << endl;
//	}
//	return 0;
//}