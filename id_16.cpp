/*
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/

#include<iostream>

using namespace std;

int main() {
  int a[51],count=0,i,j;
  
  for(i=0;i<51;i++) {
    a[i] = 0;
  }
  a[0] = 1;

  for(i=1;i<=1000;i++) {
    a[0] = a[0]*2;
    j = 1;
    
    //cout<<"reached";
    while((j <= count) || (a[j-1] > 999999)) {
      if(a[j-1] > 999999 && j>= count) 
	count++;
      
      //cout<<j<<" ";
      a[j] = a[j]*2 + a[j-1]/1000000;
      a[j-1] = a[j-1]%1000000;
      j++;
    }
  }
  
  int x,sum=0;
  for(i=0;i<51;i++) {
    x = a[i];
    while(x != 0) {
      sum = sum + x%10;
      x = x/10;
    }
  }
  cout<<sum<<endl;
}