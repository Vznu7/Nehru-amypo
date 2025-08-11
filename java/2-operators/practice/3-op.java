import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        double height = sc.nextDouble();
        double weight = sc.nextDouble();
        double bmi = weight/(Math.pow(height,2));
        System.out.printf("%.2f\n",bmi);
        if(bmi<=18.5)
        {
            System.out.println("Underweight");
        }
        else if(bmi<=24.9)
        {
           System.out.println("Normal weight");
        }
        else if(bmi<=29.9)
        {
            System.out.println("Overweight");
        }
        else{
            System.out.println("Obese");
        }
        
    }
}