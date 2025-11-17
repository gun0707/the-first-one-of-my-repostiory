#include<iostream>
using namespace std;
int main() {
	int a[100];
	for (int i = 0;i < 100;i++) {
		cin >> a[i];
	}
	for (int j = 1;j < 101;j++) {
		int t;
		for (int i = 0;i < 101 - j;i++) {
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	for (int i = 0;i < 100;i++) {
		cout << a[i];
	}return 0;
}