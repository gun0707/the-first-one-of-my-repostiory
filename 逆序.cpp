#include<iostream>
using namespace std;
#include<map>
#include<string>
int main() {
	string s;
	getline(cin, s);
	map<char, int>m;
	for ( char m1 : s) {
		if (m1 == ' ') {
			continue;
		}
		m[m1]++;
	}
	for (auto& m2 : m) {
		cout << m2.first<< ":" << m2.second<< endl;
	}

}