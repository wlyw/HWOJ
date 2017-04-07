//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//bool Trans(string& str, vector<int>& data) {
//	for (int i = 0; i < str.size(); ++i) {
//		int j = i;
//		for (; j <= str.size(); ++j) {
//			if (str[j] == '.' || j == str.size()) {
//				string num(str.begin() + i, str.begin() + j);
//				if (num.empty()) return false;
//				data.push_back(atoi(num.c_str()));
//				break;
//			}
//		}
//		i = j;
//	}
//
//	if (data.size() != 4)
//		return false;
//
//	for (int i = 0; i < data.size(); ++i) {
//		if (data[i] < 0 || data[i]>255) return false;
//	}
//
//	return true;
//}
//
//bool IPValid(string& ip, vector<int>& IP) {
//	if (Trans(ip, IP)) return true;
//	return false;
//}
//
//bool MaskValid(string& mask, vector<int>& MASK) {
//	if (!Trans(mask, MASK)) return false;
//	vector<int> binary;
//	for (int i = 0; i < MASK.size(); ++i) {
//		for (int j = 0; j < 8; ++j) {
//			binary.push_back((MASK[i] & 128) + 0);
//			MASK[i] <<= 1;
//		}
//	}
//	if (binary[0] == 0) return false;
//	bool flag = false;
//	for (int i = 0; i < binary.size(); ++i) {
//		if (binary[i] == 0) flag = true;
//		if (flag && binary[i] == 128)return false;
//	}
//	return flag;
//}
//
//int main() {
//	string s;
//	int A = 0, B = 0, C = 0, D = 0, E = 0, Err = 0, Pri = 0;
//	while (getline(cin,s)) {
//		for (int i = 0; i < s.size(); ++i) {
//			if (s[i] == '~') {
//				string ip(s.begin(), s.begin() + i); vector<int> IP;
//				string mask(s.begin() + i + 1, s.end()); vector<int> MASK;
//				if (IPValid(ip,IP) && MaskValid(mask,MASK)) {
//					if (IP[0] >= 1 && IP[0] <= 126)
//					{
//						if (IP[0] == 10)
//							++Pri;
//						++A;
//					}
//					else if (IP[0] >= 128 && IP[0] <= 191)
//					{
//						if (IP[0] == 172 && (IP[1] >= 16 && IP[1] <= 31))
//							++Pri;
//						++B;
//					}
//					else if (IP[0] >= 192 && IP[0] <= 223)
//					{
//						if (IP[0] == 192 && IP[1] == 168)
//							++Pri;
//						++C;
//					}
//					else if (IP[0] >= 224 && IP[0] <= 239)
//						++D;
//					else if (IP[0] >= 240 && IP[0] <= 255)
//						++E;
//				}
//				else ++Err;
//				break;
//			}
//		}
//	}
//	cout << A << " " << B << " " << C << " " << D << " " << E << " " << Err << " " << Pri << endl;
//
//	return 0;
//}