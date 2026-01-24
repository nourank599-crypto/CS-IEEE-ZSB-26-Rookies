#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s1;
    for (int i = 0; i < b; i++) {
        s1 = s1 + to_string(a);
    }
    string s2;
    for (int i = 0; i < a; i++) {
        s2 = s2+ to_string(b);
    }
    if (s1 < s2)
    cout << s1 << endl;
    else
    cout << s2 << endl;
    return 0;
}
