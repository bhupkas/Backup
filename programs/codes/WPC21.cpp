#include"stdio.h"
#include"iostream"
using namespace std;
#define MOD 98765431
long long po(long long a,long long b)
	{
		if(b==0)	return 1;
		if(b==1)	return a%MOD;
		long long re=po(a,b/2)%MOD;
		if(b&1)
		{
			return ((re*re)%MOD*a)%MOD;
		}
		return (re*re)%MOD;
	}
int main()
	{
		long long N[50005],i,j,sum=0,t,n;
		cin>>n>>t;
		for(i=0;i<n;i++)	{cin>>N[i];	sum+=N[i];}
		long long temp;
		if(n==1)	{printf("0\n");	return 0;}
		long long temp1;
		if(t==1)
			{
				for(i=0;i<n;i++)
				{
					printf("%lld\n",sum-N[i]);
				}
				return 0;
			}
		temp1=po(n,MOD-2)%MOD;
		temp=po(n-1,t);
		temp--;
		temp=(temp+MOD)%MOD;
		temp=((temp*sum)%MOD);
		temp= (temp*temp1)%MOD; 
		if(t&1)
		{
			for(i=0;i<n;i++)
			{
				printf("%lld\n",(temp-N[i]+MOD)%MOD);
			}
		}
		else
		{
			for(i=0;i<n;i++)
			{
				printf("%lld\n",(temp+N[i]+MOD)%MOD);
			}
		}
		return 0;
	}