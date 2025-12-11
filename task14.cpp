#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;

    if (!(cin >> n)) return;

    string s, t;

    cin >> s >> t;

    vector<int> char_counts(26, 0);


    for (char c : s) {

        int index = tolower(c) - 'a';
        char_counts[index]++;
    }


    for (char c : t) {

        int index = tolower(c) - 'a';
        char_counts[index]--;
    }


    for (int count : char_counts) {

        if (count != 0) {
            cout << "NO" << endl;
            return;
        }
    }


    cout << "YES" << endl;
}

int main() {


    int q;

    if (!(cin >> q)) return 0;

    while (q--) {
        solve();
    }

    return 0;
}
