import java.util.Scanner;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        String hex = Long.toHexString(a).toUpperCase();  
        String oct = Long.toOctalString(a);             
        System.out.println(hex);
        System.out.println(oct);
    }
}