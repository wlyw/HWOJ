///*
//��a��bΪ������������a<b ����a/b �������µĲ���ֽ�����ɸ���λ����֮�ͣ�
//����һ����b����a��������q������r��r=b-a*q��
//�������a/b = 1/(q+1) + (a-r)/b(q+1��
//������������(a-r)/b(q+1),�ظ�һ�Ͷ���ֱ���ֽ����
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