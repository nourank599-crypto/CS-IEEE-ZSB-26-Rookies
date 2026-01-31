#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}int main() {
    long long x;
    cin >> x;
    long long best_a = 1;
    for (long long i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            if (gcd(i, x / i) == 1) {
                best_a = i;
 }
 }
    }
    cout << best_a << " " << x / best_a << endl;

    return 0;
}
