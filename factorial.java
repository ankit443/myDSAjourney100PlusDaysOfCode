import java.util.Scanner;

//Notes to be noted between functions and methods
// we call methods through class' objects
//we call functions directly
 

public class factorial {

    public static void printFactorial(int n) {
        // Loop

        int factorial = 1;

        for (int i = n; i >= 1; i--) {
            factorial = factorial * i;
        }

        System.out.println(factorial);
        return;

        // if your function type is void and even if you dont type here return, still
        // your function can return
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        printFactorial(n);

        sc.close();
    }

}
