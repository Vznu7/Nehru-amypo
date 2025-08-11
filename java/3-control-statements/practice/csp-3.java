import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        float a =  sc.nextFloat();
        if(a<=0)
        {
            System.out.println("Invalid Input");
        }
        else if(a>2.0)
        {
            a=a-2;
            a=a*20;
            int b =(int)a;
            System.out.println(b);
            
        }
    }
}