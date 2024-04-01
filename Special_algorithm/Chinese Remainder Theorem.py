import math 

def ChineseRemainderGauss(n,N,a):
  # n is the list of moduli
  # N is the product of all moduli
  # a is the list of remainders
  # x is the solution
  x = 0
  for i in range(len(n)):
      ai = a[i]
      ni = N//n[i]
      x += ai * ni * invmod(ai,n[i])
  return x%N

def invmod(x, y):
  x0, x1, y0, y1 = 1, 0, 0, 1
  while y > 0:
      q, x, y = math.floor(x / y), y, x % y
      x0, x1 = x1, x0 - q * x1
      y0, y1 = y1, y0 - q * y1
  return x0 % y

