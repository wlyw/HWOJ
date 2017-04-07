//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int dpl(vector<int> data) {
//	vector<int> dp(data.size(), 1);
//	for(int i = 1; i < dp.size(); ++i) {
//		for(int j = 0; j < i; ++j) {
//			if(data[j] < data[i])dp[i] = max(dp[i], dp[j] + 1);
//		}
//	}
//	if(data.size() == 0)return 0;
//	return dp[dp.size() - 1];
//}
//
//int dpr(vector<int> data) {
//	reverse(data.begin(), data.end());
//	vector<int> dp(data.size(), 1);
//	for(int i = 1; i < dp.size(); ++i) {
//		for(int j = 0; j < i; ++j) {
//			if(data[j] < data[i])dp[i] = max(dp[i], dp[j] + 1);
//		}
//	}
//	if(data.size() == 0)return 0;
//	return dp[dp.size() - 1];
//}
//
//int main() {
//	int N;
//	cin >> N;
//	vector<int> data(N, 0);
//	for(int i = 0; i < N; ++i)
//	{
//		cin >> data[i];
//	}
//	int res = 0, i = 0;
//	vector<int> dp(N, 0);
//	for(auto itor = data.begin(); itor < data.end(); ++itor, ++i) {
//		vector<int> dpla(data.begin(), itor);
//		vector<int> dpra(itor, data.end());
//		dp[i] = dpl(dpla) + dpr(dpra);
//	}
//	for(i = 0; i < dp.size(); ++i) {
//		res = max(res, dp[i]);
//	}
//	cout << N - res << endl;
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//void dp(const vector<int>& data, vector<int>& vdp) {
//	for (int i = 1; i < data.size(); ++i) {
//		for (int j = 0; j < i; ++j) {
//			if (data[j] < data[i]) vdp[i] = max(vdp[i], vdp[j] + 1);
//		}
//	}
//}
//
//int main() {
//	int N;
//	while (cin >> N) {
//		vector<int> data(N);
//		while (N--) {
//			cin >> data[N];
//		}
//
//		vector<int> dpl(data.size(), 1);
//		dp(data, dpl);
//
//		vector<int> dpr(data.size(), 1);
//		reverse(data.begin(), data.end());
//		dp(data, dpr);
//		reverse(dpr.begin(), dpr.end());
//
//		int res = 0;
//		for (int i = 0; i < dpl.size(); ++i) {
//			res = max(res, dpl[i] + dpr[i] - 1);
//		}
//		res = data.size() - res;
//
//		cout << res << endl;
//	}
//	return 0;
//}