//Java program to print the following pattern:-


/*
        1 2 3 4 5
         2 3 4 5
          3 4 5
           4 5
            5
           4 5
          3 4 5
         2 3 4 5
        1 2 3 4 5
 */


import java.util.Scanner;
public class Edureka
{
    public static void main(String[] args)
    {

        int n = 5;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                System.out.print(" ");
            }

            for (int k = i; k <= n; k++)
                { System.out.print(k+" "); } System.out.println(); } for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            System.out.print(" ");
        }
        for (int k = i; k <= n; k++)
        {
            System.out.print(k+" ");
        }

        System.out.println();
    }

    }
}