//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//string AddLongInteger(string a, string b) {
//	if (a.size() < b.size()) swap(a, b);
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//
//	int flag = 0;
//	for (int i = 0; i < a.size(); ++i) {
//		int mid;
//		if(i<b.size())
//			mid = flag + a[i] + b[i] - 2 * '0';
//		else
//			mid = flag + a[i] - '0';
//		flag = mid / 10;
//		a[i] = mid % 10 + '0';
//	}
//	if (flag != 0)
//		a.push_back(flag + '0');
//	reverse(a.begin(), a.end());
//	return a;
//}
//
//int main() {
//	string a, b;
//	while (cin >> a >> b) {
//		cout << AddLongInteger(a, b) << endl;
//	}
//	return 0;
//}