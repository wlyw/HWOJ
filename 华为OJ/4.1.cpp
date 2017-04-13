////Title:×´Ì¬»ú
//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace std;
//
//string start;
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
//void ins(string op, map<string, pair<string, string>>& sta, string& now) {
//	vector<string> opdata = procmd(op, ',');
//	if (sta.find(opdata[2]) == sta.end()) {
//		if (sta.empty()) {
//			now = opdata[0];
//			start = now;
//		}
//		sta.insert(make_pair(opdata[2], make_pair(opdata[0], opdata[1])));
//	}
//	else if (sta[opdata[2]].first != opdata[0] || sta[opdata[2]].second != opdata[1]) {
//		cout << "Error" << endl;
//	}
//}
//
//void del(string op, map<string, pair<string, string>>& sta, string& now) {
//	if (op == start && now != start) {
//		sta.clear();
//		start.clear();
//		now.clear();
//		return;
//	}
//	if (now == op) {
//		cout << "Error" << endl; return;
//	}
//	bool flag = true;
//	if (sta.find(op) != sta.end()) {
//		sta.erase(sta.find(op)); return;
//	}
//	else {
//		for (auto itor = sta.begin(); itor != sta.end(); ) {
//			if (itor->second.first == op || itor->second.second == op) {
//				itor = sta.erase(itor); flag = false;
//			}
//			else ++itor;
//		}
//	}
//	if(flag) cout << "Error" << endl;
//}
//
//void inp(string op, map<string, pair<string, string>>& sta, string& now) {
//	if (now.empty()) {
//		cout << "Error" << endl; return;
//	}
//	if (sta.find(op) != sta.end() && sta[op].first == now) {
//		now = sta[op].second;
//	}
//	else cout << "Error" << endl;
//}
//
//void out(map<string, pair<string, string>>& sta, string& now) {
//	if (sta.empty() || now.empty()) {
//		cout << "Error" << endl;
//	}
//	else cout << now << endl;
//}
//
//int main() {
//	string cmd;
//	map<string, pair<string, string>> sta;
//	string now;
//	while (getline(cin, cmd)) {
//		if (cmd == "End") break;
//		vector<string> opdata = procmd(cmd, ' ');
//		for (int i = 0; i < opdata.size(); ++i) {
//			if (opdata[i] == "Insert") ins(opdata[++i], sta, now);
//			else if (opdata[i] == "Delete") del(opdata[++i], sta, now);
//			else if (opdata[i] == "Input") inp(opdata[++i], sta, now);
//			else if (opdata[i] == "Output") out(sta, now);
//		}
//	}
//	return 0;
//}