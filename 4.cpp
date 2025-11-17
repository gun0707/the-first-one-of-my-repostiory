#include<iostream>
using namespace std;
int main() {
	int spend[13], leave[13];
	double mom = 0;
	 leave[0] = 0;
	 bool isover = false;
	 for(int i=1;i<=12;i++){
		 cin >> spend[i];
	
	 } for (int i = 1;i <= 12;i++){
		 leave[i] = 300 - spend[i] + leave[i - 1];
		 if (leave[i] < 0) {
			 cout << -i;
			 isover = true;
			 break;
		 }
		
		 if (leave[i] >= 100) {
			 mom += leave[i] / 100 * 100;
			 leave[i] = leave[i] - leave[i] / 100 * 100;
		 }
	 }
	 if (!isover) {double total= leave[12] + mom * 1.2;
	 cout << total;
	 }
	return 0;
}