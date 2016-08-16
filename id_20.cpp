/*
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
*/

#include<iostream>

using namespace std;

int main() {
  int n[40],i,j,count=0;
  
  for(i=0;i<40;i++) {
    n[i] = 0;
  }
  
  n[0] = 1;
  
  for(i=2;i<=100;i++) {
    j = 0;
    n[j] = n[j]*i;
    
    while(n[j]>99999 || j<count) {
      
      if(n[j] > 99999 && j>=count) {
	count++;
      }
      
      j++;
      n[j] = n[j]*i + n[j-1]/100000;
      n[j-1] = n[j-1]%100000;
      //cout<<j<<":"<<n[j]<<"  ";
    }
    
  }
  
  int x,sum_digits = 0;
  
  for(i=0;i<40;i++) {
    x = n[i];
    while(x>0) {
      sum_digits = sum_digits + x%10;
      x = x/10;
    }
  }
  
  for(i=0;i<40;i++){
    //cout<<n[i]<<endl;
  }
  cout<<sum_digits<<endl;
}