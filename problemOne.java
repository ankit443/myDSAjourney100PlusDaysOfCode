import java.util.*;

public class problemOne {

    public static void deleteMiddle(Stack<Integer> inputStack, int N) {

        int len = 0;
        if (N % 2 == 0) {
            len = N / 2 - 1;
        }

        else {
            len = N / 2;

        }

        int a[] = new int[len];

        for (int i = 0; i < len; i++) {

            a[i] = inputStack.pop();
        }
        inputStack.pop();
        for (int i = len - 1; i >= 0; i--) {
            inputStack.push(a[i]);
        }

    }
}