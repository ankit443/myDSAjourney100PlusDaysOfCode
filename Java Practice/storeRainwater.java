import java.util.Scanner;

public class storeRainwater {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the array size and elements
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();
        int[] height = new int[size];
        System.out.print("Enter the array elements: ");
        for (int i = 0; i < size; i++) {
            height[i] = scanner.nextInt();
        }

        // Compute the amount of water that can be trapped
        int water = trap(height);

        // Print the amount of water that can be trapped
        System.out.println("Amount of water that can be trapped: " + water);
    }

    public static int trap(int[] height) {
        int n = height.length;
        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int water = 0;

        while (left <= right) {
            if (height[left] <= height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    water += leftMax - height[left];
                }
                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    water += rightMax - height[right];
                }
                right--;
            }
        }

        return water;
    }
}
