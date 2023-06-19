public class zeroOneTriangle {

    public static void main(String[] args) {
        int n = 5;

        // outer Loop
        for (int i = 1; i <= n; i++) {

            // inner Loop
            for (int j = 1; j <= i; j++) {

                int sum = i + j;
                if (sum % 2 == 0) {
                    System.out.print("1 ");
                }

                else {// odd
                    System.out.print("0 ");
                }
            }

            System.out.println();
        }
    }

}
