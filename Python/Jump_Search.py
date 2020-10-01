import math
num = int(input("Please enter size of array : "))
arr_str = list(input().split(" "))
if len(arr_str)!=num:
	print("Please enter only "+str(num)+" elements.")
	exit()
arr = list(map(int, arr_str))
val = int(input("Enter value to be found : "))

def jump_search(arr, n, val):
	prev = 0
	step = int(math.sqrt(n))
	while arr[step] < val :
		prev = step
		step += int(math.sqrt(n))
		if prev >= n :
			return -1
		else:
			pass

	for i in range(prev, step):
		if arr[i] == val:
			return i

index = jump_search(arr, len(arr), val)
print(str(val)+" is positioned at : "+str(index+1))