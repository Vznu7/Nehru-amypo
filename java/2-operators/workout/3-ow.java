import java.util.Scanner;

public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
       
            if(a<0||b<0)
                System.out.println("-1");
            else{
                int free = a/b;
                int total = a+free;
                System.out.println(total);
            }
    }
}