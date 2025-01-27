import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		 Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        for (int i = 0; i < T; i++) {
            int X = scanner.nextInt();
            int Y = scanner.nextInt();
            if (X < Y) {
                System.out.println("FIRST");
            } else if (X > Y) {
                System.out.println("SECOND");
            } else {
                System.out.println("ANY");
            }
        }
        scanner.close();
    }
}
