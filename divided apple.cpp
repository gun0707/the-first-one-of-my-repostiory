#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long ans=1;
	long long c=1;
	for (int i = 1;i < n;i++) {
		c++;
		ans += c;
	}
	cout << ans;
	return 0;
}