//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool cmp_0(int a, int b) {
//	return a < b;
//}
//
//bool cmp_1(int a, int b) {
//	return a > b;
//}
//
//int main() {
//	int N;
//	cin >> N;
//
//	vector<int> data;
//	while (N--) {
//		int tmp;
//		cin >> tmp;
//		data.push_back(tmp);
//	}
//
//	int flag;
//	cin >> flag;
//
//	if (flag) sort(data.begin(), data.end(), cmp_1);
//	else sort(data.begin(), data.end(), cmp_0);
//	
//	for (int i = 0; i < data.size(); ++i) {
//		if (i == 0) cout << data[i];
//		else cout << " " << data[i];
//	}
//	cout << endl;
//	return 0;
//}