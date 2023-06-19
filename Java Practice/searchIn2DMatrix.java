import java.util.*;

public class searchIn2DMatrix {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the dimensions of the matrix
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        
        // Initialize the matrix
        int[][] matrix = new int[m][n];
        
        // Read the matrix values
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        // Read the target value
        int target = scanner.nextInt();
        
        // Perform binary search on the matrix
        int left = 0, right = m * n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int row = mid / n;
            int col = mid % n;
            if (matrix[row][col] == target) {
                System.out.println("true");
                return;
            } else if (matrix[row][col] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        // Target value not found
        System.out.println("false");
    }
}
