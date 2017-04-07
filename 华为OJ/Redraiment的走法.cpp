//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int solve(int N, vector<int>& data) {
//	vector<int> dp(N, 1);
//	int res = 0;
//	for (int i = 1; i < N; ++i) {
//		for (int j = 0; j < i; ++j) {
//			if (data[j] < data[i]) dp[i] = max(dp[j] + 1, dp[i]);
//		}
//		res = max(res, dp[i]);
//	}
//	return res;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	vector<int> data(N, 0);
//	for (int i = 0; i < N; ++i) cin >> data[i];
//	cout << solve(N, data) << endl;
//	return 0;
//}