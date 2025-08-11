import java.util.Scanner;

public class P {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();  // Number of rows
        int b = sc.nextInt();  // Number of columns

        if (a < 0 || b < 0) {
            System.out.println("Invalid input");
            return;
        }

        int[][] arr = new int[a][b];

  
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (sc.hasNextInt()) {
                    arr[i][j] = sc.nextInt();
                } else {
                    System.out.println("Invalid input");
                    return;
                }
            }
        }

        
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                if (arr[i][j] % 2 == 0) {
                    arr[i][j] = 0;
                }
            }
        }

        
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}