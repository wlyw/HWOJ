//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool IsVal(vector<vector<int>>& data, int i,int j,int val) {
//	for (int t = 0; t < 9; ++t) {
//		if (val == data[i][t] || val == data[t][j]) return false;
//	}
//	int lr = i / 3 * 3, lc = j / 3 * 3;
//	for (int t = 0; t < 3; ++t) {
//		for (int k = 0; k < 3; ++k) {
//			if (val == data[lr + t][lc + k]) return false;
//		}
//	}
//	return true;
//}
//
//bool dfs(vector<vector<int>>& data, vector<pair<int,int>>& pos, int itor) {
//	if (itor >= pos.size()) return true;
//	for (int i = 1; i <= 9; ++i) {
//		if (IsVal(data, pos[itor].first, pos[itor].second, i)) {
//			data[pos[itor].first][pos[itor].second] = i;
//			if (dfs(data, pos, itor + 1)) return true;
//			data[pos[itor].first][pos[itor].second] = 0;
//		}
//	}
//	return false;
//}
//
//int main() {
//	vector<vector<int>> data(9, vector<int>(9, 0));
//	vector<pair<int, int>> pos;
//	for (int i = 0; i < 9; ++i) {
//		for (int j = 0; j < 9; ++j) {
//			cin >> data[i][j];
//			if (data[i][j] == 0)
//				pos.push_back(make_pair(i, j));
//		}
//	}
//	if (!dfs(data, pos, 0)) cout << "Error" << endl;
//	else {
//		for (int i = 0; i < 9; ++i) {
//			for (int j = 0; j < 8; ++j) {
//				cout << data[i][j] << " ";
//			}
//			cout << data[i][8] << endl;
//		}
//	}
//	return 0;
//}