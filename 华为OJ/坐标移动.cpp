//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//	string s;
//	getline(cin, s);
//		//A表示向左移动，D表示向右移动，W表示向上移动，S表示向下移动。
//		pair<int, int> pos(0, 0);
//		for (int i = 0; i < s.size(); ++i) {
//			if (isalpha(s[i])) {
//				char dir = s[i++];
//
//				string tmp;
//				while (i < s.size() && s[i] != ';') {
//						tmp += s[i++];
//				}
//
//				if (tmp.empty() || tmp.size()>2) continue;
//				if (!isdigit(tmp[0]) || tmp.size()==2&& !isdigit(tmp[1])) continue;
//				int dis = atoi(tmp.c_str());
//
//				switch (dir) {
//				case 'A':
//					pos.first -= dis; break;
//				case 'D':
//					pos.first += dis; break;
//				case 'W':
//					pos.second += dis; break;
//				case 'S':
//					pos.second -= dis; break;
//				}
//			}
//		}
//		cout << pos.first << "," << pos.second << endl;
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//void solve(string s, pair<int, int>& pos) {
//	if (s.size() < 2 || s.size() > 3) return;
//	if (!isdigit(s[1])) return;
//	if (s.size() == 3 && !isdigit(s[2])) return;
//
//	switch (s[0]) {
//	case 'A':
//		pos.first -= atoi(s.substr(1,s.size()-1).c_str()); break;
//	case 'D':
//		pos.first += atoi(s.substr(1, s.size() - 1).c_str()); break;
//	case 'W':
//		pos.second += atoi(s.substr(1, s.size() - 1).c_str()); break;
//	case 'S':
//		pos.second -= atoi(s.substr(1, s.size() - 1).c_str()); break;
//	}
//}
//
//int main() {
//	string s;
//	getline(cin, s);
//
//	pair<int, int> pos(0, 0);
//	for (int i = 0; i < s.size(); ++i) {
//		string tmp;
//		while (i < s.size() && s[i] != ';'){
//			tmp += s[i]; ++i;
//		}
//		solve(tmp, pos);
//	}
//	cout << pos.first << "," << pos.second << endl;
//	return 0;
//}