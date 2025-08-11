import java.util.*;
public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String vowels = "aeiouAEIOU";
        List<Character> v = new ArrayList<>();

        for (char c : s.toCharArray())
            if (vowels.indexOf(c) != -1) v.add(c);

        StringBuilder res = new StringBuilder();
        for (char c : s.toCharArray())
            res.append(vowels.indexOf(c) != -1 ? v.remove(v.size() - 1) : c);

        System.out.println(res);
    }
}