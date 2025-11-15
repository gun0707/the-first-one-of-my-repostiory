#include <iostream>
using namespace std;
# include<ctime>
int main() {

	srand((unsigned int)time(NULL));
	int number = rand() % 100 + 1;
	
	int val = 0;
		
	while (true) {
		cout << "请玩家输入自己猜的数字" << endl;


		cin >> val;
		if (val > number) {
			cout << "您输入数值过大" << endl;
		}
		else if (val < number) {
			cout << "您输入数字过小" << endl;
		}
		else  
		{
			cout << "恭喜您猜对了！" << endl;
			break;
		}

	}
		system("pause");
			return 0;

	}




