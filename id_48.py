# -*- coding: utf-8 -*-

def find_last10(n):
  ans = 1
  
  for i in range(1,n+1):
    ans = (ans*n)%10000000000
    
  return ans
  
s = 0
for i in range(1,1001):
  s = s + find_last10(i)
    
print s%10000000000