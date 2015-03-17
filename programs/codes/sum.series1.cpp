#include"stdio.h"
using namespace std;
#define mod 1009
typedef int ll;
ll function(ll x,ll a[],ll n)
{
	ll ans=0,temp=1,i;
	for(i=0;i<=n;i++)
	{
		ans=(ans%mod+((temp%mod)*(a[i]%mod)%mod))%mod;
		temp=((temp%mod)*(x%mod))%mod;
	}
	return (ans+mod)%mod;
}
int main()
{
	ll ans=0,n,m,i,a[105],temp1=0;
	scanf("%d %d",&n,&m);
	for(i=n;i>=0;i--)
		scanf("%d",&a[i]);
	for(i=0;i<=m%1009;i++)
		ans=(ans+function(i,a,n)%mod)%mod;
	if(m/1009)
	{
	for(i=0;i<1009;i++)
		{
		temp1=(temp1+function(i,a,n)%mod)%mod;
		}
	temp1=(temp1*(m/1009))%mod;
	}
	ans=(ans+temp1)%mod;
	printf("%d\n",(ans+mod)%mod );
	return 0;
}