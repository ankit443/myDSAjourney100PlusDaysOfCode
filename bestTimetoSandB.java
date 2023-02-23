import java.util.*;

public class bestTimetoSandB {

    static int maxProfit(int prices[], int n) {
        int buy = prices[0], max_profit = 0;
        for (int i = 1; i < n; i++) {

            // Checking for lower buy value
            if (buy > prices[i])
                buy = prices[i];

            // Checking for higher profit
            else if (prices[i] - buy > max_profit)
                max_profit = prices[i] - buy;
        }
        return max_profit;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of the array: ");

        // taking the elements in the array of Prices
        int n = sc.nextInt(); // n is the size of the array

        System.out.println("Enter the elements in your array: ");

        int prices[] = new int[n];
        // taking in Elements from user input
        for (int i = 0; i < n; i++) {
            prices[i] = sc.nextInt();
        }

        n = prices.length;

        int max_profit = maxProfit(prices, n);
        System.out.println(max_profit);

        sc.close();

    }
}