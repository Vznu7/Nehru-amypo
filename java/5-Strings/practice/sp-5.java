import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.nextLine();
        if (!a.matches("[a-zA-Z ]+") || !b.matches("[a-zA-Z]+")) {
            System.out.println("Invalid input");
            return;
        }
        String[] words = a.split("\\s+");
        int count = 0;
        for (String word : words) {
            if (word.startsWith(b)) {
                count++;
            }
        }

        System.out.println(count);
    }
}