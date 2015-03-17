#include"iostream"
#include"stdio.h"
#include"algorithm"
using namespace std;
typedef long long int LL;
#define MOD 1000000007LL
LL A[100005];
LL po(LL a,LL b)
	{
	if(b==0)	return 1;
	LL re;
	re = po(a,b/2)%MOD;
	LL temp=(re*re)%MOD;
	if(b&1)	return (temp*a)%MOD;
	return 	temp%MOD;
	}
LL inv(LL a)
	{
	return po(a,MOD-2)%MOD;
	}
LL HCF(LL a,LL b)
	{
	LL temp;
	if(b>a)	
		{
		temp=a;
		a=b;
		b=temp;
		}		
	if(b==0)	return a;
	return HCF(b,a%b);
	}
LL LCM(LL a,LL b)
	{
	LL te=HCF(a,b);
	LL re=((a%MOD)*(b%MOD))%MOD;
	re=(re*(inv(te)))%MOD;
	return re%MOD;
	}
void pre1()
	{
	LL LCC=1;
	LL i;
	for(i=1;i<100005;i++)
		{
		LCC=(LCM(LCC,i+1))%MOD;
		A[i]=LCC;
		}
	}
int main()
	{
	pre1();
	LL t,n,i,re;
	scanf("%lld",&t);
	while(t--)
		{
		scanf("%lld",&n);
		re=(A[n]*(inv(n+1)))%MOD;
		printf("%lld\n",(re+MOD)%MOD);
		}
	return 0;
	}
