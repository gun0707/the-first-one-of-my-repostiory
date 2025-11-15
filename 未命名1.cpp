#include <iostream>
using  namespace std;
int main() {
	double length,width,height,volume;
	cout<<"请输入长方体的长:";
	cin >>length;
	cout<<"请输入长方体的宽:";
	cin>>width;
	cout<<"请输入长方体的高:";
	cin>>height;
	volume=length*width*height;
	cout<<"长方体的体积是:"<<volume;
	return 0;
}