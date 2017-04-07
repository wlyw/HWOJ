//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int find(vector<int>& map, int num) {
//	return map[num] == num ? num : find(map, map[num]);
//}
//
////并查集判断连通图+欧拉路径
//bool one(int n) {
//	vector<pair<int, int>> data;
//	int all = 0;
//	for (int i = 0; i < n; ++i) {
//		int a, b; cin >> a >> b;
//		all = max(all, max(a, b));
//		data.push_back(make_pair(a, b));
//	}
//
//	vector<int> rec(all + 1, 0);
//	vector<int> map(all + 1, 0);
//	for (int i = 1; i <= all; ++i) {
//		map[i] = i;
//	}
//	for (int i = 0; i < n; ++i) {
//		++rec[data[i].first]; ++rec[data[i].second];
//		map[find(map, data[i].first)] = map[find(map, data[i].second)];
//	}
//	
//	int cnt = 0;
//	int oula = 0;
//	for (int i = 1; i <= all; ++i) {
//		if (map[i] == i && rec[i] > 0) ++cnt;
//		if (rec[i] % 2 != 0) ++oula;
//	}
//	if (cnt > 1) return false;
//
//	if (oula == 0 || oula == 2) return true;
//	else return false;
//}
//
//int main() {
//	int n;
//	while (cin >> n) {
//		if (one(n)) cout << "true" << endl;
//		else cout << "false" << endl;
//	}
//	return 0;
//}