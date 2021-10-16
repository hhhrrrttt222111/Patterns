
import java.util.Scanner;

public class Square11 {

    public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        pattern(n);
    }

    static void pattern(int n) {
        int N = 2*n;
        for (int i = 0; i < N-1; i++) {
            for (int j = 0; j < N-1; j++) {

                int atEveryIndex = minValue(i,N-2-i,N-2-j,j);
                System.out.print(n-atEveryIndex+" ");

            }
            System.out.println();
        }

    }
