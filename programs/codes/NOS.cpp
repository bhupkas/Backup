#include<cstdio>
#define mod 1000000007  
using namespace std;
typedef long long int ll;
ll function(ll a)
	{
	if(a<2)	return 0;
	if(a%2==0)	return (((a/2)%mod)*((a-1)%mod));
	return (((a)%mod)*(((a-1)/2)%mod));
	}
int main()
	{
	ll ans,i,t,min_a,min_b,min_c,max_a,max_b,max_c,N,n;
	scanf("%lld",&t);
	while(t--)
		{
		ans=0;
		scanf("%lld",&N);
		scanf("%lld %lld",&min_a,&max_a);
		scanf("%lld %lld",&min_b,&max_b);
		scanf("%lld %lld",&min_c,&max_c);
		max_a=max_a-min_a;
		max_b=max_b-min_b;
		max_c=max_c-min_c;
		n=N-min_a-min_b-min_c;
		ans=(function(n+2)-function(n-max_a+1)-function(n-max_b+1)-function(n-max_c+1)+function(n-max_a-max_b)+function(n-max_b-max_c)+function(n-max_c-max_a)-function(n-max_a-max_b-max_c-1))%mod;
		printf("%lld\n",(ans+mod)%mod);
		}
	return 0;
	}
