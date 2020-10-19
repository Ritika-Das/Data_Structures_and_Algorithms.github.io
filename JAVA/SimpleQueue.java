import java.util.Scanner;

class DataStructure
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int i=1;

        Queue q = new Queue();

        while(i!=4)
        {

            switch(i)
            {
                case 1: q.enqueue(); break;
                case 2: q.dequeue(); break;
                case 3: q.display(); break;
                default: System.out.println("enter valid choice");
            }

            System.out.println("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
            System.out.println("enter your choice");
            i = sc.nextInt();
        }
        sc.close();
    }
}

class Queue
{
    Scanner s = new Scanner(System.in);

    int front,rear;
    int[] arr = new int[5];

    public void enqueue()
    {
        System.out.println("Enter an element to insert in queue");
        int a = s.nextInt();
        if(rear>4)
        {
            System.out.println("Queue Overflow");
        }
        else
        {
            arr[rear] = a;
            rear++;
        }
    }

    public void dequeue()
    {
        if(front>4)
        {
            System.out.println("Queue Underflow, There is no element to delete");
        }
        else
        {
            int data = arr[front];
            front++;
            System.out.println("The deleted element is "+ data);
        
        }
    }

    public void display()
    {
        for(int i=front;i<rear;i++)
        {
            System.out.print(arr[i]+"   ");
        }

    }

}
