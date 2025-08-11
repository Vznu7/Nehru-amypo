import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();

        if (!a.matches("[a-zA-Z ]+")) {
            System.out.println("Invalid Input");
            return;
        }

        String longest = "";
        for (String word : a.split("\\s+"))
            if (word.length() > longest.length())
                longest = word;

        System.out.println(longest);
    }
}