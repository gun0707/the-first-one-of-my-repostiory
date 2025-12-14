#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
int main() {

	int n;double a[301] = {0};
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];

	}double	t = a[0];double x = a[0];
	for (int i = 0;i < n;i++) {

		t = max(t, a[i]);

		x = min(x, a[i]);
	}int k = 0;int m = 0;
	for (int i = 0;i < n;i++) {
		if (a[i] == t) {
			 k = i;break;

		}
	}for (int i = 0;i < n;i++) {
		if (a[i] == x) {
			 m = i;break;
		}
	}
	for (int i = k;i < n - 1;i++) {
		a[i] = a[i + 1];
	}n--;
			if (m < k) {
				for (int i = m;i < n - 1;i++) {
					a[i] = a[i + 1];


				}n--;
			}if (m > k) {
				for (int i = m - 1;i < n - 1;i++) {
					a[i] = a[i + 1];

				}n--;
			}
					double sum = 0;
					for (int i = 0;i < n;i++) {
						sum += a[i];
					}double avg = (sum / n);
					double avg2 = round(avg * 100) / 100;
					double c[301] = { 0 };
					for (int i = 0;i < n;i++) {
						c[i] = fabs(a[i] - avg2);
					}double l = c[0];
					for (int i = 0;i < n;i++) {
						l = max(l, c[i]);
					}
					cout << fixed << setprecision(2) << avg2 << " " << fixed << setprecision(2) <<l;
				return 0;

				}
			
		
	