# -*- coding: utf-8 -*-

global mem
mem = {}

def is_coprime(a,b):
  
  r = a - (a/b)*b
  
  while(r > 1):
    a = b
    b = r
    
    # memoization
    if (str)(a) in mem:
      if (str)(b) in mem[(str)(a)]:
	return mem[(str)(a)][(str)(b)]

    r = a - (a/b)*b
  
  if(r == 1):
    return True
  else:
    return False

def co_prime(n):
  i = 3
  res = 1
    
  mem[(str)(n)] = {}
  
  while(i < n):
   if(is_coprime(n,i)):
     res = res + 1
     mem[(str)(n)][(str)(i)] = True
   else:
     mem[(str)(n)][(str)(i)] = False
     
   i = i + 2
  return res
  
val=6
m=3.0
i = 2310

while(i<=100000):
  
  f = ((float)(i))/co_prime(i)
  
  print i,f
  
  if(f > m):
    m = f
    val = i
    
  i = i + 2310
  
print val,m