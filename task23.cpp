#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int target = 0;
double success = 0;
double total = 0;
void move(string &s, int index, int currentPos) {
    if (index == s.length()) {
        total++;
        if (currentPos == target) success++;
        return;
         }if (s[index] == '+') {
        move(s, index + 1, currentPos + 1);
    } else if (s[index] == '-') {
        move(s, index + 1, currentPos - 1);
    } else {
        move(s, index + 1, currentPos + 1);
        move(s, index + 1, currentPos - 1); }}
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for (char c : s1) {
        if (c == '+') target++;
        else target--; }
    move(s2, 0, 0);
    cout << fixed << setprecision(12) << success / total << endl;
 return 0;
}
