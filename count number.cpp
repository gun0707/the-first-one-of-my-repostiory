#include<iostream>
using namespace std;
int main() {
	long long int n;
	int x;
	cin >> n >> x;
	long long int ans=0;
	for (int i = 1;i <= n;i++) {
		long long t = i;
		while (t > 0) {
			if (t % 10 == x) {
				ans++;
			}
			t /= 10;
		}

	}
			cout << ans << endl;
			return 0;
}