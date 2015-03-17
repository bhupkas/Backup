#include"stdio.h"
using namespace std;
int maxi(int a,int b)
{
	if(a>b)	return a;
	return b;	
}	
int main()
	{
		int k,l,t,n,S[101][101],M[101][101],i,j;
		double ans;
		scanf("%d",&t);
		while(t--)
			{
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&S[i][j]);
						M[i][j]=S[i][j];
					}
				}
				for(i=n-2;i>=0;i--)
				{
					M[i][n-1]+=M[i+1][n-1];
					for(j=n-2;j>i;j--)
						M[i][j]+=maxi(M[i][j+1],M[i+1][j]);
					M[n-1][j]+=M[n-1][j+1];
					for(k=n-2;k>i;k--)
						M[k][j]+=maxi(M[k+1][j],M[k][j+1]);
					M[i][i]+=maxi(M[i+1][i],M[i][i+1]);
				}
				if(M[0][0]<0)	{printf("Bad Judges\n");	continue;}
				printf("%lf\n",((double)M[0][0])/(2*(n-2)+1));
			}
		return 0;
	}