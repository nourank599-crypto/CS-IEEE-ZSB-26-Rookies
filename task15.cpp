#include <iostream>
using namespace std;
int main(){
int H, A;
cin>>H>>A;
int i = 0;
while (H > 0) {
    H -= A;
    i++;
}
cout << i << endl;
 return 0;
}
