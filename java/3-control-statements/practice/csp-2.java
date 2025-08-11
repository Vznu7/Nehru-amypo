import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a =sc.nextInt();
        if(a>18)
            System.out.println("Too old for admission");
        else if(a>=5&&a<=18)
            System.out.println("Eligible for admission");
        else
            System.out.println("Too young for admission");
    }
}