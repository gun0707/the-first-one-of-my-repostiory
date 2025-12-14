#include<iostream>
using namespace std;
#include<string>
int main() {
	string str;
	cin >> str;int n = 0;
	for (int i = 0;i < str.length();i++) {
		if (str[i] >='0' && str[i] <='9') {
			n++;
		}
	}
	cout<< n << endl;
}