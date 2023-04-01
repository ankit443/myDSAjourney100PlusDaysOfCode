import java.util.Scanner;

public class functions {

    public static void printMyName(String name) {
        System.out.println(name);
        return;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("enter your name bro: ");

        String name = sc.next();
        printMyName(name);

        sc.close();

    }
}