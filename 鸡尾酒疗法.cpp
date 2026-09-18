#include<iostream>
using namespace std;
#include<vector>
int main() {
	int n;
	cin >> n;
	double a, b;
	vector <double> rate(n + 5);
	for (int i = 1;i <= n;i++) {
		cin >> a >> b;
		rate[i] = b / a;
	}
	for (int i = 2;i <= n;i++) {
		if (rate[i] - rate[1] > 0.05) {
			cout << "better" << endl;
			continue;
			
		}
		if (rate[1] - rate[i] > 0.05) {
			cout << "worse" << endl;
			continue;

		}
		else cout << "same" << endl;
	}
	return 0;
}