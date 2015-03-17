/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

/* this function calculates (a*b)%c taking into account that a*b might overflow */
long long mulmod(long long a,long long b,long long c)
{
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

LL modpow (LL a, LL b, LL mod)
{
    LL res = 1;
    while (b)
    {
        if (b & 1) res = mulmod(res,a,mod);
        a = mulmod(a,a,mod);
        b >>= 1;
    }

    return res;
}

int main()
{
	LL N,T,B;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&N,&B);
				
	}
	return 0;
}
