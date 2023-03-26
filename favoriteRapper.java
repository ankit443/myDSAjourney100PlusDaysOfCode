import java.util.Scanner;

public class favoriteRapper {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // prompt the user to enter a 3x3 matrix
        System.out.println("Enter a 3x3 matrix of votes for your favorite rapper:");
        int[][] matrix = new int[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = input.nextInt();
            }
        }

        // find the rapper with the most votes
        int maxVotes = 0;
        String favoriteRapper = "";
        for (int i = 0; i < 3; i++) {
            int votes = 0;
            if (matrix[i][0] == matrix[i][1] && matrix[i][1] == matrix[i][2]) {
                // all three votes in a row are equal
                votes = matrix[i][0];
            }
            if (votes > maxVotes) {
                // update the favorite rapper and maxVotes
                maxVotes = votes;
                favoriteRapper = "Rapper " + (i+1);
            }
        }

        // output the result
        System.out.println("Your favorite rapper is " + favoriteRapper);

        input.close();
    }
}
