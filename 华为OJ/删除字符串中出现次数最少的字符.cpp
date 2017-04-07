//#include<iostream>
//#include<string>
//#include<vector>
//#include<set>
//using namespace std;
//
//int main() {
//	string s;
//	cin >> s;
//	vector<int> data(26, 0);
//	for (auto each : s) {
//		++data[each - 'a'];
//	}
//
//	int mini = 20;
//	set<char> del;
//	for(int i=0;i<26;++i){
//		if (data[i] < mini && data[i] != 0) {
//			mini = data[i];
//			del.clear();
//			del.insert('a' + i);
//		}
//		else if(data[i]==mini) 
//			del.insert('a' + i);
//	}
//
//	for (auto itor = s.begin(); itor < s.end();) {
//		if (del.find(*itor) != del.end())
//			itor = s.erase(itor);
//		else ++itor;
//	}
//	cout << s << endl;
//	return 0;
//}