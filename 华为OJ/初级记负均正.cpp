//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//
//	int data;
//	int fu = 0, zh = 0;
//	int avg = 0;
//
//	while(N--){
//		cin >> data;
//		if (data < 0) ++fu;
//		if (data > 0) { ++zh; avg += data; }
//	}
//
//	cout << fu << " ";
//	if(zh==0) printf("%d\n", avg);
//	else if (avg % zh == 0) printf("%d\n", avg / zh);
//	else printf("%.1f\n", (float)avg / zh);
//	return 0;
//}