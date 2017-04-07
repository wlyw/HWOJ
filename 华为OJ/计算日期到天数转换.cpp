//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//bool IsRun(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)return true;
//	return false;
//}
//
//int main() {
//	vector<int> table = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year, month, day;
//	while (cin >> year >> month >> day) {
//		int res = 0;
//		if (IsRun(year)) ++table[1];
//		for (int i = 1; i < month; ++i) { res += table[i - 1]; }
//		res += day;
//		cout << res << endl;
//		if (IsRun(year)) --table[1];
//	}
//	return 0;
//}