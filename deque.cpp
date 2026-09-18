#include<iostream>
#include<deque>
#include<string>
using namespace std;
void test01() {
	//deque的创建初始化以及全复制和部分复制。
	deque<int>a_deque;
	deque<int>my_deque(10);
	deque<string>words{ "one","none","confidence","triumph","utility" };
	deque<string>words_copy{ words };
	deque<string>words_part{ begin(words),begin(words) + 4 };
	//deque中添加元素
	deque<int>d;
	d.push_front(1);
	d.push_back(2);
	d.push_back(5);
	cout << d.size() << endl;
	//调用遍历函数法一（ps：&的添加加快效率也可以不加）	for (auto &i: d) {
		//	cout << i << " ";
	//	}
		//法2：迭代器
	for (auto i = d.begin();i != d.end();i++) { cout << *i << " "; }

	//指针失效
	deque<int>d2;
	d2.push_front(1);
	auto	first = d2.begin();
	cout << *first << endl;
	d2.push_back(2);
//	cout << *first << endl;
	

}
int main() {
	test01();
	return 0;
}