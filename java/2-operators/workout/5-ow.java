import java.util.Scanner;
public class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        boolean b = sc.nextBoolean();
         if(a>=50||b)
            System.out.println("The student passes");
         else
            System.out.println("The student fails");
            
    }
}