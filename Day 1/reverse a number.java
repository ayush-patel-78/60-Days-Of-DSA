
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner kb = new Scanner(System.in);
		int T,n;
		int rev;
		T=kb.nextInt();
		for(int i=0;i<T;i++)
		{
		   n=kb.nextInt();
		   rev=0;
		   while(n>0)
		   {
		       int x;
		       x=n%10;
		       rev =rev*10 +x;
		       n=n/10;
		   }
		   System.out.println(rev);
		}
	}
}
