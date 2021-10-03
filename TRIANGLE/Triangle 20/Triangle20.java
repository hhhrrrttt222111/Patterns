class Main {  
  public static void main(String args[]) { 
	  for(int j=0; j<5; j++){
		  for(int i=0; i<5; i++){
			  if(j<=i)
				  System.out.print('*');
			  else
				  System.out.print(' ');
		  }
		  System.out.println();
	  }
  } 
}
