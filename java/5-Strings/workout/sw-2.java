import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int pos1 = sc.nextInt();
        int pos2 = sc.nextInt();
        CodeAt(input, pos1);
        CodeAt(input, pos2);
    }

    static void CodeAt(String str, int pos) {
        if (pos >= 0 && pos < str.length()) {
            System.out.println((int) str.charAt(pos));
        } else {
            System.out.println("Invalid input");
        }
    }
}