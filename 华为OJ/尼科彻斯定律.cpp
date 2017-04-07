//#include<iostream>
//#include<vector>
//using namespace std;
//
//void solve(int num, vector<int>& data) {
//	if (num == 1) data.push_back(1);
//	else {
//		for (int l = num*num - num + 1, i = 1; i <= num; ++i, l += 2) {
//			data.push_back(l);
//		}
//	}
//}
//
//int main() {
//	int N;
//	while (cin >> N) {
//		vector<int> data;
//		solve(N, data);
//		for (int i = 0; i < N - 1; ++i) {
//			cout << data[i] << "+";
//		}
//		cout << data[N - 1] << endl;
//	}
//	return 0;
//}