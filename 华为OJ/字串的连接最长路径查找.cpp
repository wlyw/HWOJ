//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	vector<string> data;
//	string s;
//	while (cin >> s) {
//		data.push_back(s);
//	}
//
//	//因为测试用例只考虑后3个字符，所以直接DP→_→
//	string res;
//	for (int i = 1; i < data.size(); ++i) {
//		string tmp;
//		for (int j = 0; j < i; ++j) {
//			if (data[i].substr(0, 3) == data[j].substr(data[j].size()-3) && data[j].size() > tmp.size())
//				tmp = data[j];
//		}
//		if (!tmp.empty()) data[i] = tmp + data[i][data[i].size()-1];
//		if (data[i].size() > res.size()) res = data[i];
//	}
//
//	cout << res << endl;
//	return 0;
//}