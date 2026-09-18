#include<iostream>
using namespace std;
#include<vector>
int main() {
	int m, n;
	cin >> n >> m;
	vector<vector<int>> a(n,vector<int>(m));
	vector<vector<int>> b(n, vector<int>(m));
	vector<vector<int>> c(n, vector<int>(m));
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> b[i][j];
		}
	}
	for(int i=0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	for(int i=0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}