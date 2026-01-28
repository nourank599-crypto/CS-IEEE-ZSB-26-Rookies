#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
set<string> st;
void solve(string s, int l, int r) {
    if (l == r) {
        st.insert(s);
        return;
    }for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);
        solve(s, l + 1, r);
        swap(s[l], s[i]);   }}
int main() {
    string s;
    cin >> s;
    solve(s, 0, s.length() - 1);
    cout << st.size() << endl;
    for (string x : st) {
        cout << x << endl;
  } return 0;}
