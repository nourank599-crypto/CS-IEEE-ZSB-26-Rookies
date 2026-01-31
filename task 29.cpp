#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << 0 << endl;
        return;
    }
    int max_cows = n / 4;
    cout << max_cows + 1 << endl;
}int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
