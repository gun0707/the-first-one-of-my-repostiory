#include<iostream>
#include<vector>
using namespace std;
#include<string>
#include<set>
int main() {
	int n;
	cin >> n;
	cin.ignore();
	set<string> m;
	for (int i = 0;i < n;i++) {
		string s;
		getline(cin, s);

		m.insert(s);
	}

	for (const string& k: m) {
		cout << k<< endl;
	}return 0;
}