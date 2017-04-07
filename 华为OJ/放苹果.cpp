//#include<iostream>
//#include<vector>
//#include<set>
//#include<algorithm>
//using namespace std;
//
//void dps(set<vector<int>>& res,vector<int> now,int apple,int plant) {
//	if (apple == 0) {
//		sort(now.begin(), now.end());
//		res.insert(now);
//		return;
//	}
//	if (plant == 0) return;
//	for (int i = 0; i <= apple; ++i) {
//		now[plant - 1] = i;
//		dps(res, now, apple - i, plant - 1);
//	}
//}
//
//int main() {
//	int n, m;
//	while (cin >> n >> m) {
//		set<vector<int>> res;
//		vector<int> now(m, 0);
//		dps(res, now, n, m);
//		cout << res.size() << endl;
//	}
//	return 0;
//}