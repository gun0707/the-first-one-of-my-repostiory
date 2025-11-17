#include <iostream>
using namespace std;
int t[10000];


int main() {
	int l, m, u, v;
	int sum = 0;
	cin >> l >> m;
	for (int i = 0;i < m;i++) {
		cin >> u >> v;
		
		 for(int j=u;j<=v;j++){
			t[j] = 1;
		}
		}
	for (int k = 0;k <= l;k++) {
		if (t[k] == 0) { sum++; }
	}cout << sum;
		return 0;
}