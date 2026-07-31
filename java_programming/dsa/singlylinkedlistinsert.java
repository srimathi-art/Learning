public class singlylinkedlistinsert {
    static class Node{
        int data;
        Node next;
    
    Node(int data){
        this.data = data;
        this.next = null;

    }
}

    Node head = null;
    void InsertFirst(int data){
        Node newNode = new Node(data);
        if(head ==  null){
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;
    }
    
    void insertLast(int data){
        Node newnode = new Node(data);
        if(head == null){
            head = newnode;
            return;
        }
        Node currentNode = head;
        while(currentNode.next!=null){
            currentNode = currentNode.next;
        }
        currentNode.next = newnode;


    }
    void insertMiddle(int data, int key){
        
        if(head == null){
            System.out.println("list is empty");
        }
        Node currentnode = head;
        while(currentnode !=null && currentnode.data!=key){
            currentnode = currentnode.next;



        }
        if(currentnode==null){
            System.out.println("Key not found");
            return;
        }
        Node newnode = new Node(data);
        newnode.next = currentnode.next;
        currentnode.next=newnode;

    }
    
    void display(){
        Node temp = head;
        while (temp!=null){
            System.out.print(temp.data+" -> ");
            temp = temp.next;

        }
        System.out.print("Null\n");

        

    }
    public static void main(String[] args){
        singlylinkedlist list = new singlylinkedlist();
        list.InsertFirst(10);
        list.InsertFirst(20);
        list.InsertFirst(30);
        list.display();
        list.insertLast(50);
        list.display();
        list.insertMiddle(25,20);
        list.display();
    
    }
}
    


