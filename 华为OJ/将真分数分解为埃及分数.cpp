///*
//设a、b为互质正整数，a<b 分数a/b 可用以下的步骤分解成若干个单位分数之和：
//步骤一：用b除以a，得商数q及余数r（r=b-a*q）
//步骤二：a/b = 1/(q+1) + (a-r)/b(q+1）
//步骤三：对于(a-r)/b(q+1),重复一和二，直到分解完毕
//*/
//#include<iostream>
//using namespace std;
//
//void solve(int a, int b) {
//	if (a == 3 && b % 2 == 0) {
//		cout << "1/" << b / 2 << "+1/" << b << endl;
//		return;
//	}
//	int q = b / a;
//	int r = b % a;
//	if (r == 0) {
//		cout << "1/" << q;
//		cout << endl;
//		return;
//	}
//	cout << "1/" << q + 1 << "+";
//	solve(a - r, b*(q + 1));
//}
//
//int main() {
//	int a, b;
//	char ch;
//	while (cin >> a >> ch >> b) {
//		solve(a, b);
//	}
//	return 0;
//}