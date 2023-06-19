import java.util.Scanner;

public class zigzagConversion {

    // main Code
    public String convert(String s, int numRows) {
        String ch[] = new String[numRows];
        for (int k = 0; k < ch.length; k++) {
            ch[k] = "";
        }
        int i = 0;
        while (i < s.length()) {
            for (int j = 0; j < numRows && i < s.length(); j++) {
                ch[j] += s.charAt(i);
                i++;
            }
            for (int j = numRows - 2; j > 0 && i < s.length(); j--) {
                ch[j] += s.charAt(i);
                i++;
            }
        }
        StringBuilder sb = new StringBuilder();
        for (int k = 0; k < ch.length; k++) {
            sb.append(ch[k]);
        }
        return sb.toString();
    }

    // Driver Code
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // the string PaypalIsHiring is written in a zigzag pattern on a given number of
        // rows like that
        // write a code that will take a string and convert it the same way as that

        String input = sc.next();
        int numRows = sc.nextInt();

        sc.close();
    }

}
