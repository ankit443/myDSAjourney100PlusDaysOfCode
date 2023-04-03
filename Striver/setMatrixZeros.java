//         Given an 'N' x 'Mt integer matrix, if an element is O, set its entire row and column to O's, and
// return the matrix. In particular, your task is to modify it in such a way that if a cell has a
// value O O), then all the cells of the ith row and jth column should be changed
// to O.

//during the time of interview whenever we have to talk about the solution of the problem, we have to give an approach of the brute force apporach
import java.util.Scanner;

public class setMatrixZeros {

    public void setZeroes(int[][] matrix) {
        int col0 = 1, rows = matrix.length, cols = matrix[0].length;

        // outer Loop
        for (int i = 0; i < rows; i++) {
            if (matrix[i][0] == 0)
                col0 = 0;

            // inner Loop for nested Loop
            for (int j = 1; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = matrix[0][j] = 0;

                }
            }

        }

        // second Outer Loop
        for (int i = rows - 1; i >= 0; i--) {

            // second Inner Loop
            for (int j = cols - 1; j >= 1; j--) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;

                }
                if (col0 == 0) {
                    matrix[i][0] = 0;
                }
            }
        }
    }

    // Driver Code

    public static void main(String[] args) {

        // System.out.println("Enter the elements of your matrix: ");

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the rows of your matrix: ");
        int rows = sc.nextInt();
        System.out.println("Enter the columns of your matrix: ");
        int cols = sc.nextInt();

        int[][] matrix = new int[rows][cols];


        // entering matrix data

        sc.close();

    }

    public static void enterMatrixData(Scanner scan, int[][] matrix, int rows, int cols) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter matrix data: ");

        // outer Loop
        for (int i = 0; i < rows; i++) {
            // inner Loop
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = sc.nextInt();

            }
        }

        sc.close();
    }

    public static void printMatrix(int[][] matrix, int rows, int cols){

        Scanner sc = new Scanner(System.in);

        System.out.println("The give matrix is: ");

        //outer Loop
        for(int i=0; i<rows; i++){

            //inner Loop
            for(int j=0; j<cols; j++){
                System.out.println(matrix[i][j] + "\t");

            }
            System.out.println();
        }



        sc.close();
    }
}
