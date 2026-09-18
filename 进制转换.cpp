#include<iostream>
using namespace std;
int main() {
	string M, N;
	cin >> M >> N;
	bool first =true;
	for (int i = 0;i < N.length();i++) {
		if (N[i] != '0') {
		if (!first) {
			cout << "+";
		}
		
			cout << N[i] << "*" << M << "^" << N.length() - i - 1;
			first = false;
		}
		
	}
	return 0;
}