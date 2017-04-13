////Title:排号机
////case3没过，题目本身描述挺模糊。。。
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	return a.second > b.second;
//}
//
//vector<string> procmd(string s, char ch) {
//	vector<string> res;
//	string tmp;
//	for (auto each : s) {
//		if (each == ch) {
//			res.push_back(tmp);
//			tmp.clear();
//		}
//		else tmp += each;
//	}
//	if (!tmp.empty()) res.push_back(tmp);
//	return res;
//}
//
//void bank_get(vector<string> opdata, vector<pair<int, int>>& bank, int& cnt) {
//	if (opdata.size() == 2) {
//		bank.push_back(make_pair(++cnt, 1));
//		cout << "vip " << cnt << endl;
//	}
//	else {
//		bank.push_back(make_pair(++cnt, 0));
//		cout << cnt << endl;
//	}
//	stable_sort(bank.begin(), bank.end(), cmp);
//}
//
//void bank_call(vector<pair<int, int>>& bank) {
//	if (bank.empty()) cout << "error" << endl;
//	else {
//		if (bank[0].second == 1) cout << "vip ";
//		cout << bank[0].first << endl;
//		bank.erase(bank.begin());
//	}
//}
//
//void bank_del(string op, vector<pair<int, int>>& bank, int& cnt) {
//	int id = atoi(op.c_str());
//	for (auto itor = bank.begin(); itor != bank.end(); ++itor) {
//		if (itor->first == id) {
//			if (itor->second == 1) cout << "vip ";
//			cout << id << endl;
//			if (itor + 1 == bank.end()) --cnt;
//			bank.erase(itor);
//			return;
//		}
//	}
//	cout << "error" << endl;
//}
//
//void bank_count(vector<pair<int, int>> bank) {
//	cout << bank.size() << endl;
//}
//
//void bank_countN(string op, vector<pair<int, int>> bank) {
//	int id = atoi(op.c_str());
//	for (int i = 0; i < bank.size(); ++i) {
//		if (bank[i].first == id) {
//			cout << i << endl;
//			return;
//		}
//	}
//}
//
//void bank_reset(vector<pair<int, int>>& bank, int& cnt) {
//	bank.clear();
//	cnt = 0;
//}
//
//int main() {
//	string cmd;
//	vector<pair<int, int>> bank;
//	int cnt = 0;
//	while (getline(cin, cmd)) {
//		if (cmd == "quit") break;
//		vector<string> opdata = procmd(cmd, ' ');
//		if (opdata[0] == "get") bank_get(opdata, bank, cnt);
//		else if (opdata[0] == "call") bank_call(bank);
//		else if (opdata[0] == "delete") bank_del(opdata[1], bank, cnt);
//		else if (opdata[0] == "count") bank_count(bank);
//		else if (opdata[0] == "countN") bank_countN(opdata[1], bank);
//		else if (opdata[0] == "reset") bank_reset(bank, cnt);
//		else cout << "error" << endl;
//	}
//	return 0;
//}