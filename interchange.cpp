#include <bits/stdc++.h>
using namespace std;
int convertToFive(int n) {
   if(n==0){
      return 0;
   }
   int last_digit= n%10;
   if(last_digit==0)
      last_digit=5;
   return convertToFive(n/10)*10 +last_digit;
}
int main() {
   int n;
   cin >> n;
   cout << convertToFive(n) << endl;
}