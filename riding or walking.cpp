#include<iostream>
using namespace std;
int main() {
	double n;
	cin >> n;
	double t1, t2;
	t1 = 27 + 23 + n / 3;
	t2 = n / 1.2;
	if (t1 < t2) {
		cout << "Bike" << endl;
			return 0;
	}
	if(t1>t2){cout<<"Walk" << endl;
	return 0;
	}
	cout << "All" << endl;
	return 0;
}
