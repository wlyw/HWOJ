//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
////命令预处理
//vector<string> Pre(string s, char ch) {
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
////初始化，6种商品信息，4种零钱信息
//void OpReset(vector<pair<int, int>>& machine, vector<pair<int, int>>& moneybox, string op) {
//	vector<string> op_data = Pre(op, ' ');
//	vector<string> things = Pre(op_data[1], '-');
//	vector<string> money = Pre(op_data[2], '-');
//	
//	//2-3-4-5-8-6
//	int price[] = { 2,3,4,5,8,6 };
//	for (int i = 0; i < 6; ++i) {
//		machine.push_back(make_pair(price[i], atoi(things[i].c_str())));
//	}
//
//	//10-5-2-1
//	int mon[] = { 10,5,2,1 };
//	for (int i = 0; i < 4; ++i) {
//		moneybox.push_back(make_pair(mon[i], atoi(money[3-i].c_str())));
//	}
//
//	cout << "S001:Initialization is successful" << endl;
//}
//
//void OpPay(vector<pair<int, int>>& machine, vector<pair<int, int>>& moneybox, string op, int& res){
//	int money = atoi(op.c_str());
//	if (money != 1 && money != 2 && money != 5 && money != 10) {
//		cout << "E002:Denomination error" << endl;
//		return;
//	}
//	if (money != 1 && money != 2 && moneybox[3].second + moneybox[2].second * 2 < money) {
//		cout << "E003:Change is not enough, pay fail" << endl;
//		return;
//	}
//	if (money + res > 10) {
//		cout << "E004:Pay the balance is beyond the scope biggest" << endl;
//		return;
//	}
//
//	int cnt = 0;
//	for (int i = 0; i < machine.size(); ++i) {
//		cnt += machine[i].second;
//	}
//	if (cnt == 0) {
//		cout << "E005:All the goods sold out" << endl;
//		return;
//	}
//
//	switch (money) {
//	case 10: 
//		moneybox[0].second++; break;
//	case 5:
//		moneybox[1].second++; break;
//	case 2:
//		moneybox[2].second++; break;
//	case 1:
//		moneybox[3].second++; break;
//	}
//	res += money;
//	cout << "S002:Pay success,balance=" << res << endl;
//}
//
//void OpBuy(vector<pair<int, int>>& machine, vector<pair<int, int>>& moneybox, string op, int& res) {
//	int buy = atoi(op.substr(1).c_str());
//	if (!(op[0] == 'A' && buy <= 6 && buy >= 1)) {
//		cout << "E006:Goods does not exist" << endl;
//		return;
//	}
//	if (machine[buy - 1].second == 0) {
//		cout << "E007:The goods sold out" << endl;
//		return;
//	}
//	if (res < machine[buy - 1].first) {
//		cout << "E008:Lack of balance" << endl;
//		return;
//	}
//
//	res -= machine[buy - 1].first;
//	cout << "S003:Buy success,balance=" << res << endl;
//}
//
//bool dfs(vector<int>& res, vector<pair<int, int>> moneybox, int itor, int goal) {
//	if (itor > 3) {
//		if (res[1] * 5 + res[2] * 2 + res[3] == goal) return true;
//		return false;
//	}
//	if (moneybox[itor].second == 0)
//		return dfs(res, moneybox, itor + 1, goal);
//
//	for (int i = moneybox[itor].second; i >= 0; --i) {
//		res[itor] += i;
//		moneybox[itor].second -= i;
//		if (dfs(res, moneybox, itor + 1, goal)) return true;
//		moneybox[itor].second += i;
//		res[itor] -= i;
//	}
//	return false;
//}
//
//void OpChange(vector<pair<int, int>>& machine, vector<pair<int, int>>& moneybox, string op, int& res) {
//	if (res == 0) {
//		cout << "E009:Work failure" << endl;
//		return;
//	}
//	int ten = 0, five = 0, two = 0, one = 0;
//	if (res == 10) {
//		ten = 1; moneybox[0].second--; res = 0;
//	}
//	else {
//		vector<int> re(moneybox.size(),0);
//		for (int i = res; i >= 0; --i) {
//			if (dfs(re, moneybox, 1, i)) break;
//		}
//		one = re[3]; two = re[2]; five = re[1];
//		moneybox[3].second -= one;
//		moneybox[2].second -= two;
//		moneybox[1].second -= five;
//	}
//
//	cout << "1 yuan coin number=" << one << endl;
//	cout << "2 yuan coin number=" << two << endl;
//	cout << "5 yuan coin number=" << five << endl;
//	cout << "10 yuan coin number=" << ten << endl;
//	res = 0;
//}
//
//void OpQuery(vector<pair<int, int>>& machine, vector<pair<int, int>>& moneybox, string op) {
//	if (op == "0") {
//		for (int i = 0; i < machine.size(); ++i) {
//			cout << "A" << i + 1 << " " << machine[i].first << " " << machine[i].second << endl;
//		}
//	}
//	else if (op == "1") {
//		cout << "1 yuan coin number=" << moneybox[3].second << endl;
//		cout << "2 yuan coin number=" << moneybox[2].second << endl;
//		cout << "5 yuan coin number=" << moneybox[1].second << endl;
//		cout << "10 yuan coin number=" << moneybox[0].second << endl;
//	}
//	else {
//		cout << "E010:Parameter error" << endl;
//	}
//}
//
////OpReset，OpPay，OpBuy，OpChange，OpQuery
//int main() {
//	string com;
//	while (getline(cin, com)) {
//		vector<string> op = Pre(com, ';');
//		vector<pair<int, int>> machine;
//		vector<pair<int, int>> moneybox;
//		OpReset(machine, moneybox, op[0]);
//		int res = 0;
//
//		//执行命令
//		for (int i = 1; i < op.size(); ++i) {
//			vector<string> op_data = Pre(op[i], ' ');
//			if (op_data.size() == 1) {
//				if (op_data[0] == "c") OpChange(machine, moneybox, op_data[0], res);
//			}
//			//p-b-c-q
//			if (op_data[0] == "p") OpPay(machine, moneybox, op_data[1], res);
//			else if (op_data[0] == "b") OpBuy(machine, moneybox, op_data[1], res);
//			else if (op_data[0] == "q") OpQuery(machine, moneybox, op_data[1]);
//		}
//	}
//	return 0;
//}