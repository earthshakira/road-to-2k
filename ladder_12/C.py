
def computeGCD(x, y): 
   while(y): 
       x, y = y, x % y 
   return x 

a = []
b = []

n = int(input())

i = 2;

while i*i <=n:
    if n%i == 0:
        a.append(i)
        b.append(n//i)
    i+=1;

if(len(a) == 0 and len(b) == 0):
    print(n)
else:
    t = a[0];
    for item in a+b:
        t = computeGCD(item,t)
        if t==1:
            break
    print(t)
