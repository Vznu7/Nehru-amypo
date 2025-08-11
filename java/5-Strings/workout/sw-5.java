import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String a = sc.nextLine();
        String b = sc.nextLine();
        String c= sc.nextLine();
        String d= a.replace(b,c);

        System.out.println(d);
    }
}