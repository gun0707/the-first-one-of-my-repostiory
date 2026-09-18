#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int n1, price1;
	cin >> n1 >> price1;
	int n2, price2;
	cin >> n2 >> price2;
	int n3, price3;
	cin >> n3 >> price3;
	int sprice1, sprice2, sprice3;
	
	for (int i = 1;;i++) {
		if (i * n1 >= n) {
			sprice1 = i * price1;
			break;
		}
	}
	for (int i = 1;;i++) {
		if (i * n2 >= n) {
			sprice2 = i * price2;
			break;
		}
	}
	for (int i = 1;;i++) {
		if (i * n3 >= n) {
			sprice3 = i * price3;
			break;
		}
	}
	cout << min(sprice1, min(sprice2, sprice3));
	return 0;
}