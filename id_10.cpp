/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

#include<iostream>
#include<math.h>

using namespace std;

bool is_prime(int n) {
  int i;

  float j = sqrt((float)n);
  int k = (int)j;
  
  for(i=2;i<=k;i++) {
    if(n%i == 0)
      return false;
  }
  return true;
}

int main() {
  int i=11,n=2000000;
  
  long long int sum = 17;
  
  while(i<n) {
    if(is_prime(i)) {
      if(i < 100) {
	cout<<i<<"  ";
      }
      sum = sum + (long long int)(i);
    }
    i=i+2;
  }
  cout<<endl<<sum<<endl;
}