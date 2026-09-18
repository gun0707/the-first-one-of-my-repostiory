#include<iostream>
using namespace std;		
#include<vector>
int main() {
	int n;
	cin >> n;
	vector<string> L(n	);
	for (int i = 0;i < n;i++) {
		cin >> L[i];
		
	}
	char x;
	cin >> x;
	int i = 0;
	while (i < L.size()) {
		bool found = false;
		for(int j=0;j<L[i].size();j++) {
			if (L[i][j] == x) {
				found = true;
				break;
			}
		}
		if (found) {
			L.erase(L.begin() + i);
		}
		else {
			i++;
		}
	}
	for (int i = 0;i < L.size();i++) {
		cout << L[i] << endl;
	}
	return 0;
}