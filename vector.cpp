#include<iostream>
using namespace std;
#include<vector>
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for (int i = 0;i < n;i++) {
		cin >> b[i];
	}
	long long sum = 0;
	for (int i = 0;i < n;i++) {
		sum += a[i] * b[i];
	}cout << sum;
	return 0;
}