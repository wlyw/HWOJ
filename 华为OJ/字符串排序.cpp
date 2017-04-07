//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool cmp(char a, char b) {
//	return tolower(a) < tolower(b);
//}
//
//void solve(string& s) {
//	string alpha;
//	for (auto each : s) {
//		if (isalpha(each)) alpha.push_back(each);
//	}
//	stable_sort(alpha.begin(), alpha.end(), cmp);
//
//	for (int i = 0, j = 0; i < s.size(); ++i) {
//		if (isalpha(s[i])) s[i] = alpha[j++];
//	}
//}
//
//int main() {
//	string s;
//	getline(cin, s);
//	solve(s);
//	cout << s << endl;
//	return 0;
//}