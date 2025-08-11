import java.math.BigInteger;
import java.util.Scanner;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            int a = sc.nextInt();
            int b = sc.nextInt();
            if (a <= 0 || b <= 0) {
                System.out.println("Invalid input");
            } else {
                BigInteger A = BigInteger.valueOf(a);
                BigInteger B = BigInteger.valueOf(b);
                BigInteger gcd = A.gcd(B);
                BigInteger lcm = (A.multiply(B)).divide(gcd);
                System.out.println(lcm);
            }
        } catch (Exception e) {
            System.out.println("Invalid input");
        }
    }
}