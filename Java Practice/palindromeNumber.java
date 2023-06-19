import java.util.Scanner;

public class palindromeNumber {

    public boolean isPalindrome(int x) {
        String s = String.valueOf(x); // convert to string
        int n = s.length(); // store teh string length to int n

        for (int i = 0; i < n / 2; i++) {
            // checking whether the elements are at the same distance from the beginning and
            // from ending are the same, if not return false
            if (s.charAt(i) != s.charAt(n - i - 1))
                return false;
        }

        // if no flaws are found we return true;
        return true;

    }


    //main Driver Code
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String input=sc.next();

        



        sc.close();


    }
}
