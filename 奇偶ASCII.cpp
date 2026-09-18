#include<iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	int m = a;
	if (m % 2 == 0) {
		cout << "NO";
		return 0;
	}
	else cout << "YES";
	return 0;
}
