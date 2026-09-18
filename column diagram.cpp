#include<iostream>
using  namespace std;
#include<vector>
#include<algorithm>
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	int m = *max_element(a.begin(), a.end());
	vector<int>b(m+1,0);
	for (int i = 0;i < n;i++) {
		b[a[i]]++;
	}
	for (int i = 0;i <= m;i++) {
		cout << b[i] << endl;
	}
	return 0;
}