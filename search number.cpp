#include<iostream>
using namespace std;
bool ispalindrome(int x) {
	int original = x;
	int reversed = 0;
	while (x > 0) {
		reversed = reversed * 10 + x % 10;
		x /= 10;
	}
	return original == reversed;

}

bool isprime(int x) {
	if (x < 2) return false;
	for (int i = 2;i * i <= x;i++) {
		if (x % i == 0) return false;
	}
	return true;
}


bool isPrimePalindrome(int x) {
	return ispalindrome(x) && isprime(x);
}


int main() {
	long long int n;
	cin >> n;
	int count = 0;
	for (int i = 11;i <= n;i++) {
		if(isPrimePalindrome(i)) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}