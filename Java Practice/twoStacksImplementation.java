import java.util.Scanner;

class twoStacks {

    Scanner sc = new Scanner(System.in);

    int[] arr;
    int size;
    int top1, top2;

    twoStacks(int n) {
        size = sc.nextInt();
        arr = new int[size];
        top1 = size / 2;
        top2 = size / 2;

    }

    // creating a method to push element x into Stack
    void push1(int x) {

        // there is at least one empty slot
        if (top1 > 0) {
            top1--;
            arr[top1] = x;

        }

        else {
            System.out.println("Stack overflow" + " by element: " + x);

            return;
        }

    }

    // creating a method to push element x into Stack 2
    // x to Stack2

    void push2(int x) {

        if (top2 < size - 1) {
            top2++;
            arr[top2] = x;
        }

        else {
            System.out.println("Stack overflow" + " by element" + x);
            return;
        }

    }

    // creating a method to pop an element x into Stack1;
    int pop1() {

        if (top1 <= size / 2) {
            int x = arr[top1];
            top1++;
            return x;

        } else {
            System.out.println("Stack oveflow");
            System.exit(1);
        }
        return 0;

    }

    // creating a method to pop and element x from Stack 2;

    int pop2() {

        if (top2 >= size / 2 + 1) {
            int x = arr[top2];
            top2--;
            ;
            return x;

        }

        else {
            System.out.println("Stack overflow");
            System.exit(1);

        }

        return 1;

    }

};

public class twoStacksImplementation {

    public static void main(String[] args) {

        twoStacks ts = new twoStacks(5);
        ts.push1(5);
        ts.push2(10);
        ts.push2(15);
        ts.push1(11);
        ts.push2(7);

        System.out.println("Popped element from Stack 1 is: " + ts.pop1());
        ts.push2(40);

        System.out.println("Popped element from Stack 2 is: " + ts.pop2());

    }

}
