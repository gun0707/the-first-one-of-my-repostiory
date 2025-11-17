#include<iostream>
using namespace std;
int main() {
	int a[100];
	for (int i = 0;i < 100;i++) {
		cin >> a[i];
	}for (int i = 0;i < 99;i++) {
		int t;
		for (int j = i + 1;j < 100;j++) {
			if (a[i] > a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;

			}
		}
	}

	for (int i = 0;i < 100;i++) {
		cout << a[i]   ;
	}

	return 0;



}