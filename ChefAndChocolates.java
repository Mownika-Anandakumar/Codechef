import java.util.Scanner;

public class ChefAndChocolates {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Read the number of test cases
        int T = scanner.nextInt();
        // Process each test case
        for (int t = 0; t < T; t++) {
            // Read X, Y, and Z for the current test case
            int X = scanner.nextInt(); // Number of 5 rupee coins
            int Y = scanner.nextInt(); // Number of 10 rupee coins
            int Z = scanner.nextInt(); // Cost of each chocolate
            // Calculate the total money Chef has
            int totalMoney = (X * 5) + (Y * 10);
            // Calculate the maximum chocolates Chef can buy
            int maxChocolates = totalMoney / Z;
            // Output the result
            System.out.println(maxChocolates);
        }
        // Close the scanner
        scanner.close();
    }
}
