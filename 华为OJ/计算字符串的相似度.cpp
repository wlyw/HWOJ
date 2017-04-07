//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int mini(int a, int b, int c) {
//	return min(a, min(b, c));
//}
//
//int calStringDistance(string& A, string& B) {
//	vector<vector<int>> dp(A.size() + 1, vector<int>(B.size() + 1, 0));
//	for (int i = 1; i <= A.size(); ++i) dp[i][0] = dp[i - 1][0] + 1;
//	for (int i = 1; i <= B.size(); ++i)dp[0][i] = dp[0][i - 1] + 1;
//
//	for (int i = 1; i <= A.size(); ++i) {
//		for (int j = 1; j <= B.size(); ++j) {
//			if (A[i - 1] == B[j - 1]) dp[i][j] = dp[i - 1][j - 1];
//			else dp[i][j] = mini(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]) + 1;
//		}
//	}
//	return dp[A.size()][B.size()];
//}
//
//int main() {
//	string A, B;
//	while(cin >> A >> B)
//		cout << "1/" << calStringDistance(A, B) + 1 << endl;
//	return 0;
//}