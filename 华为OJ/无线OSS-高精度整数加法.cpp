//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//string add(string a, string b) {
//	if (a.size() < b.size()) swap(a, b);
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//
//	int flag = 0;
//	for (int i = 0; i < a.size(); ++i) {
//		if (i < b.size()) {
//			int tmp = a[i] + b[i] + flag - 2 * '0';
//			a[i] = tmp % 10 + '0';
//			flag = tmp / 10;
//		}
//		else {
//			int tmp = a[i] + flag - '0';
//			a[i] = tmp % 10 + '0';
//			flag = tmp / 10;
//		}
//	}
//	if (flag != 0) a.push_back(flag + '0');
//	reverse(a.begin(), a.end());
//	return a;
//}
//
//string sub(string a, string b) {
//	if (b[0] == '-') swap(a, b);
//	if (b == a.substr(1)) return "0";
//
//	int flag;	//0-,1+
//	if (a.size() - 1 > b.size()) flag = 0;
//	else if (a.size() - 1 < b.size()) flag = 1;
//	else {
//		for (int i = 0; i < b.size(); ++i) {
//			if (a[i + 1] > b[i]) {
//				flag = 0; break;
//			}
//			else if (a[i + 1] < b[i]) {
//				flag = 1; break;
//			}
//		}
//	}
//	string fir = a.substr(1), sec = b;
//	if (flag) swap(fir, sec);
//
//	reverse(fir.begin(), fir.end());
//	reverse(sec.begin(), sec.end());
//	int op = 0;
//	for (int i = 0; i < fir.size(); ++i) {
//		if (i < sec.size()) {
//			if (fir[i] - op >= sec[i]) {
//				fir[i] = fir[i] - sec[i] - op + '0';
//				op = 0;
//			}
//			else {
//				fir[i] = 10 + fir[i] - sec[i] - op + '0';
//				op = 1;
//			}
//		}
//		else {
//			if (fir[i] - '0' >= op) {
//				fir[i] = fir[i] - op;
//				op = 0;
//			}
//			else {
//				fir[i] = 10 + fir[i] - op;
//				op = 1;
//			}
//		}
//	}
//	if (fir[fir.size() - 1] == '0') fir.erase(fir.end() - 1);
//	if (flag == 0) fir.push_back('-');
//	reverse(fir.begin(), fir.end());
//	return fir;
//}
//
//int main() {
//	string a, b;
//	while (cin >> a >> b) {
//		if (a[0] == '-' && b[0] == '-')
//			cout << "-" << add(a, b) << endl;
//		else if (a[0] != '-' && b[0] != '-')
//			cout << add(a, b) << endl;
//		else
//			cout << sub(a, b) << endl;
//	}
//	return 0;
//}