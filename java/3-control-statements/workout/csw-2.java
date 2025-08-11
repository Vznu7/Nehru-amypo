import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String binary = sc.nextLine();
        int decimal = Integer.parseInt(binary,2);
        if(decimal>0){
            System.out.println(decimal);
        }
        else{
            System.out.println("Invalid input");
        }
        
    }
}