//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool solve(vector<int> data, int itor, double avl) {
//	if (itor == 4) {
//		if (avl == 24) return true;
//		else return false;
//	}
//
//	return solve(data, itor + 1, avl + data[itor])
//		|| solve(data, itor + 1, avl - data[itor])
//		|| solve(data, itor + 1, avl * data[itor])
//		|| solve(data, itor + 1, avl / data[itor]);
//}
//
//int main() {
//	vector<int> data(4);
//	while (cin >> data[0] >> data[1] >> data[2] >> data[3]) {
//		sort(data.begin(), data.end());
//		bool flag = false;
//		do {
//			if (solve(data, 1, data[0])) {
//				flag = true; break;
//			}
//		} while (next_permutation(data.begin(), data.end()));
//		if (flag) cout << "true" << endl;
//		else cout << "false" << endl;
//	}
//	return 0;
//}