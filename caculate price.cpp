#include<iostream>
using namespace std;
int main() {
	int x;
	char c;
	cin >> x >> c;
	if (x <= 1000) {
		if (c == 'y') {
			cout << "13";
		}
		else cout << "8";
	}
	int n;
	if (x > 1000) {
		n = (x - 1000) / 500;
		if (500 * n < x - 1000) {
			n++;
		}
		if(c== 'y') {
			cout << 8+4*n+5;
		}
		else cout << 8 + 4 * n;

	}
	return 0;
}