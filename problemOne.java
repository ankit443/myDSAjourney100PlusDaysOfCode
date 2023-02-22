//challenege from HackerRank, we will be using Loops

//given an integer n, print out the first 10 multiples, each multiple nXi where i should be greater than or equals to 1 and less than or equals to 10

//every output should be printed in a new line

import java.util.*;
// import java.math.*;

public class problemOne {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number: ");
        int n = sc.nextInt();

        // the Loop
        for (int i = 1; i <= 10; i++) {
            System.out.println(n + " x " + i + " = " + n * i);
        }

        sc.close();
    }
}