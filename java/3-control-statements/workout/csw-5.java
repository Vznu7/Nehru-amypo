import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        if(a<1){
            System.out.println("Invalid input");
        }
        for(int  i=a;i>=1;i--)
        {
            System.out.println(i);
        }
    }
}