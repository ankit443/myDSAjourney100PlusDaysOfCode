import java.util.HashSet;
import java.util.Iterator;

public class hashSetPractice {

    public static void main(String[] args) {

        // creation of a hashset
        HashSet<Integer> s = new HashSet<>();

        // adding the elements from here
        s.add(1);
        s.add(2);
        s.add(3);

        // for searching - using the function Contains
        if (s.contains(3)) {
            System.out.println("The set contains the element 3");
        }

        if (!s.contains(4)) {
            System.out.println("The set doesn't contain 4");
        }

        // delete function
        s.remove(1);
        if (!s.contains(1)) {
            System.out.println("The element 1 has been removed from the HashSet");
        }

        //we can also check the size of the HashSet
        System.out.println("Size of the set is: " + s.size());


        //printing all elements
        System.out.println(s);



        //iterator of the Set
        Iterator it = s.iterator();


        while(it.hasNext()){
            System.out.println(it.next());
        }
         
    }
}