//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//vector<string> procmd(string cmd, char ch) {
//	vector<string> res;
//	string tmp;
//	for (auto each : cmd) {
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
//void init(pair<int, int>& card, vector<pair<int, int>>& car) {
//	card.first = 3000;
//	card.second = 150;
//	car.clear();
//
//	cout << "S001" << endl;
//}
//
//void select(string op, vector<pair<int, int>>& car) {
//	vector<string> par = procmd(op, '-');
//	int x = atoi(par[0].c_str());
//	int y = atoi(par[1].c_str());
//
//	if (x > 2 || x < 0 || y <= 0 || y>100) {
//		cout << "E002" << endl;
//		return;
//	}
//	if (car.size() >= 5) {
//		cout << "E003" << endl;
//		return;
//	}
//	car.push_back(make_pair(x, y));
//	cout << "S002" << endl;
//}
//
//void del(string op, vector<pair<int, int>>& car) {
//	vector<string> par = procmd(op, '-');
//	int x = atoi(par[0].c_str());
//	int y = atoi(par[1].c_str());
//
//	if (x > 2 || x < 0 || y <= 0 || y>100) {
//		cout << "E002" << endl;
//		return;
//	}
//	if (car.size() == 0) {
//		cout << "E005" << endl;
//		return;
//	}
//
//	for (auto itor = car.begin(); itor != car.end(); ++itor) {
//		if (x == itor->first && y == itor->second) {
//			car.erase(itor);
//			cout << "S003" << endl;
//			return;
//		}
//	}
//
//	cout << "E004" << endl;
//}
//
//void dfs(pair<int, int>& card, vector<int>& data, int itor, int money, map<int,int>& res) {
//	if (itor > 2) {
//		if (money >= 500) {
//			if ((int)(money*0.8) <= money - min(120, card.second))
//				res[(int)(money*0.8)] = 0;
//			else res[money - min(120, card.second)] = min(120, card.second);
//			return ;
//		}
//		res[money] = 0;
//		return ;
//	}
//
//	if (itor == 0) {
//		dfs(card, data, itor + 1, data[itor] * 10, res);
//		dfs(card, data, itor + 1, (int)(data[itor] * 10 * 0.9), res);
//		dfs(card, data, itor + 1, data[itor] * 10 - (int)(data[itor] * 10 / 100) * 18 ,res);
//	}
//	else if (itor == 1) {
//		dfs(card, data, itor + 1, money + data[itor] * 120, res);
//		dfs(card, data, itor + 1, money + data[itor] * 120 - (int)(data[itor] * 120 / 200) * 40, res);
//	}
//	else {
//		dfs(card, data, itor + 1, money + data[itor] * 30, res);
//		dfs(card, data, itor + 1, money + (int)(data[itor] * 30 * 0.5), res);
//	}
//}
//
//void pay(pair<int, int>& card, vector<pair<int, int>>& car) {
//	if (car.size() == 0) {
//		cout << "E005" << endl;
//		return;
//	}
//	vector<int> data(3, 0);
//	for (int i = 0; i < car.size(); ++i) {
//		data[car[i].first] += car[i].second;
//	}
//	map<int, int> res;
//	dfs(card, data, 0, 0, res);
//
//	auto itor = res.begin();
//	if (itor->first > card.first) {
//		cout << "E006" << endl;
//		return;
//	}
//	card.first -= itor->first;
//	card.second -= itor->second;
//	card.second += (int)(itor->first / 10);
//	cout << itor->first << endl << itor->second << endl << (int)(itor->first / 10) << endl;
//	car.clear();
//}
//
//void query(string op, pair<int, int>& card, vector<pair<int, int>>& car) {
//	if (op == "0") {
//		cout << card.first << endl << card.second << endl;
//	}
//	else if (op == "1") {
//		cout << car.size() << endl;
//		vector<int> data(3, 0);
//		for (int i = 0; i < car.size(); ++i) {
//			data[car[i].first] += car[i].second;
//		}
//		cout << data[0] << endl << data[1] << endl << data[2] << endl;
//	}
//	else cout << "E002" << endl;
//}
//
//int main() {
//	string cmd;
//	pair<int, int> card;	//购物卡
//	vector<pair<int, int>> car;		//购物车,序号-数量
//	while (getline(cin, cmd)) {
//		vector<string> opdata = procmd(cmd, ' ');
//		for (int i = 0; i < opdata.size(); ++i) {
//			if (opdata[i] == "r") init(card, car);
//			else if (opdata[i] == "o") select(opdata[++i], car);
//			else if (opdata[i] == "c") del(opdata[++i], car);
//			else if (opdata[i] == "b") pay(card, car);
//			else if (opdata[i] == "l") query(opdata[++i], card, car);
//		}
//	}
//	return 0;
//}