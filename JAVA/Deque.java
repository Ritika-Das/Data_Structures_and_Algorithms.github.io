import java.util.*;
public class List
{
    int de[]=new int[500];
    int capacity,rear,front;
    List(int a)
    {capacity=a;
        front=rear=-1;
    }
    void inputfront(char e)
    {if(front==-1&&rear==-1)
      {front=rear=0;   
      de[front]=e;}
      else if(front==0)
      System.out.println("Overflow");
     else
      {front=front-1;
        de[front]=e;}}
        void inputrear(char e)
    {if(front==-1&&rear==-1)
      {front=rear=0;   
        de[front]=e;}
        else if(rear==capacity-1)
      System.out.println("Overflow");
     else
      {rear=rear+1;
        de[rear]=e;}}
        int remove()
    {int c=-99999;
     if(front==rear)
     {front=rear=-1;
        }
     else if((front==-1)&&(rear==-1))
      c=-99999;
     else
      {c=front;
          front=front+1;
        }
        return(c);
    }
    void display()
    {if((front!=-1)&&(rear!=-1))
      {for(int i=front;i<=rear;i++)
        {System.out.println(de[i]);
        }
       }
    }
     public static void main()
     {Scanner sc=new Scanner(System.in);
        System.out.println("Enter max Size ");
        int a=sc.nextInt();
        List ob=new List(a);
        char c='y';
         while(c=='y')
         {System.out.println(" Enter 1 to add at front, 2 to add at back, 3 to delete, 4 to display");
           int n=sc.nextInt();
           switch(n)
           {case 1:
               System.out.println("Enter element ");
               char c1=sc.next().charAt(0);
               ob.inputfront(c1);
               break;
            case 2:
               System.out.println("Enter element ");
               char c2=sc.next().charAt(0);
               ob.inputrear(c2);
               break;
            case 3:
               int i=ob.remove();
               System.out.println(" Element deleted at index "+i);
               break;
            case 4:
               ob.display();
               break;
            }
            System.out.println("ENter y to continue ,n to quit ");
            c=sc.next().charAt(0);
            }
    }
}
