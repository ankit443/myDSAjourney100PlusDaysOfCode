import java.util.*;

public class jumpGame {

    public static boolean canReachEnd(int[] nums) {
        int lastIndex = nums.length - 1;
        for (int i = lastIndex - 1; i >= 0; i--) {
            if (i + nums[i] >= lastIndex) {
                lastIndex = i;

            }
        }

        return lastIndex == 0;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int n = sc.nextInt();

        System.out.println("Enter the elements in the array: ");
        int[] nums = new int[n];
        for(int i =0; i<n; i++){

            nums[i] = sc.nextInt();
        }

        System.out.println(canReachEnd(nums));


        sc.close();

    }

}