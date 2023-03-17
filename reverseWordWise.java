import java.util.Scanner;

public class reverseWordWise {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String sentence = sc.nextLine();
        String[] words = sentence.split("\\s");

        for (int i = 0; i < words.length; i++) {
            StringBuilder sb = new StringBuilder(words[i]);
            sb.reverse();
            System.out.print(sb + " ");
        }
    }
}
