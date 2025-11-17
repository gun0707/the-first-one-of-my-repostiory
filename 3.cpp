#include<iostream>
using namespace std;

int  main() {
	int m, n;
	int temp = 0,ans = 0;
	for (int i = 1;i <= 7;i++) {
		cin >> m >> n;
		if (m + n > 8 && m + n > temp) {
			temp = m + n;ans = i;
		}
	}
		cout << ans;

	
		
	
	return 0;
}