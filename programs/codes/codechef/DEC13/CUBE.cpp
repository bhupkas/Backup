/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int t,n,p;
char str1[64005],str2[64005];
int A[42][42][42];
int M[42];

int main()
{
	scanf("%d",&t);
	int side;
	while(t--)
	{
		scanf("%d %d",&n,&p);
		scanf("%s",str1);
		scanf("%s",str2);
		memset(A,0,sizeof(A));
		memset(M,0,sizeof(M));
		for(int i = 1 ; i <= n ; i++)
		for(int j = 1 ; j <= n ; j++)
		for(int k = 1 ; k <= n ; k++)
		if(str1[(i - 1) * n * n + (j - 1) * n + (k - 1)] == str2[(i - 1) * n * n + (j - 1) * n + (k -1)])	A[i][j][k]++;
		for(int i = 1 ; i <= n ; i++)	for(int j = 1 ; j <= n ; j++)	for(int k = 1 ; k <= n ; k++)	A[i][j][k] += A[i][j][k-1];
		for(int i = 1 ; i <= n ; i++)	for(int j = 1 ; j <= n ; j++)	for(int k = 1 ; k <= n ; k++)	A[i][j][k] += A[i][j-1][k];
		for(int i = 1 ; i <= n ; i++)	for(int j = 1 ; j <= n ; j++)	for(int k = 1 ; k <= n ; k++)	A[i][j][k] += A[i-1][j][k];
		bool ok = false;
		for(int d = n ; d >= 1; d --)
		{
			int required = (d*d*d*p+99)/100, cnt, total = 0;
			for(int i = 0 ; i <= n -d ; i++) 
			for(int j = 0 ; j <= n -d ; j++)
			for(int k = 0 ; k <= n -d ; k++)
			{
			cnt = A[i+d][j+d][k+d]+A[i+d][j][k]+A[i][j+d][k]+A[i][j][k+d]-A[i][j+d][k+d]-A[i+d][j][k+d]-A[i+d][j+d][k]-A[i][j][k];
			if (cnt >= required) ++total;
			}	
			if (total > 0)	
			{
				printf("%d %d\n", d, total);
				ok = true;
				break;
			}	
		}
		if(!ok)	printf("-1\n");
	}
	return 0;
}