////Title:递推公式
////偷懒直接用以前程序中字符串相加的代码做的，时间复杂度比较高，n比较大时就不行了
////不过题目测试用例比较水，下面代码能过
//#include<iostream>
//#include<string>
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
//	//A[N+1] = A[N] * 2 + 2
//	unsigned int n;
//	while (cin >> n) {
//		string res = "2";
//		for (unsigned int i = 2; i <= n; ++i) {
//			res = AddLongInteger(AddLongInteger(res, res), "2");
//		}
//		cout << res << endl;
//	}
//	return 0;
//}