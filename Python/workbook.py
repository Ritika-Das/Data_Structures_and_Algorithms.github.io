def workbook(n, k, arr):
        c=0
        li=[]
    
        for j in arr:
            if(j<=k):
                li.append(j)
            else:
                for l in range(0,j+1,k):
                    if(l>0):
                        li.append(l)
            if(j>=k and j%k!=0):
                li.append(j) 
        print(li)                   
        for j in range(len(li)):
            if(li[j]<=k):
                for i in range(1,li[j]+1):
                    if(j+1==i):
                        c=c+1     
            else:
                for i in range(li[j-1]+1,li[j]+1):
                    if(i==j+1):     
                        c=c+1    
        print(c)     


arr=[4,2,6,1,10]
#workbook(5,3,arr)