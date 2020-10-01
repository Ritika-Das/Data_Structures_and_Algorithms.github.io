def encryption(s):
    s=list(s)
    li=[]
    for i in s:
        if(i==" "):
            s.remove(s)
    L=len(s)
    print(L)
    p=(L**0.5)
    p=int(p) 
    if(p*p!=L):
     for  i in range(p+1):
        string=""
        for j in range(i,L,p+1):
            string=string+s[j]
        li.append(string)
    else:
     for  i in range(p):
          string=""
          for j in range(i,L,p):
             string=string+s[j]
          li.append(string)

    
    for i in li:
        print(i,"",end="")    


s="iffactsdontfittotheorychangethefacts"
#encryption(s)