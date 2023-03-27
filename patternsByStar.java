// import java.util.*;

public class patternsByStar {

    public static void main(String[] args) {

        int n = 4;
        int m = 5;

        // outer Loop
        for (int i = 1; i <= n; i++) {
            // inner Loop
            for (int j = 0; j <= m; j++) {
                System.out.print("*");
            }

            System.out.println();
        }
    }

}