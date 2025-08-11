import java.util.*;

public class A{
    
    
     public static void binary(String a)
    {
         if (a.matches("[01]+")) {
            int decimal = Integer.parseInt(a, 2);
            System.out.println(decimal);
        } else {
            System.out.println("Invalid input");
        }
        
    }
    
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine().trim();
        binary(input);
       
    }
}