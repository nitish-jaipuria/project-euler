# -*- coding: utf-8 -*-

import math

def is_prime(n):
  n = (int)(math.sqrt(n))
  for i in range(2,n+1):
    if n%i == 0:
      return False
  return True
  
n = 2000000
s = 2

for i in range(3,n,2):
  if is_prime(i):
    s = s + i
    
print s