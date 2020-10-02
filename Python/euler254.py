import math

def f(n):
    s=0
    for x in str(n):
        s=s+math.factorial(int(x))
    s2=0
    for x in  str(s):
        s2=s2+int(x)
    return s2 


def g(n):
    num=1
    while(f(num)!=n):
        num=num+1
    return num

print(g(3))


def sg(num):
    s=0
    for x in str(num):
        s=s+int(x)
    return s    

q=int(input())
for x in range(q):
    line=str(input())
    line=line.split()
    
    n=int(line[0])
    m=int(line[1] )
    s=0 
    for i in range(1,n+1):

        s=s+(g(f(n)))
         
    print(s%m)