//#include<iostream>
//#include<string>
//#include<stack>
//#include<vector>
//using namespace std;
//
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<vector<int>> data(n, vector<int>(2, 0));
//		for (int i = 0; i < n; ++i) {
//			cin >> data[i][0] >> data[i][1];
//		}
//		string order;
//		cin >> order;
//		stack<pair<int, int>> sp; int itor = 0;
//		int res = 0;
//		for (auto each : order) {
//			if (isalpha(each)) {
//				//sp.push(make_pair(data[itor][0], data[itor][1]));
//				sp.push(make_pair(data[each-'A'][0], data[each-'A'][1]));
//				++itor;
//			}
//			else if (each == ')') {
//				if (sp.size() <= 1) continue;
//				stack<pair<int, int>> tmp;
//				while (sp.size() != 0 && sp.top().first != 0) {
//					tmp.push(sp.top()); sp.pop();
//				}
//				if (tmp.size() == 1) {
//					sp.push(tmp.top()); tmp.pop();
//					continue;
//				}
//				if(sp.size() != 0 ) sp.pop();
//				auto l = tmp.top(); tmp.pop();
//				while (!tmp.empty()) {
//					auto r = tmp.top(); tmp.pop();
//					res += l.first * l.second * r.second;
//					l.second = r.second;
//				}
//				sp.push(l);
//			}
//			else sp.push(make_pair(0, 0));
//		}
//		/*if (res == 0) {
//			for (int i = 1; i < data.size(); ++i) {
//				res += data[0][0] * data[i][0] * data[i][1];
//			}
//		}*/
//		cout << res << endl;
//	}
//	return 0;
//}