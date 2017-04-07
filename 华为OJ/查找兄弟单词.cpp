//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool areyouok(string xg1, string xg2) {
//	if (xg1 == xg2) return false;
//	sort(xg1.begin(), xg1.end());
//	sort(xg2.begin(), xg2.end());
//	if (xg1 != xg2) return false;
//	return true;
//}
//
//int main() {
//	int N;
//	while (cin >> N) {
//		vector<string> dic;
//		while (N--) {
//			string tmp; cin >> tmp;
//			dic.push_back(tmp);
//		}
//		sort(dic.begin(), dic.end());
//
//		string xionggui; cin >> xionggui;
//		int pos; cin >> pos;
//		int num_of_xionggui = 0;
//		string real_xionggui;
//		for (int i = 0; i < dic.size(); ++i) {
//			if (areyouok(xionggui, dic[i])) {
//				++num_of_xionggui;
//				if (num_of_xionggui == pos)
//					real_xionggui = dic[i];
//			}
//		}
//		if (num_of_xionggui < pos) cout << num_of_xionggui << endl;
//		else cout << num_of_xionggui << endl << real_xionggui << endl;
//	}
//	return 0;
//}