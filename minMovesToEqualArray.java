import java.util.*;

public class minMovesToEqualArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read array size
        int n = scanner.nextInt();

        // Read array elements
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        int avg = sum / n;
        int remainder = sum % n;

        // The minimum number of moves required is the sum of the absolute
        // differences between each element and the average value.
        int moves = 0;
        for (int i = 0; i < n; i++) {
            int diff = Math.abs(nums[i] - avg);
            if (diff > remainder) {
                moves += diff - remainder;
            } else {
                remainder -= diff;
            }
        }

        System.out.println(moves);
    }
}
