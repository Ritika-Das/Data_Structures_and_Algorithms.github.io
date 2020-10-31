// circular queue implemented 
// using front and rear pointer in linked list
#include<stdio.h>
#include<stdlib.h>

#define size 5
int que[size];
int front=-1,rear=-1;
//front=-1;
//rear=-1;

int enque(int val)
{
    if(rear==(size-1)&& front==0 || front==(rear+1))
    {
        printf("\n que is overflow");
        return 34;
    }
   // rear++;

    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        printf("\n enter the value::");
        scanf("%d",&val);
        que[rear]=val;

    }
    else if(front!=0 && rear==(size-1))
    {
        rear=0;
        printf("\n enter the value::");
        scanf("%d",&val);
        que[rear]=val;
    }
    else
    {
        rear++;
        printf("\n enter the value::");
        scanf("%d",&val);
        que[rear]=val;

    }
}
int deque()
{
    if(front==1){
        printf(que[1])
    }else{
    int temp;
    temp=que[front];
    if(rear==-1 && front==-1)
    {
        printf("\n underflow");
        return 43;
    }
    else if(front==rear)
            {
                    front=-1;
                    rear=-1;
                   printf("\n %d is deleted",temp);

            }
            else if(front==(size-1))
            {
                front=0;
                printf("\n %d is deleted",temp);

            }
            else
            {
                printf("\n %d is deleted ",temp);
                front++;
            }
    }
}
void display()
{
    int i;

    if(front==-1 && rear==-1)
    {
        printf("\n %d que is empty");
        printf("\n front=%d, rear=%d",front,rear);
    }
    else if(front<rear)
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t %d \t",que[i]);
        }
        printf("\n front=%d, rear=%d \n ",front,rear);
    }
    else if(front>rear)
    {
        for(i=front;i<size;i++)
        {
            printf("\t %d \t",que[i]);
        }
        for(i=0;i<rear;i++)
        {
                 printf("\t %d \t",que[i]);
        }
        printf("\n front=%d, rear=%d \n ",front,rear);

    }
    else
    {
        printf("\t %d \t",que[i]);
        printf("\n front=%d, rear=%d \n ",front,rear);

    }

}
void main()
{
    int ch,val;
    printf("\n 1- insert \t,2-delete \t,3-display \t,4-exit \n ");

    do
    {
        printf("\n enter choice::");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enque(val);
            break;

        case 2:
            deque();
            break;

        case 3:
                display();
                break;

        case 4:
            exit(0);

        default:
            printf("\n invalid ch::");
        }
    }while(ch!=4);
}
