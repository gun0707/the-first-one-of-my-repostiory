#include<iostream>
using  namespace std;
#include<iomanip>
#include<vector>
int main() {
	double price=0;
	vector<int> numble(10);
	for (int i = 0;i < 10;i++) {
		cin >> numble[i];
	}
	vector<double>single_price{28.9,32.7,45.6,78,35, 86.2, 27.8, 43, 56, 65};
	for (int i = 0;i < 10;i++) {
		price+=numble[i]*single_price[i];
	}
	cout<<fixed<<setprecision(1)<<price;
	return 0;
}