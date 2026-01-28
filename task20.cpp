#include <iostream>
using namespace std;
int fun(int k){
if (k==0)
return 1;
return k*fun(k-1);
}
int main()
{
    int N;
    cin>>N;
    cout <<fun(N)<< endl;
    return 0;
}
