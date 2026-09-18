#include<iostream>
using namespace std;
#include<vector>
int main() {
	long long n;
	cin >> n;
	vector<long long> a(n+1);
	vector<int> f(n+1,0);
	vector<int>st;
	
	for (int i = 1;i < n+1;i++) {
		cin >> a[i];
	}
	for (int i = 1;i < n+1;i++) {
		while (!st.empty() && a[st.back()] < a[i]) {
			f[st.back()] = i;
			st.pop_back();
		}
		st.push_back(i);
	}
	for(int i = 1;i < n+1;i++) {
		cout << f[i] << " ";
	}
	return 0;
}