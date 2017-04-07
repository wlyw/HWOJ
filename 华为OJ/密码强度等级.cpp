//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string s;
//	while (cin >> s) {
//		int res = 0;
//		if (s.size() <= 4) res += 5;
//		else if (s.size() <= 7) res += 10;
//		else res += 25;
//
//		int up = 0, lo = 0, di = 0, sy = 0;
//		for (auto each : s) {
//			if (isdigit(each)) ++di;
//			else if (isupper(each)) ++up;
//			else if (islower(each)) ++lo;
//			else ++sy;
//		}
//		if (up > 0 && lo > 0) res += 20;
//		else if (up > 0 || lo > 0) res += 10;
//
//		if (di > 1) res += 20;
//		else if (di == 1) res += 10;
//
//		if (sy > 1) res += 25;
//		else if (sy == 1) res += 10;
//
//		if (lo > 0 && up > 0 && di > 0 && sy > 0) res += 5;
//		else if (lo + up > 0 && di > 0 && sy > 0) res += 3;
//		else if (lo + up > 0 && di > 0) res += 2;
//		
//		if (res >= 90) cout << "VERY_SECURE" << endl;
//		else if (res >= 80) cout << "SECURE" << endl;
//		else if (res >= 70) cout << "VERY_STRONG" << endl;
//		else if (res >= 60) cout << "STRONG" << endl;
//		else if (res >= 50) cout << "AVERAGE" << endl;
//		else if (res >= 25) cout << "WEAK" << endl;
//		else cout << "VERY_WEAK" << endl;
//	}
//	return 0;
//}