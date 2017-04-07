//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//
//bool cmp_0(const pair<string, int>& a, const pair<string, int>& b) {
//	return a.second > b.second;
//}
//
//bool cmp_1(const pair<string, int>& a, const pair<string, int>& b) {
//	return a.second < b.second;
//}
//
//int main() {
//	int N;
//	cin >> N;
//	int type;
//	cin >> type;
//	vector<pair<string, int>> data;
//	for (int i = 0; i < N; ++i) {
//		string name; 
//		int score;
//		cin >> name >> score;
//		data.push_back(make_pair(name, score));
//	}
//	if (type == 1) stable_sort(data.begin(), data.end(), cmp_1);
//	else stable_sort(data.begin(), data.end(), cmp_0);
//	for (auto each : data) {
//		cout << each.first << " " << each.second << endl;
//	}
//	return 0;
//}