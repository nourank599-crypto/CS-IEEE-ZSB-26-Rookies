#include <iostream>
using namespace std;
void seq(long long n){
cout<<n<<" ";
if (n==1)
return;
if (n%2==0)
seq(n/2);
else
seq(n*3+1);
}
int main()
{
    long long n;
    cin>>n;
    seq(n);
    cout << endl;
    return 0;
}
