////Title:表示数字，目测第一关都是从训练场的题库中随机抽的
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string s;
//	while (cin >> s) {
//		string res;
//		for (int i = 0; i < s.size(); ) {
//			if (isdigit(s[i])) {
//				res += '*';
//				res += s[i++];
//				while (i < s.size() && isdigit(s[i])) {
//					res += s[i++];
//				}
//				res += '*';
//			}
//			else res += s[i++];
//		}
//		cout << res << endl;
//	}
//	return 0;
//}