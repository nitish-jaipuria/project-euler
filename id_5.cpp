/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include<iostream>

using namespace std;

int change(int a, int b) {
  int x=a,y=b;
  int temp;
  while(1) {
    temp = a%b;
    a = b;
    b = temp;
    if(a%b == 0) {
      return (x*y/b);
    }
    else if(a%b == 1) {
      return x*y;
    }
  }
}

int main() {
  int i,n=2;
  
  for(i=3;i<=20;i++) {
    if(n%i != 0) {
      n = change(n,i);
    }
  }
  cout<<n<<endl;
}