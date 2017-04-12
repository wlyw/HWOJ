////忘了标题是啥。。。
////题目大意就是合法的字符串首字母要大写，其他是空格或小写。其他都非法
//#include<iostream>
//#include<string>
//using namespace std;
//
//bool solve(string s) {
//	if (s.empty()) return false;
//	if (!isupper(s[0])) return false;
//	for (int i = 1; i < s.size(); ++i) {
//		if (!islower(s[i]) && s[i] != ' ') return false;
//	}
//	return true;
//}
//
//int main() {
//	string s;
//	while (getline(cin,s)) {
//		if (solve(s)) cout << "true" << endl;
//		else cout << "false" << endl;
//	}
//	return 0;
//}