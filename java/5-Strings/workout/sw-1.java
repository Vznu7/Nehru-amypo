import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine().trim();
        String b[] = a.split("\\s+");
        System.out.println(b.length);
        
    }
}