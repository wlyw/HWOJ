//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<vector<int>> data(n, vector<int>(n, 0));
//		pair<int, int> pos(1, 0);
//		data[0][0] = 1;
//		int rem = 0;
//		for (int i = 2; i <= n*(n + 1) / 2; ++i) {
//			data[pos.first][pos.second] = i;
//			if (pos.second == 0) {
//				rem = pos.first;
//				--pos.first;
//				++pos.second;
//			}
//			else if (pos.first == 0) {
//				pos.first = rem + 1;
//				pos.second = 0;
//			}
//			else {
//				--pos.first;
//				++pos.second;
//			}
//		}
//
//		for (int i = 0; i < n; ++i) {
//			for (int j = 0; j < n - i - 1; ++j) {
//				cout << data[i][j] << " ";
//			}
//			cout << data[i][n - i - 1] << endl;
//		}
//	}
//	return 0;
//}