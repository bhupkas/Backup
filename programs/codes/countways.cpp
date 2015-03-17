#include"stdio.h"
#define mod 1000000007
using namespace std;
typedef long long int ll;
ll In[800010];
void inverseArray() 
	{
	    In[1] = 1;
	    for(int i = 2; i <= 800009; i++) 

	        In[i] = (-(mod/i)*In[mod%i])%mod+mod;
	}
ll function(ll i,ll j)
{
	ll ans,k,l;
	ans=1;
	if(i==0||j==0)	return 1;
	for(k=1;k<=j;k++)
		ans=((ans*(i+k)%mod)*(In[k]))%mod;
	return (ans+mod)%mod;
}
int main()
{
	ll i,j,value,r,n,m,a,b,coeff,loss;
	scanf("%lld",&r);
	inverseArray();
	while(r--)
	{
		scanf("%lld %lld %lld %lld",&n,&m,&a,&b);
		value=function(n,m)%mod;
		coeff=function(m-b,a-1)%mod;
		loss=function(b-1,n-a+1)%mod;
		for(i=1;i<=a;i++)
		{
			value=(value-(coeff*loss)%mod)%mod;
			value=(value+mod)%mod;
			coeff=((coeff*(a-i)%mod)*In[m-b+a-i])%mod;
			loss=((loss*(b+n-a+i)%mod)*In[n-a+i+1])%mod;
		}
		printf("%lld\n",(value+mod)%mod);
	}
	return 0;
}