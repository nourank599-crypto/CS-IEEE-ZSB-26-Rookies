#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char toggle_case(char c) {
    if (islower(c)) {
        return toupper(c);
    } else {
        return tolower(c);
    }
}

int main() {
    string s;
    cin >> s;


    bool apply_toggle = true;
    for (int i = 1; i < s.length(); ++i) {

        if (islower(s[i])) {
            apply_toggle = false;
            break;
        }
    }


    if (apply_toggle) {
        for (int i = 0; i < s.length(); ++i) {
            s[i] = toggle_case(s[i]);
        }
    }


    cout << s << endl;

    return 0;
}
