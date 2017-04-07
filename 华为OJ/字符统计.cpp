//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool IsReq(char& c) {
//	if (isalpha(c) || (c <= '9' && c >= '0') || c == ' ') return true;
//	return false;
//}
//
//bool cmp(const pair<char, int>& a, const pair<char, int>& b) {
//	return a.second > b.second;
//}
//
//string solve(string& s) {
//	vector<int> data(128, 0);
//	for (auto each : s) {
//		if (IsReq(each)) {
//			++data[each];
//		}
//	}
//
//	vector<pair<char, int>> vdata;
//	for (int i = 0; i < 128; ++i) {
//		if(data[i] > 0) vdata.push_back(make_pair(i, data[i]));
//	}
//
//	stable_sort(vdata.begin(), vdata.end(), cmp);
//
//	string res;
//	for (auto each : vdata) {
//		res += each.first;
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