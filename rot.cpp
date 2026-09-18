#include<iostream>
using namespace std;
#include<vector>

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n*m);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> a[i*m+j];
		}
	}
	vector <int> b(m*n);
	for(int i=0;i<m;i++) {
		for(int j = 0;j < n;j++) {
			b[i*n+j] = a[j*m+i];
		}
	}
	for (int i = 0;i < m;i++) {
				for(int j = 0;j < n;j++) {
			cout << b[i*n+j] << " ";
		}
				cout << endl;
	}
	return 0;
}