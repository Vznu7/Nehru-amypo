import java.util.*;
public class A {
     public static double calculateArea(double r) {
        return Math.PI * r * r;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextDouble()) {
            double radius = sc.nextDouble();
            if (radius >= 0) {
                double area = calculateArea(radius);
                System.out.printf("%.2f\n", area);
            } else {
                System.out.println("Invalid input");
            }
        } else {
            System.out.println("Invalid input");
        }
    }
   
}