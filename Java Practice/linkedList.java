import java.util.*;



public class linkedList {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        LinkedList <String> stringLL = new LinkedList<>();
        stringLL.add("Hello");
        stringLL.add("Duniya");  


        // System.out.println(stringLL);
        // System.out.println(stringLL.get(1));

        for(int i= 0; i< stringLL.size(); i++){
            System.out.println(stringLL.get(i));
        }

        sc.close();
    }
    
}


// key points about LinkedLists:
// Each object in a linked list stores 2 values
// One is the data value, another is the address of the next element data value 
// 1, 101; 1,150; 1, 130; 7, null;
// Null means no another node after this one
// it represents the end of the linked list

// What are the pre-requisites for a LinkedList
// LinkedList <DataType> varName = new LinkedList<>();
// Example - LinkedList<String> nameLinkedList = new LinkedList<>();
// this will create a linkedlist which stores the elements of the data type of Strings


//Advantages of LinkedList:
// Dyanmic in size
// there is no wastage of memory

//Disadvanatages of Linked List
// if the head node is lost, the LinkedList cannot be accessed 
// we cannot access an element very easily (we have to iterate first and then reach the element)



