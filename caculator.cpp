#include<iostream>
using namespace std;
template<typename T>
class Node {
	T m_data;
	Node*m_ link = nullptr;
public:
	Node(const T&val):m_data(val){}
	const T& data()const {
		return m_data;
}
	T& data() {
		return m_data;
	}
	Node* link() {
		return m_link;
	}
	Node(const Node& other) = delete;
	Node& operator=(const Node& other) = delete;
	friend class Stack<T>;
};
template<typename T>
class Stack {
	Node<T>* m_top = nullptr;
public:
	Stack() = default;
	Stack(const Stack& other) = delete;
	Stack& operator=(const Stack& other) = delete;
	~Stack();
	void clear();
	void push(const T& val);
	void pop();
	bool empty()const { return m_top == nullptr; }
	const T& top() { return m_top->m_data; }
};
template<typename T>
 Stack<T>::  ~Stack() {
	clear();
}
 template<typename T>
 void Stack<T>::clear() {
	 Node<T>* P = nullptr;
	 while (m_top != nullptr) {
		 p = m_top;
		 m_top = m_top->m_link;
		 delete p;
	 }
}
 template<typename T>
 void Stack<T>::pop() {
	 Node<T>* P = nullptr;
	 p = m_top;
	 m_top = m_top->m_link;
	 delete p;
 }
 template <typename T>
 void Stack<T>::push(const T&val) {
	 Node<T>* P = new Node<T>(val);
	 P->m_link = m_top;
	 m_top = p;
 }

 class Caculator {
 private :
	 Stack<double> m_num;
	 Stack<char>m_opr;
	 int precedence(const char& s)const;
	 double readNum(string::const_iterator& it);
	 void caculate();
	 bool isNum(string::const_iterator& c)const {
		 return*c >= '0' && *c <= '9' || *c == '.';
	 }
 public:Caculator() { m_opr.push('#'); }
	   double dolt(const string& exp);
 };
 int Caculator::precedence(const char& s)const {
	 switch (s) {
	 case '=':return 0;
	 case'#':return 1;
	 case'+':case'-':return 2;
	 case'*':case'/':return 3;
 }

 }
 void Caculator::caculate() {
	 double b = m_num.top();
	 m_num.pop();
	 double a = m_num.top();
	 m_num.pop();
	 if (m_opr.top() == '+')
		 m_num.push(a + b);
	 else if (m_opr.top() == '-')
		 m_num.push(a - b);
	 else if (m_opr.top() == '*')
		 m_num.push(a * b);
	 else if (m_opr.top() == '/')
		 m_num.push(a / b);
	 m_opr.pop();

 }
 double Caculator::readNum(string::const_iterator& it) {
	 string t;
	 while (isNum(it))
		 t += *it++;
	 return stod(t);
 }
 double Caculator::dolt(const string& exp) {
	 m_num.clear();
	 for (auto it = exp.begin();it != exp.end();) {
		 if (isNum(it))
			 m_num.push(readNum(it));
		 else{
			 while (precedence(*it) <= precedence(m_opr.top())) {
				 if (m_opr.top() == '#')
					 break;
				 caculate();
		 }
		 if (*it != '=')m_opr.push(*it);
		 it++;

		 }
	 }

	 return m_num.top();
 }