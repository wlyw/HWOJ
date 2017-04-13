////Title:一元多项式化简
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
//vector<pair<int, int>> pro(string s, char& ch) {
//	vector<pair<int, int>> res;
//	string tmp;
//	int i = s[0] == '-' ? 1 : 0;
//	bool op = !(s[0] == '-');
//	for (; i < s.size(); ++i) {
//		if (s[i] == '-' || s[i] == '+') {
//			int pos = tmp.find('^');
//			int fir = atoi(tmp.substr(0, pos - 1).c_str());
//			int sec = atoi(tmp.substr(pos + 1).c_str());
//			fir = op ? fir : fir*-1;
//			res.push_back(make_pair(fir, sec));
//			op = !(s[i] == '-');
//			tmp.clear();
//		}
//		else tmp += s[i];
//	}
//	int pos = tmp.find('^');
//	ch = tmp[pos - 1];
//	int fir = atoi(tmp.substr(0, pos - 1).c_str());
//	int sec = atoi(tmp.substr(pos + 1).c_str());
//	fir = op ? fir : fir*-1;
//	res.push_back(make_pair(fir, sec));
//	return res;
//}
//
//string cal(vector<pair<int, int>> data, char ch) {
//	string res;
//	sort(data.begin(), data.end(), cmp);
//	for (int i = 0; i < data.size(); ) {
//		int j = i + 1;
//		for (; j < data.size(); ++j) {
//			if (data[j].second == data[i].second)
//				data[i].first += data[j].first;
//			else break;
//		}
//		if (data[i].first != 0) {
//			if (data[i].first > 0) res += "+";
//			res += to_string(data[i].first);
//			res += ch; res += '^';
//			res += to_string(data[i].second);
//		}
//		i = j;
//	}
//	if (res.empty()) return res;
//	if (res[0] == '+') res = res.substr(1);
//	return res;
//}
//
//int main() {
//	string s;
//	while (getline(cin, s)) {
//		char ch;
//		vector<pair<int, int>> data = pro(s, ch);
//		cout << cal(data, ch) << endl;
//	}
//	return 0;
//}