//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int trans(string s) {
//	if (isdigit(s[0]))
//		return atoi(s.c_str());
//	switch (s[0])
//	{
//	case 'A': return 1;
//	case 'J': return 11;
//	case 'Q': return 12;
//	case 'K': return 13;
//	}
//	return -1;
//}
//
//int cal(int a, int b, int op) {
//	//0=+,1=-,2=*,3=/
//	switch (op) {
//	case 0:return a + b;
//	case 1:return a - b;
//	case 2:return a * b;
//	case 3:
//		if (a % b == 0) return a / b;
//		return -1;
//	}
//	return -1;
//}
//
//string optrans(int op) {
//	switch (op) {
//	case 0:return "+";
//	case 1:return "-";
//	case 2:return "*";
//	case 3:return "/";
//	}
//	return NULL;
//}
//
//string numtrans(int num) {
//	if (num == 1) return "A";
//	if (num == 11) return "J";
//	if (num == 12) return "Q";
//	if (num == 13) return "K";
//	return to_string(num);
//}
//
//bool tf(int q, int w, int e, int r) {
//	//0=+,1=-,2=*,3=/
//	if (q == 13 && w == 1 && e == 2)
//		cout << "test";
//	for (int i = 0; i < 4; ++i) {
//		int res = q;
//		res = cal(res, w, i);
//		if (res == -1) continue;
//		for (int j = 0; j < 4; ++j) {
//			int res1 = cal(res, e, j);
//			if (res1 == -1) continue;
//			for (int k = 0; k < 4; ++k) {
//				int res2 = cal(res1, r, k);
//				if (res2 == -1) continue;
//				if (res2 == 24) {
//					cout << numtrans(q) << optrans(i) << numtrans(w) << optrans(j) << numtrans(e) << optrans(k) << numtrans(r) << endl;
//					return true;
//				}
//			}
//		}
//	}
//	//cout << "NONE" << endl;
//	return false;
//}
//
//int main() {
//	string a, b, c, d;
//	while (cin >> a >> b >> c >> d) {
//		if (a.size() > 2 || b.size() > 2 || c.size() > 2 || d.size() > 2) {
//			cout << "ERROR" << endl;
//		}
//		else {
//			int q = trans(a), w = trans(b), e = trans(c), r = trans(d);
//			vector<int> data = { q,w,e,r };
//			sort(data.begin(), data.end());
//			do {
//				if (tf(data[0],data[1],data[2],data[3])) break;
//			} while (next_permutation(data.begin(), data.end()));
//			if(!next_permutation(data.begin(), data.end()))
//				cout << "NONE" << endl;
//		}
//	}
//	return 0;
//}