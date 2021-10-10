import java.util.Scanner;
import java.io.IOException;

class pyramid2{

    public static void main(String[] args)throws IOException{

    Scanner sc=new Scanner(System.in);
    int n=5;
    int x=1;
    for(int i=0; i<n; i++) {
        for(int j=n-1; j>=i; j--) {
            System.out.print(" ");
        }
        for(int k=0; k<x; k++) {
            System.out.print(x);
        }
        x+=2;
        System.out.println("");
    }
    sc.close();
    }
}