#include"stdio.h"
using namespace std;
#define mod 1009
typedef long long int ll;
ll f(ll x,ll a[],ll n)
{
	ll ans=0,temp=1,i;
	for(i=0;i<=n;i++)
	{
		ans=(ans%mod+((temp%mod)*(a[i]%mod)%mod))%mod;
		temp=((temp%mod)*(x))%mod;
	}
	return (ans%mod+mod)%mod;
}
int main()
{
	ll ans=0,n,m,i,a[105],temp1=0;
	scanf("%lld %lld",&n,&m);
	for(i=n;i>=0;i--)
		scanf("%lld",&a[i]);
	for(i=0;i<=m%mod;i++)
		ans=(ans+f(i,a,n)%mod)%mod;
	if((m/mod)>0)
	{
	for(i=0;i<mod;i++)
		{
		temp1=(temp1+f(i,a,n)%mod)%mod;
		}
	temp1=(temp1*(m/mod))%mod;
	}
	ans=(ans+temp1)%mod;
	printf("%lld",(ans+mod)%mod );
	return 0;
}
