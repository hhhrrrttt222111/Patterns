public class N
{
  public static void main(String args[])
	  {
		    int i, j, k = 0;
		    for (i = 0; i < 10; i++)
		    {
		        System.out.print("*");
		        for (j = 0; j <= 10; j++)
		        {
		        System.out.print(j == 10 || j == k ? "*" : " ");
		        }
		            k++;
		        System.out.printf("\n");
		    }
   }
}
