//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int getCommonStrLength(string& fir, string& sec) {
//	vector<vector<int>> dp(fir.size() + 1, vector<int>(sec.size() + 1, 0));
//	int res = 0;
//	for (int i = 1; i <= fir.size(); ++i) {
//		for (int j = 1; j <= sec.size(); ++j) {
//			if (tolower(fir[i - 1]) == tolower(sec[j - 1])) {
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//				res = max(res, dp[i][j]);
//			}
//		}
//	}
//	return res;
//}
//
//int main() {
//	string fir;
//	string sec;
//	cin >> fir >> sec;
//	cout << getCommonStrLength(fir, sec) << endl;
//	return 0;
//}