class Main
{
    public static void main(String[] args)
    {
        // number of rows
        final int n = 5;
 
        for (int i = 1; i <= n; i++)
        {
            // print space
            for (int j = i; j < n; j++) {
                System.out.print(' ');
            }
 
            // Print `n` stars
            for (int j = 1; j <= n; j++) {
                System.out.print('*');
            }
 
            // move to the next row
            System.out.print(System.lineSeparator());
        }
    }
}
