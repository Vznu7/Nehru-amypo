import java.util.Scanner;
public class A{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a =sc.nextInt();
        int b =sc.nextInt();
        if(a<0||b<0){
            System.out.println("Invalid input");
            return;
        }
            
        int arr[][] =new int[a][b];
        for(int i = 0;i<a;i++)
        {
            for(int j =0;j<b;j++)
            {
                arr[i][j] =sc.nextInt();
            }
        }
        int min =arr[0][0];
        for(int i =0;i<a;i++)
        {
            for(int j =0;j<b;j++)
            {
                if(arr[i][j]<min)
                {
                    min =arr[i][j];
                }
            }
        }
        System.out.println(min);
        
    }
}