//#include<iostream>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//bool IsPri(int num) {
//	for (int i = 2; i <= sqrt(num); ++i) {
//		if (num%i == 0) return false;
//	}
//	return true;
//}
//
//bool find(int even, vector<int>& odd, vector<int>& map, vector<int>& used) {
//	for (int i = 0; i < odd.size(); ++i) {
//		if (IsPri(even + odd[i]) && used[i] == -1) {
//			used[i] = 1;
//			if (map[i] == -1 || find(map[i], odd, map, used)) {
//				map[i] = even;
//				return true;
//			}
//		}
//	}
//	return false;
//}
//
//int main() {
//	int N;
//	while (cin >> N) {
//		vector<int> odd, even;
//		for (int i = 0; i < N; ++i) {
//			int tmp; cin >> tmp;
//			if (tmp % 2 == 0) even.push_back(tmp);
//			else odd.push_back(tmp);
//		}
//
//		int res = 0;
//		vector<int> map(odd.size(), -1);
//		for (auto each : even) {
//			vector<int> used(odd.size(), -1);
//			if (find(each, odd, map, used)) ++res;
//		}
//		cout << res << endl;
//	}
//	return 0;
//}