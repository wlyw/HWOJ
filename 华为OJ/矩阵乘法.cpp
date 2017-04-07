//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	int a, b, c;
//	while (cin >> a >> b >> c) {
//		vector<vector<int>> rax1(a, vector<int>(b, 0));
//		vector<vector<int>> rax2(b, vector<int>(c, 0));
//		vector<vector<int>> res(a, vector<int>(c, 0));
//
//		for (int i = 0; i < a; ++i) {
//			for (int j = 0; j < b; ++j) {
//				cin >> rax1[i][j];
//			}
//		}
//		for (int i = 0; i < b; ++i) {
//			for (int j = 0; j < c; ++j) {
//				cin >> rax2[i][j];
//			}
//		}
//
//		for (int i = 0; i < a; ++i) {
//			for (int j = 0; j < c; ++j) {
//				for (int k = 0; k < b; ++k)
//					res[i][j] += rax1[i][k] * rax2[k][j];
//			}
//		}
//
//		for (int i = 0; i < a; ++i) {
//			for (int j = 0; j < c - 1; ++j) {
//				cout << res[i][j] << " ";
//			}
//			cout << res[i][c - 1] << endl;
//		}
//	}
//	return 0;
//}