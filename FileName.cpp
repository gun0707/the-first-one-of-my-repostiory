#include<iostream>
using namespace std;
#include<iomanip>

int main() {
	int age;
	int n;
	cin >> n;int m = 0;
	for (int i = 0;i < n;i++) {
		cin >> age;


		m += age;
	}double avg = static_cast<double>(m) / n;
	cout << fixed << setprecision(2) << avg << endl;
	return 0;
}