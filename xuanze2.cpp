#include<iostream>
using namespace std;
int main() {
	int a[100];
	for (int i = 0;i < 100;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < 99;i++) {
		int k = i;
		for (int j = i + 1;j < 100;j++) {
			if (a[k] > a[j]) {
				k = j;
				int t;
				t = a[i];
				a[i] = a[k];
				a[k] = t;
		}
		}
	}
	for (int i = 0;i < 100;i++)
	{
		cout << a[i];

	}return 0;
}