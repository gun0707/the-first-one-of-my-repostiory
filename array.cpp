#include<iostream>
using namespace std;
#include<array>
#include<iterator>
template<typename T,unsigned N>
bool Findvalue(const T(&ptr)[N], const T& value) {
	for (size_t i = 0;i < N;i++) {
		if (ptr[i] == value) {
			return true;
			break;
		}
	}
	return false;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	bool isfind = Findvalue<int ,10>(arr, 8);
	if (isfind) {
		cout << "find 8";
		return 0;
	}
	cout << "404 not found";
	return 0;
}
