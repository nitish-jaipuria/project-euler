/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include<iostream>
#include<math.h>

using namespace std;

bool check_if_prime(int n) {
  int i;
  for(i=2;i<n/2;i++) {
    if(n%i == 0) 
      return false;
  }
  return true;
}

int main() {
  int i,p,res=2;
  double j;
  double num = 600851475143.0;
  int sq_num = (int) sqrt(num);
  
  for(i=3;i<=sq_num;i++) {
    j = (double) i;
    
    if(num%j == 0) {
      if(check_if_prime(i)) {
	res = i;
      }
    }
  }
  cout<<res<<endl;
}