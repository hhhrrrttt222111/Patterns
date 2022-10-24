// import required classes if any  
// create class KitePatternExample to print Kite pattern  
class KitePatternExample {  
    // main() method start  
    public static void main(String[] args) {  
        // declare and initialize variables  
        int sp = 4;  
        // for loop to print the upper part of the kite  
        for (int m = 1; m <= 5; m++) {  
   
            // for loop to print space on screen  
            for (int n = sp; n >= 1; n--) {  
                System.out.print(" ");  
            }  
            // for loop to print star on screen  
            for (int n = 1; n <= (m - 1); n++) {  
                if (m == 1) {  
                    continue;  
                }   
                System.out.print("*");  
            }  
            for (int n = 1; n <= m; n++) {  
                System.out.print("*");  
            }  
            System.out.println();  
            sp--;  
        }  
        // update value of space to print space on screen    
        sp = 1;  
        // for loop to print middle part of the kite  
        for (int m = 4; m >= 1; m--) {  
            for (int n = sp; n >= 1; n--) {  
                System.out.print(" ");  
            }  
            for (int n = 1; n <= m; n++) {  
                System.out.print("*");  
            }  
            for (int n = 1; n <= (m - 1); n++) {  
                System.out.print("*");  
            }  
            sp++;  
            System.out.println();  
        }  
        // again update value of space to print space on screen  
        sp = 3;  
        // for loop to print lower part of the kite  
        for (int m = 2; m <= 5; m++) {  
            if ((m % 2) != 0) {  
                for (int n = sp; n >= 1; n--) {  
                    System.out.print(" ");  
                }   
                for (int n = 1; n <= m; n++) {  
                    System.out.print("*");  
                }  
            }   
            if ((m % 2) != 0) {  
                System.out.println();  
                sp--;  
            }  
        }  
    }  
}  