package c.javapackage;

public class ChangeLetter {

	public static void main(String[] args) {
	
		   String input = "helloworLD";
		    char[] arr;
		    arr = input.toCharArray();
		    
		    System.out.print(arr);
		    System.out.println();
		    
		    for(int i = 0; i < arr.length; i++){
		      if (arr[i]>='A' && arr[i] <= 'Z') {
		    	  arr[i] = (char)(arr[i] + ('a'-'A'));
		        }
		      else if (arr[i]>= 'a' && arr[i] <= 'z') {
		    	  arr[i] = (char)(arr[i] - ('a'-'A'));
		      }
		   }
		      
		    System.out.print(arr);
		    
		    
	}

}
