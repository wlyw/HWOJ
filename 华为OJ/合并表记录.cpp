//#include<iostream>
//#include<map>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	map<int, int> data;
//	while (N--) {
//		int key, value;
//		cin >> key >> value;
//		if (data.find(key) != data.end()) {
//			data[key] += value;
//		}
//		else data.insert(make_pair(key, value));
//	}
//	for (auto itor = data.begin(); itor != data.end(); ++itor) {
//		cout << itor->first << endl << itor->second << endl;
//	}
//	return 0;
//}