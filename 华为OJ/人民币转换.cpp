//#include<iostream>
//#include<string>
//using namespace std;
//
//string data_lo[] = { "Ò¼","·¡","Èş","ËÁ","Îé","Â½","Æâ","°Æ","¾Á" };
//string data_up[] = { "Ê°","°Û","Çª","Íò","ÒÚ" };
//
//string trans(double num) {
//	string res;
//	bool flag = false;
//	long tr = num * 100;
//	if (tr > 100000) {
//		res += data_lo[tr / 100000 - 1] + "Çª";
//	}
//	else flag = true;
//
//	tr %= 100000;
//	if (tr / 10000 == 0) {
//		flag = true;
//	}
//	else if (flag) {
//		res += "Áã" + data_lo[tr / 10000 - 1] + "°Û";
//		flag = false;
//	}
//	else {
//		res += data_lo[tr / 10000 - 1] + "°Û";
//	}
//
//	tr %= 10000;
//	if (tr / 1000 == 0) {
//		flag = true;
//	}
//	else if (flag) {
//		if (tr / 1000 == 1)
//			res += "ÁãÊ°";
//		else res += "Áã" + data_lo[tr / 1000 - 1] + "Ê°";
//		flag = false;
//	}
//	else {
//		if (tr / 1000 == 1)
//			res += "Ê°";
//		else res += data_lo[tr / 1000 - 1] + "Ê°";
//	}
//
//	tr %= 1000;
//	if (tr / 100 == 0) {
//		flag = true;
//	}
//	else if (flag) {
//		res += "Áã" + data_lo[tr / 100 - 1];
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
//			cout << "ÈËÃñ±ÒÁãÔªÕû" << endl;
//			continue;
//		}
//		if (num > 100000000) {
//			res += trans(num / 100000000) + "ÒÚ";
//		}
//		int tmp = num / 100000000;
//		num -= tmp * 100000000;
//
//		if (num >= 10001) {
//			res += trans(num / 10000) + "Íò";
//		}
//		tmp = num / 10000;
//		num -= tmp * 10000;
//
//		if (num >= 1) {
//			res += trans(num) + "Ôª";
//		}
//		if (num == 0) res += "Ôª";
//
//		tmp = num / 1;
//		num -= tmp;
//		tmp = (num+0.005) * 100;
//		if (tmp >= 10) {
//			res += data_lo[tmp / 10 - 1] + "½Ç";
//			if (tmp % 10 != 0) {
//				res += data_lo[tmp % 10 - 1] + "·Ö";
//			}
//		}
//		else if (tmp > 0) {
//			res += data_lo[tmp - 1] + "·Ö";
//		}
//		else res += "Õû";
//
//		cout << "ÈËÃñ±Ò";
//		string check = res.substr(0, sizeof("Áã")-1);
//		if (check == "Áã") {
//			cout << res.substr(sizeof("Áã")-1) << endl;
//		}
//		else cout << res << endl;
//	}
//	return 0;
//}