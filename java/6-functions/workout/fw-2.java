import java.util.*;

public class A{
    
    
     public static void convert(int a,int b)
    {
        if(a < 0 || b< 0)
            System.out.println("Invalid input");
        else{
        double result = Math.pow(a,b);
        System.out.println((int)result);
        }
        
    }
    
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int base = sc.nextInt();
        int exp = sc.nextInt();
        convert(base,exp);
       
    }
}