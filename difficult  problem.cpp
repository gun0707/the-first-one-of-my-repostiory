#include<iostream>
using namespace std;
int main() {
	long long N, M;
	cin >> N >> M;
	long long base = N / M;
	long long add = N % M;
	for (int i = 0;i < M - add;i++) {
		cout << base << " ";
	}
	for (int j = 0;j < add;j++) {
		if (j == add - 1) {
			cout << base + 1;
		}
		else {
			cout << base + 1 << " ";
		}
	}
		return 0;
	}
		
