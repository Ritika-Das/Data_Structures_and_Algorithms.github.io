class Queue:
    def __init__(self):
        self.queue=[]
    def enqueue(self,data):
        self.queue.append(data)
    def dequeue(self):
        if(len(self.queue)>0):
            #print('Dequeuing' + str(self.queue[0]))
            self.queue.pop(0)
    def showQueue(self):
        print(self.queue[0])
        
if __name__ == "__main__":
    newQueue=Queue()
    numberFrequency=int(input(''))

    while numberFrequency>0:
        v_k=input('')
        if v_k.startswith('1'):
            querylist=[int(x) for x in v_k.split()]
            v=querylist[0]
            k=querylist[1]
        else:
            v = int(v_k)
        if v==1:
            newQueue.enqueue(k)
        elif v==2:
            newQueue.dequeue()
        else:
            newQueue.showQueue()
        numberFrequency-=1
        
            