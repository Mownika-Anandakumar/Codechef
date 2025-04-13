import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int a = s.nextInt();
		int b = s.nextInt();
		int c = s.nextInt();
		int d = s.nextInt();
		if((a*b==c*d)||(a*c==b*d)||(a*d==b*c))
		System.out.println("Possible");
		else
		System.out.println("Impossible");
	}
}
