//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//vector<string> sp(string s) {
//	vector<string> res;
//	string tmp;
//	for (auto each : s) {
//		if (each == ' ') {
//			res.push_back(tmp);
//			tmp.clear();
//		}
//		else tmp += each;
//	}
//	res.push_back(tmp);
//	return res;
//}
//
//int main() {
//	vector<pair<string,string>> com;
//	com.push_back(make_pair("reset", ""));
//	com.push_back(make_pair("reset", "board"));
//	com.push_back(make_pair("board", "add"));
//	com.push_back(make_pair("board", "delet"));
//	com.push_back(make_pair("reboot", "backplane"));
//	com.push_back(make_pair("backplane", "abort"));
//	vector<string> res = { "reset what","board fault","where to add",
//		"no board at all","impossible","install first","unkown command" };
//
//	string s;
//	while (getline(cin, s)) {
//		if (s.empty()) continue;
//		vector<string> data = sp(s);
//		if (data.size() == 1) {
//			if (com[0].first.find(data[0]) != string::npos) {
//				cout << res[0] << endl;
//				continue;
//			}
//		}
//		else if(data.size() == 2){
//			int cnt = 0;
//			for (int i = 1; i < 6; ++i) {
//				/*if (com[i].first.find(data[0]) != string::npos && com[i].second.find(data[1]) != string::npos) {
//					cnt = cnt == 0 ? i : 6;
//				}*/
//				if (data[0].size() <= com[i].first.size()
//					&& com[i].first.substr(0, data[0].size()) == data[0]
//					&& data[1].size() <= com[i].second.size()
//					&& com[i].second.substr(0, data[1].size()) == data[1]) {
//					cnt = cnt == 0 ? i : 6;
//				}
//			}
//			if (cnt != 0) cout << res[cnt] << endl;
//			else cout << res[6] << endl;
//			continue;
//		}
//		cout << res[6] << endl;
//	}
//	return 0;
//}