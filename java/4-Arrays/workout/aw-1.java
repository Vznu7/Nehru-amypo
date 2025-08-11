import java.util.Scanner;
public class A{
public static void main(String[] args){
    

    Scanner sc = new Scanner(System.in);
    int a =sc.nextInt();
    
    if(a<0)
    {
        System.out.println("Invalid input");
    }
    else{
    int arr[] = new int[a];
    for(int i =0;i<a;i++)
    {
        arr[i] =sc.nextInt();
        System.out.print(arr[i]+" ");
    }
    }
}  
}