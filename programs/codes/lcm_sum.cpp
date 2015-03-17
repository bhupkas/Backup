#include"stdio.h"
using namespace std;
#define MOD 1e9+7
typedef long long int LL;
LL mi(LL a,LL b)
	{
		if(a<b)	return a;
		return b;
	}
LL ma(LL a,LL b)
	{
		if(a>b)	return a;
		return b;
	}
LL gcd(LL a,LL b)
	{
		if(b==0)	return a;
		return gcd(b,a%b);
	}
LL lcm(LL a,LL b)
	{
		return (a*b)/(gcd(ma(a,b),mi(a,b)));
	}
int main()
	{
		LL i,j,count=0,F[20];
		for(i=1;i<20;i++)
			{
				count=0;
				for(j=1;j<=i;j++)
				{
					count+=lcm(j,i);
				}
				F[i]=count;
			}
		for(i=1;i<20;i++)
			printf("%lld\n",F[i] );
		return 0;
	}