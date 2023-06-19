import java.util.*;

public class arrays {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of the array: ");
        int s = sc.nextInt();
        int arr[] = new int[s];
        System.out.println("Enter the elements in the array: ");
        for (int i = 0; i < s; i++) {
            arr[i] = sc.nextInt();

        }

        System.out.println("Contents of the array are: " + Arrays.toString(arr));

        sc.close();

    }
}