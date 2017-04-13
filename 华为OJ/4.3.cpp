////Title:≈–∂œ ‰»Î◊÷∑˚¥Æ÷–µƒ¿®∫≈ «∑Ò≈‰
//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
//bool solve(string s) {
//	stack<char> st;
//	for (auto each : s) {
//		if (each == '(' || each == '[' || each == '{')
//			st.push(each);
//		else if (each == ')') {
//			if (!st.empty() && st.top() == '(') st.pop();
//			else return false;
//		} 
//		else if (each == ']') {
//			if (!st.empty() && st.top() == '[') st.pop();
//			else return false;
//		}
//		else if (each == '}') {
//			if (!st.empty() && st.top() == '{') st.pop();
//			else return false;
//		}
//	}
//	return st.empty();
//}
//
//int main() {
//	string s;
//	while (getline(cin, s)) {
//		if (solve(s)) cout << "true" << endl;
//		else cout << "false" << endl;
//	}
//	return 0;
//}