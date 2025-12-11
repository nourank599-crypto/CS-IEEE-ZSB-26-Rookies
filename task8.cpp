
#include <iostream>
#include <string>
#include <set>
using namespace std;


   int ballons (int n, string s){
   int total = 0;
   set<char> problem;
   for(char problem_char : s){
        total++;
    if(problem.insert(problem_char).second)
    {
        total++;
    }
   }
    return total;
   }
   int main(){
  int t;
  cin >> t;
  while (t--){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int d = ballons(n, s);
  cout << d << endl;
  }
  return 0;
}
