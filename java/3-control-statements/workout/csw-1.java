import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a =sc.nextInt();
        if(a<18)
        {
            System.out.println("Access denied");
        }
        else if(a>=18 &&a<=20)
        {
            System.out.println("Limited access granted");
        }
        else{
            System.out.println("Full access granted");
        }
    }
}