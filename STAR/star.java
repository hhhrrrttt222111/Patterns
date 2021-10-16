public class star
{
  public static void main(String args[]) 
  {
      int n = 7;  // Number of rows.
 
      n= n/2 + 1;
      int i=0;
      //We first print Pyramid Pattern
      for(i=0;i<n;i++)
      {
          for(int k=i;k<n;k++)
          System.out.print("  ");
 
          // We run loop till j = 2*i to print odd no. of stars.
          for(int j=0;j<=2*i;j++)
          {
            // We print '*' for each row.
            System.out.print("* ");
          }
 
          System.out.println();
      }
 
      n=i;  // i=n-1 so copy its value to n.
 
      // We then print Inverted Pyramid Traingle.
      for(i=n-1;i>0;i--)
      {
          // We need to print one space for first row.
          for(int k=i;k<n+1;k++)
          System.out.print("  ");
 
          // We run loop from j = 2*i to 2 print odd no. of stars.
          for(int j=2*i;j>1;j--)
          {
            // We print '*' for each row.
            System.out.print("* ");
          }
 
          System.out.println();
      }
 
  }
}  
 
