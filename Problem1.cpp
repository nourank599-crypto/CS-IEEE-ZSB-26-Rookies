#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n ;
    int counter = 0;
    for( int x = 0 ; x < n; ++x ){
    int y, z, f;
    cin >> y >> z >> f;
    if (y +z +f >= 2) {
        counter = counter + 1;

    }
    }
    cout << counter << endl;

    return 0;
}
