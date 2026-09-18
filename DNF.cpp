#include<iostream>
using namespace std;
#include<vector>
int main() {
	int k, m, n;
	bool flag = 0;
	
	cin >> k >> m >> n;
	vector<long long> a(m + 1), b(m + 1);
	for (int i = 1;i <=m;i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 1;i <= m;i++) {
		if (a[i] == 0) {
			cout << i << " ";
			continue;
		}
		long long cont = k / a[i];
		if (cont * b[i] >= n) {

			cout << i << " ";
			flag = 1;
		}
	}
	if (flag == 0) {
		cout << "-1";
	}
	return 0;
}