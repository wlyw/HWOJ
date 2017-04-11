//#include<iostream>
//#include<string>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	int cash;
//	int card;
//	int flag;
//	node(int a, int b, int c) :cash(a), card(b), flag(c) {}
//};
//
//vector<string> procmd(string cmd) {
//	vector<string> res;
//	string tmp;
//	for (auto each : cmd) {
//		if (each == ',') {
//			res.push_back(tmp);
//			tmp.clear();
//		}
//		else tmp += each;
//	}
//	res.push_back(tmp);
//	return res;
//}
//
//void init(vector<node>& pat, queue<int>& doc, vector<int>& fee) {
//	pat.clear();
//	pat.push_back(node(100, 0, 0));
//	pat.push_back(node(100, 100, 0));
//	pat.push_back(node(100, 0, 0));
//	pat.push_back(node(100, 50, 0));
//	pat.push_back(node(10, 10, 0));
//	pat.push_back(node(20, 10, 0));
//
//	doc.swap(queue<int>());
//	fee.clear();
//	cout << "E000" << endl;
//}
//
//void reg(string op, vector<node>& pat, queue<int>& doc) {
//	int ID = atoi(op.c_str());
//	if (pat[ID - 1].flag != 0) {
//		cout << "E002" << endl;
//		return;
//	}
//	if (doc.size() >= 4) {
//		cout << "E003" << endl;
//		return;
//	}
//	if (pat[ID - 1].card >= 10) pat[ID - 1].card -= 10;
//	else if (pat[ID - 1].cash >= 10) pat[ID - 1].cash -= 10;
//	else {
//		cout << "E004" << endl;
//		return;
//	}
//	doc.push(ID);
//	pat[ID - 1].flag = 1;
//	cout << "E001" << endl;
//}
//
//void diag(queue<int>& doc, vector<int>& fee, vector<node>& pat) {
//	if (doc.empty()) {
//		cout << "E006" << endl;
//		return;
//	}
//	pat[doc.front() - 1].flag = 2;
//	fee.push_back(doc.front()); doc.pop();
//	cout << "E005" << endl;
//}
//
//void pay(string op, vector<int>& fee, vector<node>& pat) {
//	int ID = atoi(op.c_str());
//	if (find(fee.begin(), fee.end(), ID) == fee.end()){
//		cout << "E014" << endl;
//		return;
//	}
//	if (pat[ID - 1].card >= 50) pat[ID - 1].card -= 50;
//	else if (pat[ID - 1].cash >= 50) pat[ID - 1].cash -= 50;
//	else {
//		cout << "E008" << endl;
//		pat[ID - 1].flag = 0;
//		return;
//	}
//	pat[ID - 1].flag = 0;
//	cout << "E007" << endl;
//}
//
//void query(string op, vector<node>& pat, queue<int> doc) {
//	if (op[0] == '0') {
//		if (doc.empty()) cout << "E013:dct 0" << endl;
//		else {
//			cout << "E013:dct";
//			queue<int> tmp(doc);
//			while (!tmp.empty()) {
//				cout << " pat0" << tmp.front(); tmp.pop();
//			}
//			cout << endl;
//		}
//	}
//	else {
//		int ID = atoi(op.substr(op.size()-1).c_str());
//		if (pat[ID - 1].flag == 0) 
//			cout << "E012:pat0" << ID << " 0 " << pat[ID - 1].card << "," << pat[ID - 1].cash << endl;
//		else if (pat[ID - 1].flag == 1) {
//			int pos = 1;
//			queue<int> tmp(doc);
//			while (!tmp.empty() && tmp.front() != ID) {
//				tmp.pop();
//				++pos;
//			}
//			cout << "E012:pat0" << ID << " 1 " << pos << "," << pat[ID - 1].card << "," << pat[ID - 1].cash << endl;
//		}
//		else 
//			cout << "E012:pat0" << ID << " 2 " << pat[ID - 1].card << "," << pat[ID - 1].cash << endl;
//	}
//}
//
//int main() {
//	string cmd;
//	vector<node> pat;
//	queue<int> doc;
//	vector<int> fee;
//	while (getline(cin, cmd)) {
//		vector<string> op = procmd(cmd);
//		for (auto each : op) {
//			if (each == "i") init(pat, doc, fee);
//			else if (each[0] == 'r') reg(each.substr(each.size() - 1), pat, doc);
//			else if (each[0] == 'd') diag(doc, fee, pat);
//			else if (each[0] == 'p') pay(each.substr(each.size() - 1), fee, pat);
//			else if (each[0] == 'q') query(each.substr(3), pat, doc);
//		}
//	}
//	return 0;
//}