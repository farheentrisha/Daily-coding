import java.util.Scanner;

public class ArmstrongCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input number
        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        int original = n;
        int sum = 0;

        // Count digits
        int digits = String.valueOf(n).length();

        // Calculate sum of digits raised to power
        while (n > 0) {
            int digit = n % 10;
            sum += Math.pow(digit, digits);
            n /= 10;
        }

        // Check Armstrong condition
        if (sum == original) {
            System.out.println(original + " is an Armstrong number.");
        } else {
            System.out.println(original + " is not an Armstrong number.");
        }

        sc.close();
    }
}
/*a number that equals the sum of its own digits, where each digit is raised to the power of the total number of digits in the number3-digit example (153):It has 3 digits. 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153*/
