////Title:��ĳ���������´��Һ����������С���Ĳ�ֵ
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool cmp(int a, int b) {
//	return a > b;
//}
//
//int trans(vector<int> data) {
//	int res = 0;
//	for (int i = 0; i < data.size(); ++i) {
//		res = res * 10 + data[i];
//	}
//	return res;
//}
//
//int solve(int num) {
//	vector<int> data;
//	while (num != 0) {
//		data.push_back(num % 10);
//		num /= 10;
//	}
//
//	sort(data.begin(), data.end());
//	int small = trans(data);
//	sort(data.begin(), data.end(), cmp);
//	int big = trans(data);
//	return big - small;
//}
//
//int main() {
//	int num;
//	while (cin >> num) {
//		cout << solve(num) << endl;
//	}
//	return 0;
//}