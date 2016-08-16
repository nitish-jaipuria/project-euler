/*
It can be seen that the number, 125874, and its double, 251748, contain exactly the same digits, but in a different order.

Find the smallest positive integer, x, such that 2x, 3x, 4x, 5x, and 6x, contain the same digits.
*/

#include<iostream>

using namespace std;

int no_of_digits = 2;

bool test_digits(int n1, int n2) {
  int a1[no_of_digits], a2[no_of_digits];
  int i = 0, j;
  
  while(n1 > 0 || n2 > 0) {
    a1[i] = n1%10;
    a2[i] = n2%10;
    i++;
    n1 = n1/10;
    n2 = n2/10;
  }
  
  for(i=0;i<no_of_digits;i++) {
    bool find = false;
    for(j=0;j<no_of_digits;j++) {
      if(a1[i] == a2[j])
	find = true;
    }
    if(!find)
      return false;
  }
  
  return true;
}

bool test(int n) {
  
  if(test_digits(n,2*n)) {
    if(test_digits(n,3*n)) {
      if(test_digits(n,4*n)) {
	if(test_digits(n,5*n)) {
	  if(test_digits(n,6*n)) {
	    return true;
	  }
	}
      }
    }
  }
	  
  return false;
}

int main() {
  int n = 10,found = 0;
  int x;
  
  while(found == 0) {
        
    n = n*10;
    x = n;
    no_of_digits++;
    
    while(x <= 5*n/3) {
      
      if(test(x)) {
	found = 1;
	break;
      }
      
      x++;
    }

  }
  
  cout<<x<<endl;
}
