#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a = -1, b = -1, c = -1;
    for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
    a = i;
  break; }
    }
    if (a == -1) {
       cout << "NO" << endl;
      return;
    } int remaining = n / a;
    for (int i = a + 1; i * i <= remaining; i++) {
      if (remaining % i == 0) {
    b = i;
 c = remaining / i;
 break;
        }
    }
    if (b != -1 && c != -1 && c > b && c != a) {
        cout << "YES" << endl;
        cout << a << " " << b << " " << c << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
