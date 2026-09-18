#include<iostream>
using namespace std;
#include<iomanip>
#include<cmath>
int main() {
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double l1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	double l2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	double l3 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	double p = (l1 + l2 + l3) / 2;
	double s = sqrt(p * (p - l1) * (p - l2) * (p - l3));
	cout << fixed << setprecision(2) << s;
	return 0;
}