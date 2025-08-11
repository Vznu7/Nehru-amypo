import java.util.Scanner;
public class A{
public static void main(String[] args)
{
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int arr[] = new int[a];
    if(a<0)
    {
        System.out.println("Invalid input");
    }
    for(int i=0;i<a;i++)
    {
        arr[i] =sc.nextInt();
        
    }
    int c =sc.nextInt();
    int found =0;
    for(int i =0;i<arr.length;i++)
    {
        if(arr[i]==c)
        {
            found =1;
            break;
        }
    }
    if(found==1)
    {
        System.out.println("Yes");
    }
    else
    {
        System.out.println("No");
    }

    
}
}