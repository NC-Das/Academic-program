import java.util.Scanner;

public class pattern {

    public static void main(String[] args) {
        int i, j, n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                if (j == 1 || j == i || i == n) {
                    System.out.print(j);
                } else
                    System.out.print(" ");
            }
            System.out.println();
        }
    }

}
