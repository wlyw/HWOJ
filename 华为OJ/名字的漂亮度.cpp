//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool cmp(const int& a, const int& b) {
//	return a < b;
//}
//
//int main() {
//	int N;
//	cin >> N;
//
//	while (N--) {
//		string name;
//		vector<int> data(26, 0);
//		cin >> name;
//
//		for (auto each : name) {
//			++data[tolower(each) - 'a'];
//		}
//		sort(data.begin(), data.end(), cmp);
//
//		int res = 0;
//		for (int i = 25; i >= 0; --i) {
//			res += data[i] * (i + 1);
//		}
//		cout << res << endl;
//	}
//	return 0;
//}