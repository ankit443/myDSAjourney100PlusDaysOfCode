import java.util.*;

public class wavePrintFour {
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
        
        // Print the matrix in sine wave order
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {  // Even column
                for (int i = 0; i < m; i++) {
                    System.out.print(matrix[i][j] + " ");
                }
            } else {  // Odd column
                for (int i = m - 1; i >= 0; i--) {
                    System.out.print(matrix[i][j] + " ");
                }
            }
        }
    }
}
