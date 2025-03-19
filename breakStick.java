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
		while(t!=0){
		    int n = s.nextInt();
		    int x = s.nextInt();
		    if(n%2==0){
		        System.out.println("YES");
		    }
		    else if(x%2==0){
		        System.out.println("NO");
		    }else{
		        System.out.println("YES");
		    }
		    t--;
		}
	}
}
