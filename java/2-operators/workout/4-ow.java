import java.util.Scanner;
public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
         int left = a <<1;
         int right = a>>1;
         System.out.println(left);
         System.out.println(right);
            
    }
}