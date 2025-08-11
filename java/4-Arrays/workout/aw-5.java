import java.util.*;

public class RotateMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            int n = Integer.parseInt(sc.nextLine().trim());

            if (n < 1 || n > 500) {
                System.out.println("Invalid input");
                return;
            }

            int[][] matrix = new int[n][n];

            for (int i = 0; i < n; i++) {
                String[] row = sc.nextLine().trim().split("\\s+");
                if (row.length != n) {
                    System.out.println("Invalid input");
                    return;
                }

                for (int j = 0; j < n; j++) {
                    try {
                        matrix[i][j] = Integer.parseInt(row[j]);
                    } catch (NumberFormatException e) {
                        System.out.println("Invalid input");
                        return;
                    }
                }
            }

        
            int[][] rotated = new int[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    rotated[j][n - 1 - i] = matrix[i][j];
                }
            }


            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print(rotated[i][j] + " ");
                }
                System.out.println();
            }

        } catch (Exception e) {
            System.out.println("Invalid input");
        }
    }
}