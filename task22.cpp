#include <iostream>
#include <algorithm>
using namespace std;
long long weights[25];
int n;
long long solve(int index, long long sum1, long long sum2) {
    if (index == n) {
        return abs(sum1 - sum2); }
    long long option1 = solve(index + 1, sum1 + weights[index], sum2);
    long long option2 = solve(index + 1, sum1, sum2 + weights[index]);
    return min(option1, option2);}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> weights[i]; }
    cout << solve(0, 0, 0) << endl;
  return 0;
}
