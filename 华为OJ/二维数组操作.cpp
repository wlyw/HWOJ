//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	int r, c;
//	while (cin >> r >> c) {
//		if (r > 9 || r < 1 || c>9 || c < 1) cout << -1 << endl;
//		else cout << 0 << endl;
//
//		int sr1, sr2, sc1, sc2;
//		cin >> sr1 >> sr2 >> sc1 >> sc2;
//		if (sr1 < r&&sr1 >= 0 && sr2 < c&&sr2 >= 0 && sc1 < r&&sc1 >= 0 && sc2 < c&&sc2 >= 0)
//			cout << 0 << endl;
//		else cout << -1 << endl;
//
//		int cr;
//		cin >> cr;
//		if (cr < r&&cr >= 0) cout << 0 << endl;
//		else cout << -1 << endl;
//
//		int cc;
//		cin >> cc;
//		if (cc < c&&cc >= 0) cout << 0 << endl;
//		else cout << -1 << endl;
//
//		int qur, quc;
//		cin >> qur >> quc;
//		if (qur < r&&qur>=0 && quc < c&&quc>=0) cout << 0 << endl;
//		else cout << -1 << endl;
//	}
//	return 0;
//}