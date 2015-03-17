/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define MOD (long long)(1e9) + 7LL

typedef long long LL;

LL modpow(LL a, LL b , LL mod)
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
	LL n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		LL re = modpow(2LL,n,MOD);
		re = re - 1;
		if(re < 0)	re += MOD;
		cout << re << endl;
	}
	return 0;
}