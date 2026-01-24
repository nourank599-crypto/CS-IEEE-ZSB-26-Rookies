#include <iostream>
using namespace std;
int main() {
    int n, k, a[205];
    cin >> n >> k;
    for (int i = 1; i <= 2 * n + 1; i++)
    cin >> a[i];
    for (int i = 2; i <= 2 * n && k > 0; i += 2) {
    if (a[i] - 1 > a[i - 1] && a[i] - 1 > a[i + 1]) {
    a[i]--;
    k--;}}
    for (int i = 1; i <= 2 * n + 1; i++)
    cout << a[i] << " ";
    return 0;
}
