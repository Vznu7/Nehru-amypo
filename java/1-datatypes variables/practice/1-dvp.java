import java.util.Scanner;
public class A{
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int sum=0;
    while(a>0)
    {
        int lastdigit =a%10;
        sum+=lastdigit;
        a/=10;
    }
    System.out.println(sum);
    }
}