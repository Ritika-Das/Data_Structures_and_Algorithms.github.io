# Hackerrank Max stack
class Stack:
    def __init__(self):
        self.stack=[]
    def isEmpty(self):
        if len(self.stack)<=0:
            return True
        else:
            return False
    def push(self,data):
        self.stack.append(data)
    def pop(self):
        if not self.isEmpty():
            return self.stack.pop()
        else:
            return 'Not Inserted!'
    
def maxofStack(newStack):
    resultlist=[]
    while not newStack.isEmpty():
        x=newStack.pop()
        resultlist.append(x)
    print(resultlist)
    print('The max element : ')
    print(max(resultlist))
if __name__ == "__main__":
    newStack=Stack()
    newStack.push(1)
    newStack.push(2)
    newStack.push(3)
    newStack.push(4)
    newStack.push(5)
    newStack.push(6)
    maxofStack(newStack)

    