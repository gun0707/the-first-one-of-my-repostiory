#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int** a = new int* [n];
	for (int i = 0;i < m;i++) {
		a[i] = new int[m];
	}


	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++) {
			cin >> a[i][j];
		}

	}
	for (int k = 0;k < m;k++)
	{
		for (int p = 0;p < n;p++) {

			cout << a[p][k] << " ";
		}
			
			cout << endl;
		
	}return 0;
}