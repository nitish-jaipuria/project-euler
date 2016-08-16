/*
The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?
*/

#include<iostream>
#include<cmath>

using namespace std;

bool is_prime(int n) {
  double x = (double)(n);
  int y = (int) (sqrt(x));
  
  for(int i=3;i<=y;i=i+2) {
    if(n%i == 0)
      return false;
  }
  return true;
}

bool is_circular_prime(int n) {
  int x = n,digit,m=0;
  
  while(x != 0) {
    m++;
    digit = x%10;
    if((digit == 0)||(digit%2 == 0)||(digit == 5))
      return false;
    x = x/10;
  }
  
  int y = n;
  x = (n%10)*((int)(pow(10.0,m-1)))+ n/10;
  
  while(x != n) {
    if(is_prime(x)) {
      x = (x%10)*((int)(pow(10.0,m-1)))+ x/10;
    }
    else 
      return false;
  }
  return true;
}

int main() {
  int i,n,sum=2+3+5+7+11+13+17+31+37+71+73+79+97, ans=13;
  
  for(i=101;i<1000000;i=i+2) {
    if(is_prime(i)) {
      if(is_circular_prime(i)) 
	ans++;
    }
  }
  cout<<ans<<endl;
}