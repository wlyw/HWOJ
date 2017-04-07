//#include<iostream>
//#include<vector>
//#include<set>
//#include<string>
//using namespace std;
//
//int main() {
//	int n;
//	while (cin >> n) {
//		vector<unsigned int> R_data(n, 0);
//		for (int i = 0; i < n; ++i) cin >> R_data[i];
//		cin >> n;
//		set<unsigned int> I_data;
//		for (int i = 0; i < n; ++i) {
//			unsigned int tmp; cin >> tmp;
//			I_data.insert(tmp);
//		}
//
//		vector<unsigned int> res;
//		for (auto itor = I_data.begin(); itor != I_data.end(); ++itor) {
//			vector<unsigned int> tmp;
//			for (int i = 0; i < R_data.size(); ++i) {
//				if (to_string(R_data[i]).find(to_string(*itor)) != string::npos) {
//					tmp.push_back(i); tmp.push_back(R_data[i]);
//				}
//			}
//			if (tmp.size() > 0) {
//				res.push_back(*itor);
//				res.push_back(tmp.size() / 2);
//				res.insert(res.end(), tmp.begin(), tmp.end());
//			}
//		}
//		cout << res.size();
//		for (auto each : res) cout << " " << each;
//		cout << endl;
//	}
//	return 0;
//}