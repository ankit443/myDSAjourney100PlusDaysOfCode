import java.util.*;

public class rotateArray29 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the dimensions of the matrix
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        
        // Initialize the matrix
        int[][] matrix = new int[n][m];
        
        // Read the matrix values
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        // Rotate the matrix by 90 degrees clockwise
        int[][] rotatedMatrix = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = n - 1; j >= 0; j--) {
                rotatedMatrix[i][n - j - 1] = matrix[j][i];
            }
        }
        
        // Print the rotated matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(rotatedMatrix[i][j] + " ");
            }
        }
    }
}
