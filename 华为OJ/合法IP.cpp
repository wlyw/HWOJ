//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//bool trans(const string& str) {
//	vector<int> trs;
//	for (int i = 0; i < str.size(); ++i) {
//		string tmp;
//		while (i < str.size() && str[i] != '.') {
//			if (!isdigit(str[i])) return false;
//			tmp.push_back(str[i++]);
//		}
//		if (tmp.empty()) return false;
//		trs.push_back(atoi(tmp.c_str()));
//	}
//	if (trs.size() != 4) return false;
//	for (auto each : trs) {
//		if (each < 0 || each>255) return false;
//	}
//	return true;
//}
//
//int main() {
//	string s;
//	while (cin >> s) {
//		if (trans(s)) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}