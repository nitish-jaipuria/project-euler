# -*- coding: utf-8 -*-

def check_rev(n) :
  s = (str)(n)
  
  if len(s)%2 == 1:
    return False
  elif (ord(s[0])+ord(s[-1]))%2 is 0:
    return False
  else:
    r = s[len(s)-1:0:-1]+s[0]
    carry = 0
    i = len(s) - 1
    while i >= 0:
      num = ord(s[i])+ord(r[i])-96+carry
      if num%2 == 0:
	return False
      carry = (int)(num/10)
      i = i - 1
      
  return True
  
ans = 120
i = 1001

while(i < 10**8) :
  if i%10 is not 0:
    if check_rev(i):
      ans = ans + 1
      #print i
  i = i + 1
  if(len((str)(i))%2 == 1):
    i = i*10
    
print ans
