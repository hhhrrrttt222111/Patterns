import java.util.Scanner;
public class ButterFly {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter n value");
        int n=sc.nextInt();
        int sp=2*n-1,st=0;
        for(int i=1;i<=2*n-1;i++){
            if(i<=n){
                sp=sp-2;
                st++;
            }
            else{
                sp=sp+2;
                st--;
            }
            for(int j=1;j<=st;j++){
                System.out.print("*");
            }
            for(int k=1;k<=sp;k++){
                System.out.print(" ");
            }
            for(int l=1;l<=st;l++){
                if(l!=n)
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
