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
        student.put(3, "Mohd");
        student.put(4, "Sahil");

        System.out.println(student);

        System.out.println(student.get(3));

        sc.close();

    }

}
