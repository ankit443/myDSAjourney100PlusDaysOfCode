import java.util.*;

public class kLargestElement {

    public static int KthLargestElement(int arr[], int n, int k) {
        Arrays.sort(arr); // sorting the array
        return arr[n - k]; // return kth largest element
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i =0; i<n; i++){
            arr[i] = sc.nextInt();

        }

        int k = sc.nextInt();
        

        // int arr[] = { 2, 1, 4, 6, 3, 9, 7 };
        // int n = arr.length;
        // int k = 2;
        int x = KthLargestElement(arr, n, k);
        System.out.print("Kth largest element is " + x);


        sc.close();

    }
}
