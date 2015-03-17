#include<cstdio>
#include<vector>
typedef long long int ll;
using namespace std;
ll ab(ll a)
	{
	if(a<0)	return -1*a;
	return a;
	}
ll value(ll k,vector<ll> h,vector<ll> c)
	{
	ll ans=0,i;
	for(i=0;i<h.size();i++)
		ans+=(ab(k-h.at(i)))*(c.at(i));
	return ans;
	}
int main()
	{
	ll lo,hi,t,n,i,temp,mid,min,max,mm,lm,rm;
	vector<ll> h;
	vector<ll> c;
	scanf("%lld",&t);
	while(t--)
		{
		min=1000000000;max=0;
		h.clear();
		c.clear();
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			{
			scanf("%lld",&temp);
			if(temp<min)	min=temp;
			if(temp>max)	max=temp;
			h.push_back(temp);
			}
		for(i=0;i<n;i++)
			{
			scanf("%lld",&temp);
			c.push_back(temp);
			}
		
		if(n==0||n==1)	{printf("0\n");	continue;}
		if(n==2)
			{
			if(c.at(0)<c.at(1))
				{
				printf("%lld\n",ab(h.at(1)-h.at(0))*c.at(0));	continue;
				}
			else
				{
				printf("%lld\n",ab(h.at(1)-h.at(0))*c.at(1));	continue;
				}
			}
				
		lo=min;hi=max;
		while(lo<hi)
			{
			mid=(lo+hi)/2;
			mm=value(mid,h,c);
			lm=value(mid-1,h,c);
			rm=value(mid+1,h,c);
			if(lm>mm&&rm>mm)	break;
			else if(lm>=mm)	lo=mid+1;
			else			hi=mid-1;
			}
		if(lo==hi)	printf("%lld\n",value(lo,h,c));
		else		printf("%lld\n",value(mid,h,c));
		}
	return 0;
	}
