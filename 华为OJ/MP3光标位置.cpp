//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main() {
//	int num;
//	while (cin >> num) {
//		string s;
//		cin >> s;
//
//		int pos = 1, start = 1;
//		if (num >= 4) {
//			for (auto each : s) {
//				if (each == 'U') {
//					if (pos == 1) { start = num - 3; pos = num; }
//					else if (pos == start) { start--; pos--; }
//					else { pos--; }
//				}
//				else {
//					if (pos == num) { start = 1; pos = 1; }
//					else if (pos == start + 3) { start++; pos++; }
//					else { pos++; }
//				}
//			}
//			cout << start << " " << start + 1 << " " << start + 2 << " " << start + 3 << endl;
//		}
//		else {
//			for (auto each : s) {
//				if (each == 'U') {
//					if (pos == 1) pos = num;
//					else pos--;
//				}
//				else {
//					if (pos == num) pos = 1;
//					else pos++;
//				}
//			}
//			for (int i = 1; i < num; ++i) {
//				cout << i << " ";
//			}
//			cout << num << endl;
//		}
//		cout << pos << endl;
//	}
//	return 0;
//}