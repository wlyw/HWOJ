//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//const vector<string> datanum = { "one","two","three","four","five","six","seven",
//								"eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen",
//								"sixteen","seventeen","eighteen","nineteen" };
//const vector<string> data_real = { "twenty","thirty","forty","fifty","sixty",
//									"seventy","eighty","ninety" };
//const vector<string> data_value = { "hundred","thousand","million","billion" };
//
//string trans(long num) {
//	string res;
//	if (num > 100) {
//		res = res + datanum[num / 100 - 1] + " hundred and ";
//	}
//	if (num == 100) {
//		res += "one hundred";
//		return res;
//	}
//	num %= 100;
//	if (num >= 20) {
//		res += data_real[num / 10 - 2];
//		if (num % 10 > 0)
//			res += " " + datanum[num % 10 - 1];
//	}
//	else if(num>=10){
//		res += datanum[num - 10 + 9];
//	}
//	else {
//		res += datanum[num - 1];
//	}
//	return res;
//}
//
//int main() {
//	long num;
//	while (cin >> num) {
//		string res;
//		long tmp = num / 1000000000;
//		if (tmp != 0) {
//			res += trans(tmp) + " billion ";
//		}
//
//		num %= 1000000000;
//		tmp = num / 1000000;
//		if (tmp != 0) {
//			res += trans(tmp) + " million ";
//		}
//
//		num %= 1000000;
//		tmp = num / 1000;
//		if (tmp != 0) {
//			res += trans(tmp) + " thousand ";
//		}
//
//		num %= 1000;
//		if (num % 1000 != 0) {
//			res += trans(num % 1000);
//		}
//
//		cout << res << endl;
//	}
//	return 0;
//}