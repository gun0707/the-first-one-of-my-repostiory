#include<iostream>
using namespace std;
#include<vector>
int main() {
	int n;
	cin >> n;		
	vector<string> v(n);
	for (int i = 0;i < n;i++) {
		string s;
		cin >> s;
		if (s != "READ") {
			v.push_back(s);
		}
		else {
			cout << v.back() << endl;
			v.pop_back();
		}
	}
	return 0;
	

}

