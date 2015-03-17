/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define NMAX 50005

int memo[2][NMAX];

int main()
{
	int t;
	//cin >> t;
		string str1,str2;
		cin >> str1 >> str2;
		int n = str1.size();
		int m = str2.size();
		if(n < m)	
		{
			swap(str1,str2);
			swap(n,m);
		}
		for(int i = 0 ; i <= n ; i++)
		{
			for(int j = 0 ; j <= m ; j++)
			{	
				if(i == 0 || j == 0)	memo[1][j] = 0;
				else 	if(str1[i-1] == str2[j-1])	memo[1][j] = memo[0][j-1] + 1;
				else	memo[1][j] = max(memo[0][j],memo[1][j-1]);
			}
			for(int j = 0 ; j <= m ; j++)	memo[0][j] = memo[1][j];
		}
		printf("%d\n",memo[1][m]);
	return 0;
}