class A:#super class or parent class
    def __init__(self):#constructor inheritacnce: until B doesnt have its own constructor it will take A's constructor and print it
        print("in init")
    def feature1(self):
        print("feature 1 is working")
    def feature2(self):
        print("feature 2 is working")
class B(A):    #child class or sub class
   # def __init__(self):#constructor inheritacnce: until B doesnt have its own constructor it will take A's constructor and print it
   #     super().__init__() #if we still want A's init even if B has its own init use "super"
    #    print("in B's init")# this is B's init
    def feature3(self):
        print("feature 3 is working")
    def feature4(self):
        print("feature 4 is working")
        #can also create a C class C(B) then A would be grandparent and B woulb be the parent


a1=A()#call for the constructor

a1.feature1()
a1.feature2()

b1=B()
 
b1.feature3()
b1.feature4()
b1.feature1()
