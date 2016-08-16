/*
The series, 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317.

Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.
*/

#include<iostream>

using namespace std;

long long int find_last10(int n) {
  long long int x=1;
  int i;
  
  for(i=1;i<=n;i++) {
    x = (x*n)%10000000000;
  }
  return x;
}

int main() {
  long long int sum=0;
  int i,n;
  
  for(i=1;i<=1000;i++) {
    if(i%10 != 0) {
      sum = sum + (find_last10(i));
    }
  }
  cout<<sum<<endl;
}