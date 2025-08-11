import java.util.*;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int targetSum = sc.nextInt();
        Set<Integer> sums = new HashSet<>();
        sums.add(0);  
        for (int num : arr) {
            Set<Integer> newSums = new HashSet<>();
            for (int s : sums) {
                newSums.add(s + num);
            }
            sums.addAll(newSums);
        }
        System.out.println(sums.contains(targetSum) ? 1 : 0);
    }
}