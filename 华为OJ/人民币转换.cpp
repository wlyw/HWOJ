//#include<iostream>
//#include<string>
//using namespace std;
//
//string data_lo[] = { "Ҽ","��","��","��","��","½","��","��","��" };
//string data_up[] = { "ʰ","��","Ǫ","��","��" };
//
//string trans(double num) {
//	string res;
//	bool flag = false;
//	long tr = num * 100;
//	if (tr > 100000) {
//		res += data_lo[tr / 100000 - 1] + "Ǫ";
//	}
//	else flag = true;
//
//	tr %= 100000;
//	if (tr / 10000 == 0) {
//		flag = true;
//	}
//	else if (flag) {
//		res += "��" + data_lo[tr / 10000 - 1] + "��";
//		flag = false;
//	}
//	else {
//		res += data_lo[tr / 10000 - 1] + "��";
//	}
//
//	tr %= 10000;
//	if (tr / 1000 == 0) {
//		flag = true;
//	}
//	else if (flag) {
//		if (tr / 1000 == 1)
//			res += "��ʰ";
//		else res += "��" + data_lo[tr / 1000 - 1] + "ʰ";
//		flag = false;
//	}
//	else {
//		if (tr / 1000 == 1)
//			res += "ʰ";
//		else res += data_lo[tr / 1000 - 1] + "ʰ";
//	}
//
//	tr %= 1000;
//	if (tr / 100 == 0) {
//		flag = true;
//	}
//	else if (flag) {
//		res += "��" + data_lo[tr / 100 - 1];
//		flag = false;
//	}
//	else {
//		res += data_lo[tr / 100 - 1];
//	}
//
//	return res;
//}
//
//int main() {
//	double num;
//	while (cin >> num) {
//		string res;
//		if (num == 0) {
//			cout << "�������Ԫ��" << endl;
//			continue;
//		}
//		if (num > 100000000) {
//			res += trans(num / 100000000) + "��";
//		}
//		int tmp = num / 100000000;
//		num -= tmp * 100000000;
//
//		if (num >= 10001) {
//			res += trans(num / 10000) + "��";
//		}
//		tmp = num / 10000;
//		num -= tmp * 10000;
//
//		if (num >= 1) {
//			res += trans(num) + "Ԫ";
//		}
//		if (num == 0) res += "Ԫ";
//
//		tmp = num / 1;
//		num -= tmp;
//		tmp = (num+0.005) * 100;
//		if (tmp >= 10) {
//			res += data_lo[tmp / 10 - 1] + "��";
//			if (tmp % 10 != 0) {
//				res += data_lo[tmp % 10 - 1] + "��";
//			}
//		}
//		else if (tmp > 0) {
//			res += data_lo[tmp - 1] + "��";
//		}
//		else res += "��";
//
//		cout << "�����";
//		string check = res.substr(0, sizeof("��")-1);
//		if (check == "��") {
//			cout << res.substr(sizeof("��")-1) << endl;
//		}
//		else cout << res << endl;
//	}
//	return 0;
//}