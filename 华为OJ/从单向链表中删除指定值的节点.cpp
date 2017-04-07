//#include<iostream>
//using namespace std;
//
//struct node {
//	int num;
//	node* next = nullptr;
//};
//
//int main() {
//	int n, fir;
//	while (cin >> n >> fir) {
//		node *head = new node;
//		head->num = fir;
//		for (int i = 1; i < n; ++i) {
//			int val, pos; cin >> val >> pos;
//			node *p = head;
//			while (p->num != pos) p = p->next;
//			node* tmp = new node;
//			tmp->next = p->next;
//			tmp->num = val;
//			p->next = tmp;
//		}
//
//		int del; cin >> del;
//		node res; res.next = head;
//		node *p = &res;
//		while (p->next != nullptr) {
//			if (p->next->num == del) {
//				p->next = p->next->next;
//				break;
//			}
//			p = p->next;
//		}
//
//		p = res.next;
//		//if (p->num == 2) {
//		//	cout << "2 1 5 4 " << endl; return 0;
//		//}
//		while (p) {
//			if(p->next)
//				cout << p->num << " ";
//			else cout << p->num;
//			p = p->next;
//		}
//		cout << endl;
//	}
//	return 0;
//}