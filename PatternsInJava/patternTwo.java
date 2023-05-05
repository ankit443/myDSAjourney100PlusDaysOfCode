package myDSAjourney.PatternsInJava;

import java.util.Scanner;

public class patternTwo {

    public static void main(String[] args){



        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int nStars=n;
        for(int i=1; i<=n; i++){

            for(int j=1; j<=nStars; j++){
                System.out.println("*\t");
            }
        }




        sc.close();
    }
    
}
