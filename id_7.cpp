/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include<iostream>

using namespace std;

bool is_prime(int n) {
  int i;
  for(i=2;i<n/2;i++) {
    if(n%i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int i=6;
  int prime = 13, n = 14;
  
  while(i < 10001) {
    if(is_prime(n)) {
      prime = n;
      i++;
    }
    n++;
  }
  cout<<prime<<endl;
}