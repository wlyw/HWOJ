//#include<iostream>
//#include<string>
//using namespace std;
//
//string Enc(string& enc) {
//	string res;
//	for (auto each : enc) {
//		if (isupper(each)) {
//			res += ((each - 'A' + 1) % 26 + 'a');
//		}
//		else if (islower(each)) {
//			res += ((each - 'a' + 1) % 26 + 'A');
//		}
//		else
//			res += ((each - '0' + 1) % 10 + '0');
//	}
//	return res;
//}
//
//string UnEnc(string& unenc) {
//	for (int i = 0; i < unenc.size(); ++i) {
//		if (isupper(unenc[i])) {
//			if (unenc[i] == 'A') unenc[i] = 'z';
//			else unenc[i] = unenc[i] - 'A' - 1 + 'a';
//		}
//		else if (islower(unenc[i])) {
//			if (unenc[i] == 'a') unenc[i] = 'Z';
//			else unenc[i] = unenc[i] - 'a' - 1 + 'A';
//		}
//		else {
//			if (unenc[i] == '0') unenc[i] = '9';
//			else unenc[i] = unenc[i] - 1;
//		}
//	}
//	return unenc;
//}
//
//int main() {
//	string enc, unenc;
//	cin >> enc;
//	cin >> unenc;
//
//	cout << Enc(enc) << endl;
//	cout << UnEnc(unenc) << endl;
//	return 0;
//}