#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    a[0] = 0;  // Fibonacci(0) = 0
    a[1] = 1;  // Fibonacci(1) = 1

    for (int i = 2; i < 100; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    int m;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m >= 0 && m < 100) {
            cout << a[m] << endl;
        }
    }
    return 0;
}
