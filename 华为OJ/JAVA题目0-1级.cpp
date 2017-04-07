//#include<iostream>
//#include<vector>
//using namespace std;
//
//bool dfs(vector<int>& data, int a, int b, int itor) {
//	if (itor >= data.size()) {
//		if (a == b) return true;
//		return false;
//	}
//
//	return dfs(data, a + data[itor], b, itor + 1)
//		|| dfs(data, a, b + data[itor], itor + 1);
//}
//
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<int> data;
//		int a = 0, b = 0;
//		for (int i = 0; i < n; ++i) {
//			int tmp; cin >> tmp;
//			if (tmp % 5 == 0) a+=tmp;
//			else if (tmp % 3 == 0) b+=tmp;
//			else data.push_back(tmp);
//		}
//
//		if (dfs(data, a, b, 0)) cout << "true" << endl;
//		else cout << "false" << endl;
//	}
//	return 0;
//}