//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//bool solve(string a, string b) {
//	if (a.empty() && b.empty()) {
//		return true;
//	}
//	if (b.empty()) {
//		for (auto each : a)
//			if (each != '*') return false;
//		return true;
//	}
//
//	if (a[0] == b[0] || a[0] == '?') {
//		return solve(a.substr(1), b.substr(1));
//	}
//	else if (a[0] == '*') {
//		return solve(a.substr(1), b) || solve(a.substr(1), b.substr(1)) || solve(a, b.substr(1));
//	}
//	
//	return false;
//}
//
//int main() {
//	string a, b;
//	while (cin >> a >> b) {
//		if (solve(a, b)) cout << "true" << endl;
//		else cout << "false" << endl;
//	}
//	return 0;
//}