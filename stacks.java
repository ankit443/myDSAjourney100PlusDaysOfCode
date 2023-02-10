import java.util.Scanner;
import java.util.Stack;

public class stacks {

    public static void main(String[] args){

        Stack <Integer> stackInt = new Stack<>();
        stackInt.push(1);
        stackInt.push(5);
        stackInt.push(6);
        stackInt.push(9);

        int len = stackInt.size();

        System.out.println(stackInt.peek());

        // System.out.println(stackInt);

    
        for (int i = 0; i<len; i++){

            System.out.println(stackInt.pop());


        }






    }
    
}


// Stack is a linear data structure which works on LiFo method
// LIFO - Last In First Out method which means the last element to be entered into the stack will be the first element to be removed from the stack
// What are the pre-requisites?
// Data Type
// Syntax - Stack <DataType> varName = new Stack<>();
// this will create a stack
// Stack <Integer> intStack = new Stack<>();
// pop() function can remove this element 
// this will create a stack for integer data type and the size of the stack is Dyanmic
// the more we add, the size increases furtherer


// what are the functions provided in this DS?
// peek function peek()
// it will give the top of the stack, that is 9 in our case
// pop() function can remove this element 
// after using pop function, 9 will be deleted and the new head will be 6(6 will be in top of the stack)

// PROS and CONS of Stack
// Advantages of Stack:
// due to LIFO Manner, we can access elements which are most recent
// example - Search History
// insertion and deletion takes order of 1 time O(1)


// Disadvantages of Stack:
// not much flexible because in order to get the bottom most element, i'd have to pop the upper elements one by one on the top elements

// all operations are related to top only 


