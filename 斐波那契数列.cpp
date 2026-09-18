#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    const int MAX = 30;
    vector<int> a(MAX + 1); // 下标 0..30，可使用 1..30
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= MAX; ++i) {
        a[i] = a[i-1] + a[i-2];
    }
    int m;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        if (m >= 1 && m <= MAX) cout << a[m] << endl;
        else cout << "index out of range" << endl;
    }
    return 0;
}