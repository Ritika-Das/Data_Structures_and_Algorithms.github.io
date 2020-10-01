from numpy import *
a = array([['Mon',18,20,22,17],['Tue',11,18,21,18],
		   ['Wed',15,21,20,19],['Thu',11,20,22,21],
		   ['Fri',18,17,23,22],['Sat',12,22,20,18],
		   ['Sun',13,15,19,16]])

print(a.reshape(7,5))

# print specific row
print(a[2])

# print specific element by giving row and coloum number
print(a[4][3])

# adding a row
print(append(a,[['Avg',12,15,13,11]],0))

# adding a row
print(insert(a,[5],[[1],[2],[3],[4],[5],[6],[7]],1))

# deleting a row
print(delete(a,[2],0))

# deleting a column
print(delete(a,s_[2],1))

# updating a row

a[3]=['Thu',0,0,0,0]
print(a)