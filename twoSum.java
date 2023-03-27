
import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class twoSum {

    //an array of integers are given which is nums, and an integer target return indices of two numbers such that they add up to the target

    // Time Complexity:

    // there is One foor loop so O(n)

    // Space Complexity: the space complexity is O(n)
    
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int cur = nums[i];
            // cur + x = target
            // x = target = cur;
            int x = target - cur;
            if (map.containsKey(x)) {
                return new int[] { map.get(x), i };

            }
            map.put(cur, i);

        }
        return null;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        sc.close();
    }

}
