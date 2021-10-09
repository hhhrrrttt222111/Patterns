import java.util.Scanner;
import java.io.IOException;

class Pyramid10{

    public static void main(String[] args)throws IOException{
    Scanner sc=new Scanner(System.in);
    int p=5;
    int m=p*2 - 1;
    for(int i=p; i>=1; i--) 
    {
        for(int j=p; j>=i; j--) 
            System.out.print(" ");
        
        for(int k=1; k<=m; k++) 
            System.out.print(m+" ");
        
        m-=2;
        System.out.println("\n");
    }
    sc.close();
    }
}