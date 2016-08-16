/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE : Once the chain starts the terms are allowed to go above one million.
*/

#include<iostream>

using namespace std;

int chain(int n) {
  int count = 0;
  
  while(n != 1) {
    if(n%2 == 0) {
      n = n/2;
    }
    else {
      n = 3*n + 1;
    }
    count++;
  }
  return count;
}

int main() {
  int i=2,max=1,max_no=2,no_chain;
  
  while(i < 1000000) {
    no_chain = chain(i);
    
    //cout<<max_no<<","<<max<<"  ";
    if(i%500 == 0) {
      cout<<i<<","<<max_no<<","<<max<<"  ";
    }
    
    if(no_chain > max) {
      max_no = i;
      max = no_chain;
      
    }
    
    i++;
  }
  cout<<endl<<max_no<<endl;
}