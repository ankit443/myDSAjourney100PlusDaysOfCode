import java.util.Scanner;

public class cover1Dto2D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] original = new int[n];

        // Reading the elements of the 1D array
        for (int i = 0; i < n; i++) {
            original[i] = sc.nextInt();
        }

        // Computing the dimensions of the 2D array
        int m = (int) Math.ceil((double) n / 2);
        int[][] result = new int[m][n / m];

        // Populating the 2D array
        int k = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n / m; j++) {
                if (k >= n) {
                    break;
                }
                result[i][j] = original[k++];
            }
        }

        // Printing the 2D array
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n / m; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }
}
