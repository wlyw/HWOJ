//#include<iostream>
//#include<string>
//#include<stack>
//#include<vector>
//using namespace std;
//
////求值逆波兰表达式
//int cul(stack<string> mid) {
//	vector<string> data;
//	while (!mid.empty()) {
//		data.insert(data.begin(), mid.top());
//		mid.pop();
//	}
//
//	for (auto each : data) {
//		if (each == "+" || each == "-" || each == "*" || each == "/") {
//			int t2 = atoi(mid.top().c_str()); mid.pop();
//			int t1 = atoi(mid.top().c_str()); mid.pop();
//			if (each == "+") mid.push(to_string(t1 + t2));
//			if (each == "-") mid.push(to_string(t1 - t2));
//			if (each == "*") mid.push(to_string(t1 * t2));
//			if (each == "/") mid.push(to_string(t1 / t2));
//		}
//		else {
//			mid.push(each);
//		}
//	}
//	return atoi(mid.top().c_str());
//}
//
////先转为逆波兰表达式
////优先级：(  +-  *\  -  )
////逆波兰表达式入栈的规则应该是：>而不是>=
//stack<string> PreDel(string& s) {
//	stack<string> ss1, ss2;
//	for (int i = 0; i<s.size(); ++i) {
//		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
//			ss1.push(string("("));
//		}
//		else if (s[i] == '+' || s[i] == '-') {
//			if (s[i] == '-') {
//				if (i == 0 || (!isalnum(s[i - 1]) && s[i - 1] != ')')) {
//					int j = i + 1;
//					for (; j < s.size(); ++j) if (!isalnum(s[j])) break;
//					ss2.push(s.substr(i, j - i));
//					i = j - 1;
//					continue;
//				}
//			}
//			//while (!ss1.empty() && ss1.top() != "(" && ss1.top() != "+" && ss1.top() != "-") {
//			while (!ss1.empty() && ss1.top() != "(") {
//				ss2.push(ss1.top());
//				ss1.pop();
//			}
//			ss1.push(string(1, s[i]));
//		}
//		else if (s[i] == '*' || s[i] == '/') {
//			ss1.push(string(1, s[i]));
//		}
//		else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
//			while (ss1.top() != "(") {
//				ss2.push(ss1.top());
//				ss1.pop();
//			}
//			ss1.pop();
//		}
//		else {
//			int j = i;
//			for (; j < s.size(); ++j) if (!isalnum(s[j])) break;
//			ss2.push(s.substr(i, j - i));
//			i = j - 1;
//		}
//	}
//	while (!ss1.empty()) {
//		ss2.push(ss1.top());
//		ss1.pop();
//	}
//	return ss2;
//}
//
//int main() {
//	string s;
//	getline(cin, s);
//	cout << cul(PreDel(s)) << endl;
//	return 0;
//}