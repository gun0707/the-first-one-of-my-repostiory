#include <iostream>
using namespace std;
int main() {

	int a = 0, b = 0, c = 0;
	while (true)
		{
		if (a> 9) break;
		b = a++ * c++;
		cout << a++ << "*" << c++ << "=" << b << endl;
		 

		}


		system("pause");
		return 0;
}