//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//string iQueryMaxCommString(string& fir, string& sec) {
//	if (fir.size() > sec.size()) swap(fir, sec);
//	vector<vector<int>> dp(fir.size() + 1, vector<int>(sec.size() + 1, 0));
//	int pos = -1, value = 0;
//	for (int i = 1; i <= fir.size(); ++i) {
//		for (int j = 1; j <= sec.size(); ++j) {
//			if (fir[i - 1] == sec[j - 1]) {
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//				if (dp[i][j] > value) {
//					pos = i;
//					value = dp[i][j];
//				}
//			}
//		}
//	}
//
//	if (pos == -1) return NULL;
//	string res(fir.begin() + pos - value, fir.begin() + pos);
//	return res;
//}
//
//int main() {
//	string fir;
//	string sec;
//	cin >> fir >> sec;
//	cout << iQueryMaxCommString(fir, sec) << endl;
//	return 0;
//}