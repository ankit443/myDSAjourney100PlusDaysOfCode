import java.util.Scanner;

public class rotateArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read array size
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        // Read array elements
        int[] nums = new int[size];
        System.out.print("Enter the array elements: ");
        for (int i = 0; i < size; i++) {
            nums[i] = scanner.nextInt();
        }

        // Read k
        System.out.print("Enter the value of k: ");
        int k = scanner.nextInt();

        // Rotate the array
        rotateArray(nums, k);

        // Print the rotated array
        // System.out.print("Rotated Array: ");
        for (int i = 0; i < size; i++) {
            System.out.print(nums[i] + " ");
        }

        scanner.close();
    }

    public static void rotateArray(int[] nums, int k) {
        int n = nums.length;
        k = k % n;

        // Reverse the first n-k elements
        reverse(nums, 0, n - k - 1);

        // Reverse the last k elements
        reverse(nums, n - k, n - 1);

        // Reverse the whole array
        reverse(nums, 0, n - 1);
    }

    public static void reverse(int[] nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
}
