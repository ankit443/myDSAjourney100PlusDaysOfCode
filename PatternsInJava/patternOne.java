//working on patterOne again as I got it wrong

import java.util.Scanner;

public class patternOne {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // enter the value of N for rows
        System.out.print("please enter the value of n:");

        int n =sc.nextInt();
        // working on Nested Loop
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");

            }

            System.out.println();
        }

        sc.close();
    }
}