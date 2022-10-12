import java.util.Scanner;

public class pyramid
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number of rows of the pyramid");
        int rows = input.nextInt();

        for (int i = 1; i <= rows; i++)
        {
            for (int j = rows; j >= i; j--)
            {
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}