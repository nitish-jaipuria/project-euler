/*
Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:

21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13

It can be verified that the sum of the numbers on the diagonals is 101.

What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?
*/

#include<iostream>

using namespace std;

int main() {
  int i,sum=1,count=1;
  int f=8, x=2;
  
  while(x<=1000) {
    count++;
    i = 1;
    
    while(i <= f) {
      if(i%x == 0) {
	sum += count;
	//cout<<count<<" ";
      }
      
      count++;
      i++;
    }
    
    count--;
    x = x + 2;
    f = f + 8;
  }
  cout<<sum<<endl;
}