#include<cstdio>
#include<algorithm>
typedef long long int ll;
using namespace std;
ll ma(ll a,ll b)
	{
	if(a>b)	return a;
	else		return b;
	}
bool f(ll a,ll b)
	{
	return a<b;
	}
ll bs(ll A[],ll n,ll val)
{
	ll lo=0,hi=n-1,mid;
	while(lo<hi-1)
	{
		mid = (lo + hi)/2;
		if (A[mid] <= val)
			lo=mid;
		else
			hi=mid-1;
	}
	if (hi>=0 and A[hi]<=val)
		return hi;
	if (A[lo]<=val)
		return lo;
	return -1;
}
int main()
	{
	ll n,i,a,b,c,temp,t,ans,I,k;
	scanf("%lld",&t);
	ll A[20005];
	for(k=1;k<=t;k++)
		{
		ans=0;		
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			{
			scanf("%lld:%lld:%lld",&a,&b,&c);
			temp=a*3600+b*60+c;
			A[i]=temp;
			}
		scanf("%lld",&I);
		if(n==0)	{printf("Case %lld: 0\n",k);	continue;}
		if(n==1)	{printf("Case %lld: 1\n",k);	continue;}
		sort(A,A+n,f);
		for(i=0;i<n;i++)
			{
				temp=bs(A,n,A[i]+I-1);
				if(temp>=0)		
					ans=ma(ans,temp-i+1);
			}
		printf("Case %lld: %lld\n",k,ans);		
		}
	return 0;
	}
