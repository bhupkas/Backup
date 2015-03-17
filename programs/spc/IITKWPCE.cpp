/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "string"
#include "assert.h"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)
#define INF					100000000

int Palin[2005][2005];
int len;
int dp[2005];
char S[2005];

int check(int l,int r)
	{
		if(Palin[l][r]!=-1)		return Palin[l][r];
		if(l==r)	return Palin[l][r]=1;
		if(l>r)		return Palin[l][r]=0;	
		if(S[l]==S[r])
			{
				if(r==l+1)	return Palin[l][r]=1;
				return Palin[l][r]=check(l+1,r-1);
			}
	}

int main()
	{
		int t,i,j;
		scanf("%d",&t);
		assert(t<=100);
		while(t--)
			{
				getchar();
				scanf("%s",S);
				len=strlen(S);
				assert(len<=2000);
				memset(Palin,-1,sizeof(Palin));
				FOR(i,0,len)	dp[i]=INF;
				dp[0]=1;
				FOR(i,1,len)
					{
						if(check(0,i)==1)			dp[i]=1;
						else						dp[i]=i+1;	
						FOR(j,1,i+1)
							{
								if(check(j,i)==1)	dp[i]=min(dp[i],dp[j-1]+1);
								else				dp[i]=min(dp[i],dp[j-1]+i-j+1);
							}
					}
				printf("%d\n",dp[len-1]);
			}
		return 0;
	}

