primary=(input('Enter the inputs\n').split())
strin=[int(x) for x in primary]
print(strin)
swapped=0
for i in range(0,len(strin)):
    for j in range(0,len(strin)-1-i):
        if strin[j]>strin[j+1]:
            strin[j],strin[j+1]=strin[j+1],strin[j]
            swapped+=1
print('Number of swapped required',str(swapped))
print(strin)
