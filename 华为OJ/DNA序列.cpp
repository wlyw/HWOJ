//#include<iostream>
//#include<string>
//using namespace std;
//
//string solve(string& s, int& num) {
//	int start = 0;
//	double rate = 0;
//	for (int i = 0; i < s.size(); ++i) {
//		int count = 0;
//		for (int j = i; j < i + num && j < s.size(); ++j){
//			if (s[j] == 'G' || s[j] == 'C') ++count;
//		}
//		if (double(count) / num*1.0 > rate) {
//			rate = (double)count / num*1.0;
//			start = i;
//		}
//	}
//
//	string res(s.begin() + start, s.begin() + start + num);
//	return res;
//}
//
//int main() {
//	string s;
//	int num;
//	cin >> s >> num;
//	cout << solve(s, num) << endl;
//	return 0;
//}