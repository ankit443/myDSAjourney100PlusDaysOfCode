import java.util.*;

public class multiplyArrays {
    public static void main(String[] args) {
        int[] array1 = {1, 2, 3, 4, 5};
        int[] array2 = {6, 7, 8, 9, 10};
        int[] result = new int[5];

        for (int i = 0; i < array1.length; i++) {
            result[i] = array1[i] + array2[i];
        }



        // System.out.println(result.toString());

        System.out.println("Array 1: " + Arrays.toString(array1));
        System.out.println("Array 2: " + Arrays.toString(array2));
        // System.out.println("Result: " + Arrays.toString(result));

        System.out.println("result is " + Arrays.toString(result));
    }
}
