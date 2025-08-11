import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        
        if(!a.matches("[0-9]+"))
        {
            System.out.println("false");
        }
        else{
            System.out.println("true");
        }
    }
}