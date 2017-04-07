//#include<iostream>
//#include<vector>
//#include<string>
//#include<stack>
//#include<algorithm>
//using namespace std;
//
//bool solve(vector<int>& data,vector<int>& train) {
//	stack<int> wuwu;
//	int itor = 0;
//	for (auto each : data) {
//		if (each == train[itor]) {
//			++itor;
//			while (!wuwu.empty() && wuwu.top() == train[itor]) {
//				wuwu.pop();
//				++itor;
//			}
//		}
//		else wuwu.push(each);
//	}
//	return wuwu.empty();
//}
//
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<int> data(n, 0);
//		for (int i = 0; i < n; ++i)
//			cin >> data[i];
//
//		vector<int> train(data.begin(), data.end());
//		sort(train.begin(), train.end());
//		do {
//			if (solve(data, train)) {
//				for (int i = 0; i < train.size() - 1; ++i)
//					cout << train[i] << " ";
//				cout << train[train.size() - 1] << endl;
//			}
//		} while (next_permutation(train.begin(), train.end()));
//	}
//	return 0;
//}