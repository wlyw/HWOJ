//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//vector<string> sp(string s, char op) {
//	vector<string> res;
//	string tmp;
//	for (auto each : s) {
//		if (each == op) {
//			res.push_back(tmp);
//			tmp.clear();
//		}
//		else tmp += each;
//	}
//	res.push_back(tmp);
//	return res;
//}
//
//int judge(vector<string> a, vector<string> b) {
//	vector<string> tab = { "3","4","5","6","7","8","9","10","J","Q","K","A","2","joker","JOKER" };
//
//	if (a.size() == b.size()) {
//		auto it1 = find(tab.begin(), tab.end(), a[0]);
//		auto it2 = find(tab.begin(), tab.end(), b[0]);
//		if (it1 > it2) return 0;
//		else return 1;
//	}
//	else {
//		if (a.size() == 2 && (a[0] == "joker" || a[0] == "JOKER")) return 0;
//		else if (b.size() == 2 && (b[0] == "joker" || b[0] == "JOKER")) return 1;
//
//		if (a.size() == 4) return 0;
//		else if (b.size() == 4) return 1;
//
//		return -1;
//	}
//}
//
//int main() {
//	string s;
//	while (getline(cin, s)) {
//		vector<string> data = sp(s, '-');
//		vector<string> l = sp(data[0], ' ');
//		vector<string> r = sp(data[1], ' ');
//
//		if (judge(l, r) == 0) cout << data[0] << endl;
//		else if (judge(l, r) == 1) cout << data[1] << endl;
//		else cout << "ERROR" << endl;
//	}
//	return 0;
//}