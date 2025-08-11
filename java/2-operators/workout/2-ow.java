import java.util.Scanner;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        if(a<0)
            System.out.println("Invalid input");
        else
            System.out.println((a*2)+" "+(a/2));
    }
}