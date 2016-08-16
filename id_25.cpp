/*
The Fibonacci sequence is defined by the recurrence relation:

    Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.

Hence the first 12 terms will be:

    F1 = 1
    F2 = 1
    F3 = 2
      ....
    F12 = 144

The 12th term, F12, is the first term to contain three digits.
What is the first term in the Fibonacci sequence to contain 1000 digits?
*/

#include<iostream>

using namespace std;

int main() {
  int i,a,b,c,n,digits;
  int x[125], y[125], z[125];
  
  for(i=0;i<125;i++) {
    x[i] = 0;
    y[i] = 0;
    z[i] = 0;
  }
  
  x[0] = 1;
  y[0] = 1;
  
  n = 2;
  int count = 0;
  
  while(z[124] < 10000000) {
    int j = 0;
    n++;
    
   for(i=0;i<125;i++)
      z[i] = 0;
      
    z[j] = x[j] + y[j];
    
    while(j<count || z[j] >= 100000000) {
      if(count <= j && z[j] >= 100000000)
	count++;
      
      j++;
      z[j] = x[j] + y[j] + z[j-1]/100000000;
      z[j-1] = z[j-1]%100000000;
    }
    
    for(j=0;j<=count;j++) {
      x[j] = y[j];
      y[j] = z[j];
    }
    
  }
  
  cout<<n<<endl;
  
}
