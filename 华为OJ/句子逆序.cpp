//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//void despite(string& s, vector<string>& res) {
//	for (int i = 0; i < s.size(); ++i) {
//		if (s[i] == ' ') continue;
//		string tmp;
//		int j = i;
//		for (; j < s.size(); ++j) {
//			if (s[j] == ' ') break;
//			tmp += s[j];
//		}
//		i = j;
//		res.push_back(tmp);
//	}
//}
//
//int main() {
//	string s;
//	getline(cin, s);
//	vector<string> res;
//	despite(s, res);
//	for (int i = res.size() - 1; i > 0; --i) {
//		cout << res[i] << " ";
//	}
//	if (res.size() > 0) cout << res[0];
//	cout << endl;
//	return 0;
//}