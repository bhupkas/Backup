/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define MOD (long long)((1e9) + 7LL)

typedef long long LL;
typedef unsigned long long ULL;

LL modpow(LL a, ULL b , LL mod)
{
	LL re = 1;
	while(b)
	{
		if(b&1)	re = (re * a) % mod;
		a = (a * a)%mod;
		b /= 2;
	}
	return re;
}

int main()
{
	int t;
	int n;
	scanf("%d",&t);
	LL ans = 1;
	ULL d;
	while(t--)
	{
		ans = 1;
		d = 1;
		scanf("%d",&n);
		while(n)	
		{
			ans = (ans * modpow(2,(ULL)d*(n&1),MOD)) % MOD;
			n /= 2;
			d = d * (ULL)10;
		}
		ans = (ans * ans) %MOD; 
		printf("%lld\n",ans);
	}
	return 0;
}