import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        if (!input.matches("[a-zA-Z ]+")) {
            System.out.println("Invalid Input");
            return;
        }

        input = input.toLowerCase();

        StringBuilder sb = new StringBuilder();
        for (char c : input.toCharArray()) {
            if (c == ' ') { 
                sb.append(' ');
            } else { 
                sb.append((char) ('a' + ('z' - c)));
            }
        }
        System.out.println(sb);
    }
}