#include<iostream>
using namespace std;
int main() {
	long long sum = 0;
	for (int n = 1;n <= 20;n++) {
		long long t = 1;
		for (int i = 1;i <= n;i++)
		{
			t *= i;
		}
		sum += t;
	}
	cout << sum;


	return 0;

}