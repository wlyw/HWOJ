//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//bool trans(const string& str, vector<int>& trs) {
//	for (int i = 0; i < str.size(); ++i) {
//		string tmp;
//		while (i < str.size() && str[i] != '.') {
//			tmp.push_back(str[i++]);
//		}
//		if (tmp.empty()) return false;
//		trs.push_back(atoi(tmp.c_str()));
//	}
//	if (trs.size() != 4) return false;
//	//while (trs.size() < 4) trs.push_back(0);
//	for (auto each : trs) {
//		if (each < 0 || each>255) return false;
//	}
//	return true;
//}
//
//int solve(const string& mask, const string& ip1, const string& ip2) {
//	vector<int> MASK, IP1, IP2;
//	if (trans(mask, MASK) && trans(ip1, IP1) && trans(ip2, IP2)) {
//		for (int i = 0; i < 4; ++i) {
//			if ((MASK[i] & IP1[i]) != (MASK[i] & IP2[i]))
//				return 2;
//		}
//	}
//	else
//		return 1;
//	return 0;
//}
//
//int main() {
//	string mask, ip1, ip2;
//	while (cin >> mask >> ip1 >> ip2) {
//		cout << solve(mask, ip1, ip2) << endl;
//	}
//	return 0;
//}