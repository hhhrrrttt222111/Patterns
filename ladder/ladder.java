import java.io.IOException;
import java.util.Scanner;

public class ladder {
    public static void main(String[] args)throws IOException {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the length of Ladder: ");
        int n = sc.nextInt();
        sc.close();
        for (int i=0;i<=n;i++) 
        {      
            System.out.println("*   *");
            System.out.println("*   *");
     
            if (i<n)                
                System.out.println("*****");
        }
    }
}
