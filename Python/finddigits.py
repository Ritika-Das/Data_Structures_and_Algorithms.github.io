def findDigits(n):
    c=0
    m=[]
    k=n
    while(n!=0):
        m.append(n%10)
        n=int(n/10)
    #print(m)
    for i in m:
        if(i!=0 and k%i==0):
            c=c+1
    return c        

#print(findDigits(123456789))