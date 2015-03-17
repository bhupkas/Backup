import java.io.*;
import java.math.*;
import static java.lang.Math.*;
import static java.util.Arrays.*;
import java.util.*;

// this is code of wata on topcoder .
// my code is in c++ 

public class Det
{
	final static int M = 1000000007;
	
	public static long pow(long a, long b) {
		long res = 1;
		while (b > 0) {
		  if ((b & 1) != 0) res = (res * a) % M;
		  a = (a * a) % M;
		  b >>>= 1;
		}
		return res;
  	}
	
	public static long det(long[][] a) {
		int n = a.length - 1;
		long[][] c = new long[n][n];
		long res = 1;
		for (int i = 0; i < n; i++) c[i] = a[i].clone();
		for (int p = 0; p < n; p++) {
		  int pi = p;
		  for (int i = p + 1; i < n; i++) {
			if (abs(c[i][p]) > abs(c[pi][p])) pi = i;
		  }
		  if (p != pi) {
			res = -res;
			if (res < 0) res += M;
		  }
		  long[] t1 = c[pi]; c[pi] = c[p]; c[p] = t1;
		  if (c[p][p] == 0) return 0;
		  res *= c[p][p];
		  res %= M;
		  long inv = pow(c[p][p], M - 2);
		  for (int i = p + 1; i < n; i++) {
			c[i][p] *= inv;
			c[i][p] %= M;
			for (int j = p + 1; j < n; j++) {
			  c[i][j] -= c[p][j] * c[i][p];
			  c[i][j] %= M;
			  if (c[i][j] < 0) c[i][j] += M;
			}
		  }
		}
		return res;
  }

	public static long solve (long [][] a)
	{
		return det (a);
	}

	public static void main (String[] args) 
	{
		Scanner sc = new Scanner (System.in);
		
		int T = sc.nextInt();
		
		while (T-- > 0)
		{
			int n = sc.nextInt();
			
			long a[][] = new long[n + 1][n + 1];
			
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					a[i][j] = (long) sc.nextInt();
				}
			}
			
			System.out.println (solve (a));
		}
	}
}
