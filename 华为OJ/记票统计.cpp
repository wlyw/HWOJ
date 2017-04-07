//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main() {
//	int num;
//	while (cin >> num) {
//		vector<string> vs(num);
//		vector<int> res(num, 0);
//		for (int i = 0; i < num; ++i) {
//			cin >> vs[i];
//		}
//		int per; cin >> per;
//		int inv = 0;
//		for (int i = 0; i < per; ++i) {
//			string tmp; cin >> tmp;
//			int j = 0;
//			for (; j < num; ++j) {
//				if (tmp == vs[j]) {
//					++res[j]; break;
//				}
//			}
//			if (j == num) ++inv;
//		}
//
//		for (int i = 0; i < num; ++i) {
//			cout << vs[i] << " : " << res[i] << endl;
//		}
//		cout << "Invalid : " << inv << endl;
//	}
//	return 0;
//}