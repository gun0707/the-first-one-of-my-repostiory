#include <iostream>
using namespace std;
class Node {
public:int frontdata;
	int behinddata;
	Node* next;
	Node(int a, int b) {
		
		frontdata = a;
		behinddata = b;
		next = nullptr;
}
	Node() {};
	~Node() {
		delete next;
	}



};
class list :public Node {
public:Node* head;
	  Node* tail;
	  list() {
		  head = new Node();
		  tail = new Node();
		  head->next = tail;
		  tail->next = nullptr;
	  }

	  ~list() {
		  while (head != nullptr) {
			  Node* temp = head;
			  head = temp->next;
			  delete temp;
		  }
	  }
	  void insert(int a, int b) {
		  Node* temp = new Node(a, b);
		  if (head == nullptr) {
			  head = temp;
			  tail = temp;
		  }
		  if (temp->behinddata > head->behinddata) {
			  temp->next = head;
			  head = temp;
		  }
	  }
	  void display() {
		  Node* temp = head->next;
		  while (temp != nullptr) {
			  cout << temp->frontdata << "x" << "^" << temp->behinddata << "+";
			  cout << endl;
		  }

}
	  void add(list&k) {
		  list j;
		  
		  Node* p1 = j.head;
		  Node* p2 = k.head;
		  while (p1 && p2) {
			  if (p1->behinddata = p2->behinddata) {
				  p1->frontdata += p2->frontdata;
				  p1 = p1->next;
				  p2 = p2->next;
			  }
			  if (p1->frontdata == 0) {
				  p1 = p1->next;
				  delete p1;

			  }
		  }
	  }
};
int main() {
	
		list l1, l2;
		int n, coef, exp;

		
		cout << "请输入多项式项数： ";
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << "请分别输入系数和指数： ";
			cin >> coef >> exp;
			l1.insert(coef, exp);
		}cout << "第一个多项式为： ";
		l1.display();

		
		cout << "请输入多项式项数： ";
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << "请分别输入系数和指数： ";
			cin >> coef >> exp;
			l2.insert(coef, exp);
		}

		

		cout << "第二个多项式为： ";
		l2.display();

		 l1.add(l2);
		cout << "最后相加多项式为：" << endl;
		l1.display();

		return 0;
	}
