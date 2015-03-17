#include"stdio.h"
using namespace std;
typedef long long int LL;
LL D[10000042];
#define MOD 10000009LL
void pre()
    {
        D[0]=0;
        D[1]=0;
        D[2]=1;
        D[3]=2;
        LL i;
        for(i=4;i<10000042;i++)
            {
                D[i]=((i-1)*((D[i-1]+D[i-2])%MOD))%MOD;
            }
    }
int main()
	{
		LL t,n,ans,temp,i,mul,n1;
		pre();
		scanf("%lld",&t);
		while(t--)
			{
				scanf("%lld",&n);
				if(n<=2)	{printf("0\n");	continue;}
				if(n<10000009)	{ans=((n%MOD)*D[n-1])%MOD;	printf("%lld\n",(ans+MOD)%MOD);	continue;}
				else
				{
					if(!n&1)	temp=(-1*D[MOD-1]+MOD)%MOD;
					else	temp=D[MOD-1];
					printf("%lld\n",(n%MOD*temp)%MOD);	continue;
				}
			}
		return 0;
	}