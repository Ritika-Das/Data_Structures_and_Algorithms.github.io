class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def insert(self,data):
        if self.data:
            if data<self.data:
                if self.left is None:
                    self.left=Node(data)
                else:
                    self.left.insert(data)

            if data>self.data:
                if self.right is None:
                    self.right=Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data=data

    def printt(self):

        if self.left:
            self.left.printt()

        if self.right:
            self.right.printt()
        print(self.data)


root = Node(12)
root.insert(6)
root.insert(14)
root.insert(3)
root.insert(8)
root.insert(15)
root.insert(13)

root.printt()
        


