#include"stdio.h"
#include"algorithm"
using namespace std;
typedef long long int ll;
#define mod 1000000007 
int main()
	{
		ll ans,t,n,k,dp[20],j,i,A[16];
		scanf("%lld",&t);
		while(t--)
			{
				for(i=0;i<20;i++)	dp[i]=0;
				scanf("%lld",&n);
				scanf("%lld",&k);
				for(i=0;i<k;i++)	{scanf("%lld",&A[i]);	dp[A[i]]++;}
				sort(A,A+k);
				i=A[0]+1;
				while(i<=A[k-1])
				{
					j=0;
					while(i-A[j]>0&&j<k)
					{
						dp[i]=(dp[i]+dp[i-A[j]])%mod;
						j++;
					}
					printf("\n");
					i++;
				}
				if(n<=A[k-1])	{printf("%lld\n",dp[n]);	continue;}
				

			}
		return 0;
	}