#include<iostream>
using namespace std;
#include<iomanip>
int main() {
	int n;
	cin >> n;
	double a[1000];
	a[1] = 1;
	a[2] = 1;
	if (n > 2) {
		for (int i = 0;i < n;i++) {
			if (i > 1)
			{
				a[i + 1] = a[i] + a[i - 1];

			}
		}
			cout<<fixed <<  setprecision(2) << a[n];
			return 0;
		
	}
	else	 cout<<fixed << setprecision(2) << a[n];
	return 0;
	
}