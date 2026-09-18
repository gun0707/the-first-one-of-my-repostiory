#include<iostream>
using namespace std;
#include<list>
#include<string>
void test01() {
	//list≥ı ºªØ
	list<string>words;
	list<double>values(50, 3.14);
	list<double>save_values{ values };
	list<double>samples{ ++values.cbegin(),--values.cend() };
	cout << samples.size() << endl;
	list<string>names{}
}
int main() {
	test01();
	
	return 0;
}