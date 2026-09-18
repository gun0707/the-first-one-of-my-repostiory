#include<iostream>
#define PI 3.14
using namespace std;
#include<iomanip>
int main() {
	double r;
	cin >> r;
	double v = 4.0 / 3.0 * PI * r * r * r;
	cout << fixed << setprecision(5) << v;
	return 0;
}