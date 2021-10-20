
// Java Program to print the given pattern
import java.util.*; // package to use Scanner class
class pattern {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows to be printed");
        int rows = sc.nextInt();
  
        // loop to iterate for the given number of rows
        for (int i = 1; i <= rows; i++) {
  
            // loop to print the number of spaces before the star
            for (int j = rows; j >= i; j--) {
                System.out.print(" ");
            }
  
            // loop to print the number of stars in each row
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
  
            // for new line after printing each row
            System.out.println();
        }
    }
}
