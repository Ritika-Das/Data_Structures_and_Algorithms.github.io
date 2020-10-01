import java.util.Scanner;

class Datastructure
{
    public static void main(String[] args)
    {
        // arr = new int[5];
        // int top=-1;
        int i=1;
        Scanner s = new Scanner(System.in);
        Stack st = new Stack();
        while(i!=4)
        {
            switch(i)
            {
                case 1: st.push(); break;
                case 2: st.pop(); break;
                case 3: st.display(); break;
                default: System.out.println("Enter a valid choice");
            }
            
            System.out.println("1.Push\n2.Pop\n3.Display\n4.Exit");
            System.out.println("Enter your choice");
            i = s.nextInt();
        }    
        s.close();
    }
}

class Stack
{
    int top; 
    int[] arr = new int[5];
    Scanner sc = new Scanner(System.in);

    void push()
    {
        System.out.println("Enter a value to push in stack");
        int a = sc.nextInt();
        if(top>4)
        {
            System.out.println("Stack Overflow");
        }
        else
        {
            arr[top] = a;
            top++;
        }
    }

    void pop()
    {
        if(top<=0)
        {
            System.out.println("Stack Underflow");
        }
        else
        {
            top--;
            int data = arr[top];
            System.out.println("Poped element is "+data);
        }
        
    }
    void display()
    {
        System.out.println("The stack is :");
        for(int i=top-1;i>=0;i--)
        {
            System.out.println(arr[i]);
        }
    }
}
