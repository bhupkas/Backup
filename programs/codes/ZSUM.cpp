#include<cstdio>
typedef long long int ll;
using namespace std;
#define mod 10000007
/*ll power(ll a,ll b)
	{
	ll result;
	if(b==0)	return 1;
	if(b==1)	return a%mod;
	result=power(a,b/2)%mod;
// Will these steps ever be reached??? - Pankaj
	if(b&1)	return ((a%mod)*(result%mod)*(result%mod))%mod;
	return 	((result%mod)*(result%mod))%mod;
	}*/
//Pankaj - your power function was wrong
ll power(ll a,ll b)
{
	ll res=1;
	ll pow=a;
	while(b)
	{
		if(b&1)
			res=( (long long)res * (long long)pow)%mod;
		pow=( (long long)pow*(long long)pow)%mod;
		b>>=1;
	}
	return res;
}
int main()
	{
	ll result,n,k,i;
	while(1)
		{
		result=0;
		scanf("%lld %lld",&n,&k);
		if(!n)	return 0;
		result=(((power(n-1,n-1)%mod+power(n-1,k)%mod)*2)%mod+power(n,k)%mod+power(n,n)%mod)%mod;
		printf("%lld\n",(result+mod)%mod);
		}
	return 0;
	}
