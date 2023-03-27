import java.util.HashSet;

public class hashSetPractice {

    public static void main(String[] args) {

        // creation of a hashset
        HashSet<Integer> s = new HashSet<>();

        // adding the elements from here
        s.add(1);
        s.add(2);
        s.add(3);

        if (s.contains(3)) {
            System.out.println("The set contains the element 3");
        }

        if (!s.contains(4)) {
            System.out.println("The set doesn't contain 4");
        }

    }
}