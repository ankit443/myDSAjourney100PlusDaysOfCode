
// queue stores data of similar data types in FIFO manner 
// FiFo stands for First In First Out 
// person in front of the line, will get served first

// if our queue is like 6278
// if we want to pop the first element, 6 will be popped first

// pre-requisites for Queues:

// Queues <DataType> var = new LinkedList<>();

import java.util.*;

public class queues {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Queue<String> name = new LinkedList<>();
        // to add an element in a queue, use the add function
        name.add("Hello");
        // this will add the element from the rear end
        // another operation in queue is the peek(); this will return the first element
        // of the queue(front part)
        // Another opertation is the remove()

        name.add("Duniya");
        name.add("iLoveDSA");

        // System.out.println(name);
        // System.out.println(name.peek());

        int len = name.size();

        for (int i = 0; i < len; i++) {
            System.out.println(name.remove());

        }

        sc.close();

    }
}