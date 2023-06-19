import java.util.*;

public class hashmaps {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // values might be same but the keys are different
        // pre-requisites of Hashmaps are:
        // Hashmap<Integer, String> student = new Hashmap<>();

        HashMap<Integer, String> student = new HashMap<>();
        // to put a unique key value, use the put() function

        student.put(1, "Ayush");
        student.put(2, "Riya");
        student.put(3, "Arpit");
        student.put(4, "Sahil");

        System.out.println(student);

        System.out.println(student.get(3));
        System.out.println(student.get(2));
        System.out.println(student.get(1));

        sc.close();

    }

}


//Advantages and Disadvantages of Hashmaps
// searching of an element in Hashmap takes order of 1
// cant hold multiple keys value - disadv


