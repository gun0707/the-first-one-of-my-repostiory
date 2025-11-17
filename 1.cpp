#include<iostream>
using namespace std;
int main() {
	int k = 0;
	cin >> k;

	
	double Sn = 0;
	int i = 1;
	while (1) {
		
		double t = 1;

		t = t / i;
		
		Sn += t;
		if (Sn > k) {
			cout << i ;break;
		}i++;
	}

	return 0;

}