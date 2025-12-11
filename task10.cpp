#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define init ios_base::sync_stdio(0), cin.tie(0), cout.tie(0);
int main(){
     int t;
     cin >> t;
     while(t--){
          string str;
          cin >> str;
          int len = str.length();
          if(len>10){
               cout << str[0] << len-2 << str[len-1] << endl;
          }else{
               cout << str << endl;
          }
     }
     return 0;
}
