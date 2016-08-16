# -*- coding: utf-8 -*-

global m

m = {}

def chain(n):
  val = n
  count = 0
  
  while n!=1:
    
    if ((str)(n)) in m:
      count = count + m[((str)(n))]
      n = 1
    else:
      if n%2 == 0:
	n = n/2
      else:
	n = 3*n+1
      count += 1
    
  if ((str)(val)) not in m:
    m[((str)(val))] = count
    
  return count
  
i=2
max_times=1
max_no=2

while i<1000000:
  no_chain = chain(i)
  
  if no_chain > max_times:
    max_no = i
    max_times = no_chain
  
  i += 1
  
print max_no