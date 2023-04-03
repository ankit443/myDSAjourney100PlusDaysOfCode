import java.util.Scanner;

public class functionsOne {

    public static int calculateSum(int a, int b) {
        int sum = a + b;
        return sum;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // make a function to add 2 numbers and return the sum
        int a = sc.nextInt();
        int b = sc.nextInt();

        int sum = calculateSum(a, b);
        System.out.println(sum);

        sc.close();

    }

}
