"""A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
Given  strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, return YES. Otherwise, return NO."""






class Stack:
    def __init__(self):
        self.stack=[]
    
    def push(self,data):
        return self.stack.append(data)
    def isEmpty(self):
        if len(self.stack)<=0:
            return True
        else:
            return False
    def pop(self):
        if len(self.stack)>0:
            return self.stack.pop()
        else:
            return ('Error')
def checkbalance(strin):
    #print(strin)
    stack=Stack() 
    for char in strin:
        if char in ['(','{','[']:
            stack.push(char)
        else:
            if stack.isEmpty():
                return False
            top=stack.pop()
            if char ==')' and top!='(' or char ==']' and top!='[' or char =='}' and top!='{':
                return False
    return stack.isEmpty()



if __name__ == "__main__":
    newStack=Stack()
    strinput=input()
    x=checkbalance(strinput)
    if x:
        print('Balanced')
    else:
        print('Not balanced')
    
