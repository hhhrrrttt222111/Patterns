public class printP
{
  public static void main(String args[])
	  {
		    int i, j, k;
		    for (i = 0; i <10; i++)
		    {
		        for (j = 0; j <1; j++)
		        {
		        	System.out.printf("* ");
		        }
		        for (k = 1; k <= 5; k++)
		        {
		        	System.out.printf(i<1 || i > 4 && i<6 || i>=1 && i<=4 && k==5 ? "* " : "  ");
		        }
		        System.out.printf("\n");
		    }
	  }
}