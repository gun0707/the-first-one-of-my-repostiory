#include<iostream>
using namespace std;
int main() {
	int h, r;
	cin >> h >> r;
	double v = 3.14 * r * r * h;
	int n = 20000 / v;
	if (n * v == 20) {
		cout << n;
	}
	else cout << n + 1;
	return 0;
}