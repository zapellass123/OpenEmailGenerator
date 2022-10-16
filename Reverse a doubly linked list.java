public class DoubleLL {
   // creating a node 
        public class Node {
        int data;
        Node next;
        Node prev;
        public Node(int data) {
            this.data = data;
            this.next = null;
            this.prev = null;
        }
    }
    public static Node head;
    public static Node tail;
    public static int size;
    
    // adding node value

    public void addFirst(int data) {
        Node newNode = new Node(data);
        size++;
        if(head == null) {
            head = tail = newNode;
            return;
        }
        
        newNode.next = head;
        head.prev = newNode;
        head = newNode;
    }
    // printing the value

    public void print() {
        Node temp = head;
        while(temp != null) {
            System.out.println(temp.data + "<->");
            temp = temp.next;
        }
        System.out.println("null");
    }
 // reverse dll

public void reverse() {
    Node curr = head;
    Node prev = null;
    Node next;
    while(curr != null){
        next = curr.next;
        curr.next = prev;
        curr.prev = next;
        prev = curr;
        curr = next;
    }
    head = prev;
}
public static void main(String args[])
{
    DoubleLL dll = new DoubleLL();
    dll.addFirst(6);
    dll.addFirst(5);
    dll.addFirst(4);
    dll.print();
    dll.reverse();
    dll.print();
}
}

// code by Rufus paul
