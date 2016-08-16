/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include<iostream>

using namespace std;

int find() {
  int i,j,k;
  
  for(i=998;i>1;i--) {
    for(j=1;j<500;j++) {
      k = 1000-i-j;
      if(j*j+k*k == i*i) {
	return i*j*k;
      }
    }
  }
}

int main() {
  cout<<find()<<endl;
}