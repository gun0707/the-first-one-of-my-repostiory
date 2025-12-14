#include<iostream>
using namespace std;
#include<string>

int main() {
	string str;
	getline(cin, str);
	int number[26] = { 0 };
	for (int i = 0;i < str.length();i++) {
		number[str[i] - 'a']++;
	}
	for (int i = 0;i < str.length();i++) {
		if (number[str[i] - 'a'] == 1) {
			cout << str[i] << endl;
			return 0;
		}
	}cout << "no" << endl;
	return 0;
}