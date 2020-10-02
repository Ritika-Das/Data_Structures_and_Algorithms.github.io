def arrayManipulation(n, queries):
    arr=[]
    for i in range(n):
        arr.append(0)
    for i in queries:
        a=i[0]
        b=i[1]
        arr[a]=arr[a]+k
        arr[b]=arr[b]-k
    
    return max(arr) 

r1=[1,2,100]
r2=[2,5,100]
r3=[3,4,100]

queries=[r1,r2,r3]
#print(arrayManipulation(6,queries)) #not able to work for large inputs(runtime errors)