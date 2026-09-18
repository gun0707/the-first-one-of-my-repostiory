#include<iostream>
using namespace std;
#include<string>
int main() {
	string m;
	getline(cin, m);
	int count = 0;
	for (int i = 0;i < m.size();i++) {
		if(count<0) {
			cout << "NO" << endl;
			break;
		}
		if (m[i] == '(') {
			count++;
		}if (m[i] == ')') {
			count--;
		}
		if (m[i] == '@') {
			if (count == 0) {
				cout << "YES" << endl;
				break;
			}
			else cout << "NO" << endl;
		}
		
	}
	return 0;
}
	