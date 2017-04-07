//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main() {
//	string s;
//	while (getline(cin, s)) {
//		vector<string> data;
//		for (int i = 0; i < s.size(); ++i) {
//			string tmp;
//			if (s[i] == '"') {
//				while (i < s.size() && s[++i] != '"') {
//					tmp += s[i];
//				}
//			}
//			else if (s[i] != ' ') {
//				while (i < s.size() && s[i] != ' ') {
//					tmp += s[i];
//					++i;
//				}
//			}
//			if (!tmp.empty()) data.push_back(tmp);
//		}
//		cout << data.size() << endl;
//		for (auto each : data) {
//			cout << each << endl;
//		}
//	}
//	return 0;
//}