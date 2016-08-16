/*
Some positive integers n have the property that the sum [ n + reverse(n) ] consists entirely of odd (decimal) digits. For instance, 36 + 63 = 99 and 409 + 904 = 1313. We will call such numbers reversible; so 36, 63, 409, and 904 are reversible. Leading zeroes are not allowed in either n or reverse(n).

There are 120 reversible numbers below one-thousand.

How many reversible numbers are there below one-billion (10^9)?
*/

#include<iostream>
using namespace std;

bool check_rev(int n) {
  int m = 0;
  int i = n;
  
  while(i > 0) {
    m = 10*m + i%10;
    i = i/10;
  }
  
  int s = m+n;
  
  i = s;
  while(i > 0) {
    if((i%10)%2 == 0)
      return false;
    i = i/10;
  }
  return true;
}

int main() {
  int ans = 120;
  int i = 1001;
  int x = 10000;

  while(i < 99999999) {
    if(i%10 != 0 && check_rev(i)) {
      ans = ans + 1;
    }
    
    i = i + 1;
    if(i == x) {
      i = i*10;
      x = 100*x;
    }
  }
  cout<<ans<<endl;
}