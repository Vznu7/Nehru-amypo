import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String a= sc.nextLine();
        int b =sc.nextInt();
        int c =sc.nextInt();
        int len = a.length();
        
        
        if (b>len)
            System.out.println("Invalid input");
        else
            System.out.println(a.charAt(b));
        
        
        if(c>len)
            System.out.println("Invalid input");
        else
            System.out.println(a.charAt(c));
    
        
        
    }
}