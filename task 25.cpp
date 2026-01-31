#include <iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    while(n--){
    int x;
    cin>>x;
    int count=0;
    for(int i=1;i*i<=x;i++){
    if(x%i==0){
    count++;
    if(i*i!=x){
    count++;}}

    }

    cout <<count<< endl; }

    return 0;

}
