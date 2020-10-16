#first sort all the values( ascending order)
#check mid value ( (0 + (n-1)/2), if the required value is greater than the mid value change the lower bound, else change the upper bound
#lower bound = 1st entry of list
#upper bound = last entry of list

pos = -1
def search(list,n):
    l=0
    u=len(list) -1
    while l <=u:
        mid = (l+u) // 2     #integer division
        if list[mid] == n:
            globals() ['pos'] = mid
            return True
        else:
            if list[mid] <n:
                l = mid+1
            else:
                u = mid-1
        return False
list = [1,2,44,5,67]
n= 44
if search (list,n):
    print("Found at", pos)
else:
    print("not found")
