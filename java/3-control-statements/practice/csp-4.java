import java.util.Scanner;

public class A{

    public static boolean isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if (n <= 0) {
            System.out.println("Invalid input");
            return;
        }

        int smallestFactor = 0;
        for (int i = 2; i <= n; i++) {
            if (n % i == 0 && isPrime(i)) {
                smallestFactor = i;
                break;
            }
        }

        System.out.println(smallestFactor);
        
    }
}