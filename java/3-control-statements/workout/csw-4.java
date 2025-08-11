import java.util.Scanner;

public class A {
    
    public static int reverse(int num) {
        int rev = 0;
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int M = sc.nextInt();
        int N = sc.nextInt();

        
        if (M > N || M < 0 || N < 0 ) {
            System.out.println("Invalid Input");
            return;
        }

        for (int i = M; i <= N; i++) {
            int rev = reverse(i);
            int modified;

            if (rev < i)
                modified = rev * 2;
            else if (rev > i)
                modified = rev - 1;
            else
                modified = rev + 10;

            System.out.print(modified + " ");
        }
        
        sc.close();
    }
}