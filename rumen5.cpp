#include<iostream>
using namespace std;
int main() {
	int K;
	cin >> K;
	bool isover = false;
	for (int i = 10000;i <= 30000;i++) {
		int sub1 = i / 100;
		int sub2 = i / 10 % 1000;
		int sub3 = i % 1000;
		if(sub1%K==0&&sub2%K==0&&sub3%K==0){
			cout << i << endl;
			isover = true;
		}
		
			
		}
	if (!isover) {
		cout << "No" << endl;
	}
		return 0;
	}






