/*
There are exactly ten ways of selecting three from five, 12345:

123, 124, 125, 134, 135, 145, 234, 235, 245, and 345

In combinatorics, we use the notation, 5C3 = 10.

In general,
nCr = n!/(r!(n−r)!)   where r ≤ n, n! = n×(n−1)×...×3×2×1, and 0! = 1.

It is not until n = 23, that a value exceeds one-million: 23C10 = 1144066.

How many, not necessarily distinct, values of  nCr, for 1 ≤ n ≤ 100, are greater than one-million?
*/

#include<iostream>

using namespace std;

bool check(int n,int m) {
  double a = (double) n;
  double b = (double) m;
  double res = 1.0;
  
  while(b > 0) {
    res = res*a/b;
    a--;
    b--;
    
    if(res > 1000000)
      return true;
  }
  return false;
}

int main() {
  int i,j;
  
  int ans = 0;
  
  for(i=10;i<=100;i++) {
    for(j=1;j<i/2;j++) {
      
      if(check(i,j)) {
	ans = ans+2;
      }
    }
    
    if(i%2 == 0) {
      if(check(i,i/2))
	ans++;
    }
    else {
      if(check(i,i/2))
	ans = ans+2;
    }
  }
  
  cout<<ans<<endl;
}
