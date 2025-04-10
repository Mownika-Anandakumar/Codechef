import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t>0){
		    int l = s.nextInt();
		    int k = s.nextInt();
		    if(l%k==0){
		        System.out.println(0);
		    }else{
		        System.out.println(1);
		    }
		    
		    t--;
		}
	}
}
