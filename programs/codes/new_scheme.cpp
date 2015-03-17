#include<iostream>
#include<cstdio>
using namespace std;
typedef long long int ll;
#define mod 1000000007
long long int i,num;
ll ans(ll n)
	{
	if(n==1)	return 0;
	else	
		{
		num=4;
		for(i=0;i<(n-1);i++)
			num*=3%mod;
		return (num-ans(n-1))%mod;
		}		
	}
int main()
	{
	ll t,n,a;
	scanf("%lld",&t);
	while(t--)
		{
		scanf("%lld",&n);
		a=ans(n);
		if(a<0)	a+=mod;
		printf("%lld\n",a);
		}
	return 0;
	}
