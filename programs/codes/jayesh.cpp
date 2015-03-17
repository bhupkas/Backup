#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<bitset>
#include<vector>

using namespace std;

#define INF		1000000007
#define LL		long long int
#define SI(n)		scanf("%lld",&n);
#define SC(c)		scanf("%c",&c);
#define SS(s)		scanf("%s",s);

LL power[1010];
LL modPow(LL a, LL x, LL p);
LL modInverse(LL a, LL p);
LL nCr(LL n, LL k);

int main()
{
	LL tc;
	SI(tc);
	LL a[1010];
	while(tc--)
	{
		LL n;
		SI(n);
		LL ans=0;
		power[0]=1;
		power[1]=2;
		LL i;
		for(i=0;i<n;i++)	cin>>a[0];
		for( i=2;i<n;i++)
		{
			power[i]=(power[i-1]*2)%INF;
		}
		power[n]=(power[n-1]*2)%INF;
		
		
		if(n%2==0)
		{
			LL num=((power[n]-nCr(n,n/2)%INF))%INF;
			LL den=500000004;// Mod Inverse of 2
			ans=(num*den)%INF;
		}
		else
		ans=power[n-1];
		printf("%lld\n",ans);
	}
	return 0;
}
LL modPow(LL a, LL x, LL p)
{
    //calculates a^x mod p in logarithmic time.
    LL res = 1;
    while(x > 0)
    {
        if( x % 2 != 0)
	{
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

LL modInverse(LL a, LL p)
{
    //calculates the modular multiplicative of a mod m.
    //(assuming p is prime).
    return modPow(a, p-2, p);
}
LL modBinomial(LL n, LL k, LL p) {
// calculates C(n,k) mod p (assuming p is prime).

    LL numerator = 1; // n * (n-1) * ... * (n-k+1)
    for(int i=0; i<k; i++)
    {
        numerator = (numerator * (n-i) ) % p;
    }
    
    LL denominator = 1; // k!
    for(int i=1; i<=k; i++)
    {
        denominator = (denominator * i) % p;
    }
    
    // numerator / denominator mod p.
    return ( numerator* modInverse(denominator,p) ) % p;
}
LL nCr(LL n, LL k)
{
    return modBinomial(n,k,INF);
}
