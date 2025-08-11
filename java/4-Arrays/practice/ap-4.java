import java.util.Scanner;
public class P{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a =sc.nextInt();
        int b =sc.nextInt();
        if(a<0||b<0)
        {
            System.out.println("Invalid input");
            return;
        }
        int arr[][] = new int[a][b];
        for(int i =0 ;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                if(sc.hasNextInt()){
                arr[i][j] =sc.nextInt();
                }
                else{
                    System.out.println("Invalid input");
                    return;
                }
            }
            System.out.println();
        }
          for(int i =0 ;i<b;i++)
        {
            int sum =0;
            for(int j=0;j<a;j++)
            {
               sum+=arr[j][i];
            }
            System.out.println(sum);
        }
        
        
    }
}