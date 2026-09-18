#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main() {
	int n;cin >> n;
	vector<int>counter(n,1);
	vector<int > a(n);
	for (int i = 0;i < n;i++) {
		cin >> a[i];

	}
	int j = 0;
	
		for (int i = 0;i < n-1;i++) {
			if (a[i + 1] == a[i]) {
				counter[j]++;
			}
			else { j++; }
		}
		int ans = *max_element(counter.begin(), counter.end());
		cout << ans;
		return 0;
	}
