import java.util.Scanner;
public class A {
    static boolean isAutomorphic(int num) {
        int square = num * num;
        while (num > 0) {
            if (num % 10 != square % 10)
                return false;
            num = num / 10;
            square = square / 10;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            int num1 = sc.nextInt();
            long num2 = sc.nextLong();
            if (isAutomorphic(num1))
                System.out.println("Automorphic");
            else
                System.out.println("Not Automorphic");
            if (isAutomorphic((int)num2)) 
                System.out.println("Automorphic");
            else
                System.out.println("Not Automorphic");

        }catch (Exception e) {
            System.out.println("Invalid input");
        }
    }
}