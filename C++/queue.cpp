#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

# define size 4

class Queue{
private:
int rear;
int front;
int items[size];

public:
Queue(){
    rear=-1;
    front=-1;
};
void enqueue(int item){
    if(isfull()){
        cout<<"";
    }
    else {if(front==-1){
        front=0;

    }
    rear++;
    items[rear]=item;
    cout<<"item pushed";
    }
}
bool isfull(){
    if(front ==0 && rear==size-1){
        return 1;
    }
    else{
        return 0;
    }
}

bool isempty(){
    if(rear==-1){
        return 1;
    }
    else{
        return 0;
    }
}
};

class Circular_queue{
    private:
    int front;
    int rear;
    int items[size];
    public:
  
    Circular_queue(){
        front=-1;
        rear=-1;

    }
    void push(int item){
        if(isfull()){
            cout<<"";

        }
        else if(isempty()){
             rear++;
             items[rear]=item;
             front=0;
             cout<<"item pushed \n";
             cout<<"front="<<front<<"\n";

        }
        else{
            rear=(rear+1)%size;
            items[rear]=item;
            cout<<"item pushed \n";
            cout<<"front="<<front<<"\n";

        }
    }
    bool isfull(){
        if(rear==size-1 && front==0){
            return 1;
        }
        else if(front==rear+1){
            return 1;

        }
        else{
            return 0;
        }

    }
    bool isempty(){
        if(rear==-1 && front==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void deletion(){
        if(!isempty()){
            cout<<front<<"\n";
            cout<<"item deleted: "<<items[front]<<"\n";
        front++;
    }
    else if(front==rear){
        cout<<"item deleted: "<<items[front]<<"\n";
        front=-1;
        rear=-1;
        cout<<front;
    }
    else{
        cout<<"item deleted: "<<items[front]<<"\n";
        front=(front+1)%size;
        cout<<front;
    }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<"index:"<<i<<" "<<items[i]<<"\n";
        }
    }
};

int main(){
    Circular_queue q;
    q.push(1);
    q.push(3);
    q.push(6);
    q.push(4);
    q.deletion();
    q.deletion();
    q.deletion();
    q.deletion();
    q.push(2);
    q.push(3);
    q.deletion();
}