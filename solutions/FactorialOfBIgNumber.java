import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Main {
    
	public static void main (String[] args) {
        int totalNums, num;
	    Scanner scanner = new Scanner(System.in);
	    
	    totalNums = scanner.nextInt();
	    int[] nums = new int[totalNums];
	    
        for(int i = 0; i < nums.length; i++) {
            nums[i] = scanner.nextInt();
        }
	    scanner.close();
	    
	    for (int j = 0; j < nums.length; j++) {
	        BigInteger factorial= BigInteger.ONE;
	        
	        num = nums[j];
	        
	        for (int k = 2; k <= num; k++) {
	            factorial = factorial.multiply(new BigInteger(String.valueOf(k)));
	        }
	        
	        System.out.println(factorial);
	    }
	}
}
