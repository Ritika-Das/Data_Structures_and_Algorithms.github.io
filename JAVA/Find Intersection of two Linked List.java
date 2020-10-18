// Java program to get intersection point of two linked list 
import java.util.*; 
class Node { 
	int data; 
	Node next; 
	Node(int d) 
	{ 
		data = d; 
		next = null; 
	} 
} 
class Main { 
	public static void main(String[] args) 
	{ 
		// list 1 
		Node n1 = new Node(1); 
		n1.next = new Node(2); 
		n1.next.next = new Node(3); 
		n1.next.next.next = new Node(4); 
		n1.next.next.next.next = new Node(5); 
		n1.next.next.next.next.next = new Node(6); 
		n1.next.next.next.next.next.next = new Node(7); 
		// list 2 
		Node n2 = new Node(10); 
		n2.next = new Node(9); 
		n2.next.next = new Node(8); 
		n2.next.next.next = n1.next.next.next; 
		Print(n1); 
		Print(n2); 
		System.out.println(FindIntersect(n1, n2)); 
	} 

	// function to print the list 
	public static void Print(Node n) 
	{ 
		Node cur = n; 
		while (cur != null) { 
			System.out.print(cur.data + " "); 
			cur = cur.next; 
		} 
		System.out.println(); 
	} 

	// function to find the intersection of two Linked List node 
	public static int FindIntersect(Node headA, Node headB) 
	{ 
	
         Stack<Node> node1 = new Stack<>();
         Stack<Node> node2 = new Stack<>();
         while(headA!=null || headB!=null){
            if(headA!=null){
                node1.push(headA);
                headA = headA.next;
            }if(headB!=null){
                node2.push(headB);
                headB = headB.next;
            }
            
         }
        Node recent = null;
        while(!(node1.isEmpty() && node2.isEmpty())){
            if(node1.peek()==node2.peek()){
                recent = node1.pop();
                node2.pop();
            }else{
                return recent.data;
            }
        }
        return -1;
	
	} 
} 
