# -*- coding: utf-8 -*-

# The prime factors of 13195 are 5, 7, 13 and 29.
# What is the largest prime factor of the number 600851475143 ?

import math

def is_prime(n):
  for i in range(2,n/2+1):
    if n%i == 0:
      return False
  return True
  
m = 600851475143
n = (int)(math.sqrt(m))

for i in range(3,n+1,2):
  if m%i == 0:
    if is_prime(i):
      ans = i
    
print ans