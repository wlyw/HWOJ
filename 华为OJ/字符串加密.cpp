//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool IsVal(char c, string& key) {
//	if (key.find(c) == string::npos) return false;
//	return true;
//}
//
//string PrePro(string& key) {
//	string res;
//	res += key[0];
//	for (auto each : key) {
//		if (!IsVal(each, res)) {
//			res += each;
//		}
//	}
//	return res;
//}
//
//string Enc(string key, string enc) {
//	transform(key.begin(), key.end(), key.begin(), ::tolower);
//
//	vector<char> data(26);
//	int itor = 0;
//	for (auto each : key) {
//		data[itor++] = each;
//	}
//	for (int i = 0; itor < 26; ++itor) {
//		for (; i < 26; ++i) {
//			if (!IsVal('a' + i, key)) {
//				data[itor] = 'a' + i;
//				++i;
//				break;
//			}
//		}
//	}
//
//	string res;
//	for (auto each : enc) {
//		if (each >= 'A' && each <= 'Z') {
//			res += (data[each - 'A'] - 'a' + 'A');
//		}
//		else if (each >= 'a' && each <= 'z') {
//			res += (data[each - 'a']);
//		}
//		else res += each;
//	}
//	return res;
//}
//
//int main() {
//	string key, enc;
//	getline(cin, key);
//	getline(cin, enc);
//	if (key.empty()) cout << enc << endl;
//	else cout << Enc(PrePro(key), enc) << endl;
//	return 0;
//}