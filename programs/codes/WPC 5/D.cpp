/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

const int mod = (LL)(1e9 + 7);

LL modpow (LL a, LL b, LL mod)
{
    LL res = 1;
    while (b)
    {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }

    return res;
}

int main()
{
	int t;
	LL n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		if(k == 1)
		{
			printf("0\n");
			continue;
		}
		else if(n == 1)
		{
			printf("%lld\n",k-1);
			continue;
		}
		else
		{
			printf("%lld\n",(modpow(k,n-1,mod) + 1) % mod);
		}
	}
	return 0;
}

