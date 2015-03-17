#include<cstdio>
#include<cstring>
#define mod 1000000007
typedef long long int ll;
using namespace std;
ll mi(ll a,ll b)
{
	if(a<b) return a;
	return b;
}
ll compute(ll c,ll d,ll e)
{
	if(c==0&&(d==0||e==0)) return 1;
	if(c<=0) return 0;
	if(d<0||e<0) return 0;
	if(d>c||e>c) return 0;
	if(d==0||e==0) return 1;
	if(d==c-1||e==c-1) return c;
	if(d>e) d=e;
	ll i,re=1;
	for(i=1;i<=d;i++)
		re=((re*(c-d+i))/i)%mod;
	return re;
}
int main()
{
	ll ans,t,a,b,i,l,ans1,ans2;
	char S[5001];
	scanf("%lld",&t);
	getchar();
	while(t--)
	{
		ans=0;
		a=b=0;
		gets(S);
		l=strlen(S);
		for(i=0;i<l;i++)
		{
			if(S[i]=='4') a++;
			else b++;
		}
		for(i=0;i<=a&&i<=b;i++)
		{
			
			ans1=(compute(a,i,a-i)*compute(b-1,i,b-i-1))%mod;
			ans2=compute(a-1,i,a-1-i)*compute(b,i,b-i)%mod;
			ans=((ans%mod)+(ans1)+(ans2)%mod);
			if(mi(a-i,b-i))
				ans-=(compute(a-1,i,a-i-1)*compute(b-1,i,b-i-1))%mod;
		}
		printf("%lld\n",(ans+mod)%mod);
	}
	return 0;
}
