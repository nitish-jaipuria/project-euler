/*
The decimal number, 585 = 1001001001_2 (binary), is palindromic in both bases.

Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2.

(Please note that the palindromic number, in either base, may not include leading zeros.)
*/

#include<iostream>
#include<string>

using namespace std;

bool is_palindrome(int n) {
  int i = n, m = 0;
  
  while(i > 0) {
    m = 10*m + i%10;
    i = i/10;
  }
  
  if(m == n)
    return true;
  else 
    return false;
}

bool is_pal_2(int n) {
  int i=n,j;
  string s = "";
  
  while(i > 0) {
    if(i%2 == 0)
      s = "0" + s;
    else
      s = "1" + s;
    
    i = i/2;
  }
  
  i = 0,j = s.size()-1;
  
  while(i < j) {
    if(s[i] != s[j]) 
      return false;
    i++;j--;
  }
  return true;
}

int main() {
  int i=1,sum = 0;
  
  while(i < 1000000) {
    if(is_palindrome(i)) {
      if(is_pal_2(i)) {
	cout<<i<<"  ";
	sum = sum + i;
      }
    }
    i = i + 2;
  }
  cout<<sum<<endl;
}