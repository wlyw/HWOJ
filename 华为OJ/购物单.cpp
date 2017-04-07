//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int n, m;
//	while (cin >> n >> m) {
//		int a, b, c;
//		vector<vector<int>> weight(m + 1, vector<int>(3, 0));
//		vector<vector<int>> value(m + 1, vector<int>(3, 0));
//		vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
//
//		for (int i = 1; i <= m; ++i) {
//			cin >> a >> b >> c;
//			if (c == 0) {
//				weight[i][0] = a;
//				value[i][0] = a*b;
//			}
//			else if (weight[c][1] == 0) {
//				weight[c][1] = a;
//				value[c][1] = a*b;
//			}
//			else {
//				weight[c][2] = a;
//				value[c][2] = a*b;
//			}
//		}
//
//		for (int i = 1; i <= m; ++i) {
//			for (int j = 1; j <= n; ++j) {
//				if (weight[i][0] <= j) {
//					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i][0]] + value[i][0]);
//				}
//				if (weight[i][0] + weight[i][1] <= j) {
//					int tmp = max(dp[i - 1][j], dp[i - 1][j - weight[i][0] - weight[i][1]] + value[i][0] + value[i][1]);
//					dp[i][j] = max(dp[i][j], tmp);
//				}
//				if (weight[i][0] + weight[i][2] <= j) {
//					int tmp = max(dp[i - 1][j], dp[i - 1][j - weight[i][0] - weight[i][2]] + value[i][0] + value[i][2]);
//					dp[i][j] = max(dp[i][j], tmp);
//				}
//				if (weight[i][0] + weight[i][1] + weight[i][2] <= j) {
//					int tmp = max(dp[i - 1][j], dp[i - 1][j - weight[i][0] - weight[i][1] - weight[i][2]] + value[i][0] + value[i][1] + value[i][2]);
//					dp[i][j] = max(dp[i][j], tmp);
//				}
//			}
//		}
//		cout << dp[m][n] << endl;
//	}
//	return 0;
//}