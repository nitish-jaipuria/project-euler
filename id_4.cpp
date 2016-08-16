/*
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include<iostream>

using namespace std;

int palindrome(int n) {
  int m=n,rev=0;
  while(n > 0) {
    rev = 10*rev + n%10;
    n = n/10;
  }
  if(rev == m) 
    return true;
  else 
    return false;
}

int find(int x, int y) {
  int i,j;
  int max_pal = 0;
  
  for(i=x;i>0;i--) {
    for(j=y;j>0;j--) {
      if(palindrome(i*j)) {
	if(i*j > max_pal)
	  max_pal = i*j;
      }
    }
  }
  return max_pal;
}

int main() {
  int a = 1000;
  int b = 1000;
  int check;
  
  check = find(a,b);
  cout<<check<<endl;
}