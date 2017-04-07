//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//
//void bfs(set<int>& res,vector<pair<int,int>>& data,int itor) {
//	if (itor >= data.size()) return;
//
//	vector<int> tmp(res.begin(), res.end());
//	res.clear();
//	for (int i = 0; i < tmp.size(); ++i) {
//		for (int j = 0; j <= data[itor].second; ++j) {
//			res.insert(tmp[i] + data[itor].first*j);
//		}
//	}
//
//	bfs(res, data, itor + 1);
//}
//
//int main() {
//	int num;
//	while (cin >> num) {
//		vector<pair<int, int>> data(num);
//		for (int i = 0; i < num; ++i) {
//			cin >> data[i].first;
//		}
//		for (int i = 0; i < num; ++i) {
//			cin >> data[i].second;
//		}
//		set<int> res; res.insert(0);
//		bfs(res, data, 0);
//		cout << res.size() << endl;
//	}
//	return 0;
//}