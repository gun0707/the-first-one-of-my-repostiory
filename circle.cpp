#include<iostream>
using namespace std;
#include<iomanip>
int main() {
	double r;
	cin >> r;
	double area = 3.14159 * r * r;
	double diameter = 2 * r;
	double circumference = 2 * 3.14159 * r;
	cout << fixed << setprecision(4) << diameter << " ";
	cout << fixed << setprecision(4) << circumference << " ";
	cout << fixed << setprecision(4) << area << " ";
	return 0;
}