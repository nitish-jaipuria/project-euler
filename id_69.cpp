/*
Euler's Totient function, φ(n) [sometimes called the phi function], 
is used to determine the number of numbers less than n which are relatively prime to n. 
For example, as 1, 2, 4, 5, 7, and 8, are all less than nine and relatively prime to nine, φ(9)=6.

It can be seen that n=6 produces a maximum n/φ(n) for n ≤ 10.

Find the value of n ≤ 1,000,000 for which n/φ(n) is a maximum.
*/

#include<iostream>
#include<ctime>

using namespace std;

/*
bool is_prime(int n) {
  
  //cout<<"reached 1  ";
  
  if(n%2 == 0) 
    return false;
  
  int x = (int) (sqrt((double)n));
  for(int i=3;i<=x;i=i+2) {
    if(n%i == 0)
      return false;
  }
  
  return true;
}
*/

bool is_coprime(int a, int b) {
  
  int r = a - (a/b)*b;
  
  while(r > 1) {
    a = b;
    b = r;
    r = a - (a/b)*b;
  }
  
  if(r == 1)
    return true;
  else
    return false;
}

int co_prime(int n) {
  int i = 3;
  int res = 1;
    
  while(i < n) {
   if(n%i != 0) {
     if(is_coprime(n,i))
      res++;
   }
    i = i + 2;
  }
  return res;
}

int main() {
  int i,val=6;
  
  float f,max=3.0;
  
  double t1 = time(0);
  
  for(i=2310;i<=1000000;i=i+2310) {
      
    f = ((float)i)/((float)co_prime(i));
    
    if(f > max) {
      max = f;
      val = i;
    }
  }
  
  double t2 = time(0);
  
  cout<<t2-t1<<" "<<val<<endl;
}
