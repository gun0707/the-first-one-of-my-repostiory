#include<iostream>
using namespace std;
int main() {
	int n;
	string m;
	cin >> n >> m;
	for (char& c : m) {
		c = (c - 'a' + n) % 26 + 'a';
}
	cout << m;
	return 0;

}