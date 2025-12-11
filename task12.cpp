#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

void solve() {
    int n;

    if (!(cin >> n)) return;

    string s;

    cin >> s;


    if (n < 26) {
        cout << "NO" << endl;
        return;
    }

    map<char, int> frequency_map;


    for (char c : s) {

        char lower_c = tolower(c);


        if (lower_c >= 'a' && lower_c <= 'z') {

            frequency_map[lower_c]++;
        }
    }


    if (frequency_map.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


}

int main() {


    solve();

    return 0;
}
