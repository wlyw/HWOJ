//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//string combine(const string& a, const string& b) {
//	string mid(a + b);
//	string odd, even;
//	for (int i = 0; i < mid.size(); ++i) {
//		if (i == 0 || i % 2 == 0) {
//			even += mid[i];
//		}
//		else odd += mid[i];
//	}
//	sort(odd.begin(), odd.end());
//	sort(even.begin(), even.end());
//
//	mid.clear();
//	for (int i = 0; i < even.size(); ++i) {
//		mid.push_back(even[i]);
//		if(i<odd.size())
//			mid.push_back(odd[i]);
//	}
//	return mid;
//}
//
//string trans(const string& mid) {
//	string db("084C2A6E195D3B7F");
//	string res;
//	for (auto each : mid) {
//		if (isdigit(each) || (tolower(each) <= 'f' && tolower(each) >= 'a')) {
//			res.push_back(isdigit(each) ? db[each - '0'] : db[tolower(each) - 'a' + 10]);
//		}
//		else res.push_back(each);
//	}
//	return res;
//}
//
//int main() {
//	string a, b;
//	while (cin >> a >> b) {
//		cout << trans(combine(a, b)) << endl;
//	}
//	return 0;
//}