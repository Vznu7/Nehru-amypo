import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int total_legs = (a*2)+(b*4)+(c*4);
        System.out.println(total_legs);
        
        
    }
}