#include <iostream>
#include <vector>
using namespace std;

bool isValid(int n, vector<int>& seq) {
    for (int i = 0; i < n - 2; i++) {
        int a = seq[i], b = seq[i + 1], c = seq[i + 2];
        if (a > c && c > b) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> seq(n);
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    cout << (isValid(n, seq) ? "YES" : "NO") << endl;
    return 0;
}
