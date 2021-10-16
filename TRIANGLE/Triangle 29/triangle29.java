import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the Triangle height: ");
        int height = in.nextInt();
        triangle(height);
    }

    public static void triangle(int height){
        for(int i = 0; i < height; i ++){
            for(int j = i; j < height; j ++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
