import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String sentence = sc.nextLine();

        String[] words = sentence.split(" ");
        StringBuilder cs = new StringBuilder();

        for (String word : words) {
            if (word.length() > 0) {
            
                cs.append(Character.toUpperCase(word.charAt(0)))
                                   .append(word.substring(1))
                                   .append(" ");
            }
        }
        
        System.out.println(cs.toString().trim());
    }
}