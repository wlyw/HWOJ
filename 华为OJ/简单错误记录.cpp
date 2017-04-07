//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct record {
//	string file;
//	int row;
//	int count = 1;
//};
//
//void process(string& s) {
//	if (s.find_last_of('\\') != string::npos) {
//		s = s.substr(s.find_last_of('\\') + 1);
//	}
//	if (s.size() > 16) {
//		s = s.substr(s.size() - 16);
//	}
//}
//
//int main() {
//	string s;
//	vector<record> rec;
//
//	while (cin >> s) {
//		record tmp;
//		
//		process(s);
//		tmp.file = s;
//
//		cin >> tmp.row;
//
//		int i = 0;
//		for (; i < rec.size(); ++i) {
//			if (rec[i].file == tmp.file && rec[i].row == tmp.row) {
//				++rec[i].count;
//				break;
//			}
//		}
//		if (i == rec.size()) rec.push_back(tmp);
//	}
//
//	int i = rec.size() - 8;
//	i = max(0, i);
//	for (; i < rec.size(); ++i) {
//		cout << rec[i].file << " " << rec[i].row << " " << rec[i].count << endl;
//	}
//	return 0;
//}