/*
Working from left-to-right if no digit is exceeded by the digit to its left it is called an increasing number; for example, 134468.

Similarly if no digit is exceeded by the digit to its right it is called a decreasing number; for example, 66420.

We shall call a positive integer that is neither increasing nor decreasing a "bouncy" number; for example, 155349.

Clearly there cannot be any bouncy numbers below one-hundred, but just over half of the numbers below one-thousand (525) are bouncy. 
In fact, the least number for which the proportion of bouncy numbers first reaches 50% is 538.

Surprisingly, bouncy numbers become more and more common and by the time we reach 21780 the proportion of bouncy numbers is equal to 90%.

Find the least number for which the proportion of bouncy numbers is exactly 99%.
*/

#include<iostream>

using namespace std;

bool check_bouncy(int n) {
  
  int r=0, l=0;
  int curr, prev;
  curr = n%10;
  n = n/10;
  
  while(n > 0) {
    prev = curr;
    curr = n%10;
    n = n/10;
    
    if(curr > prev) 
      r++; // inc from end to begin
    else if(curr < prev)
      l++;
    
    if(r > 0 && l > 0) 
      return true;
  }
}

int main() {
  int p = 90;
  int n = 21780;
  int b = 9*2178;
  
  while(p < 99) {
    n++;
    
    if(check_bouncy(n)) {
      b++;
      p = (b*100)/n;
    }
  }
  
  cout<<n<<endl;
}