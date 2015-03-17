/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define MOD (LL)(1e9 + 7)

LL A[100005];

LL modpow(LL a , LL b , LL mod)
{
	LL re = 1;
	while(b)
	{
		if(b&1)	re = (re * a) % mod;
		a = (a * a) % mod;
		b /= 2;
	}
	return re;
}

int main()
{
	LL t,n;
	cin >> t;
	LL cnt ;
	while(t--)
	{
		cnt = 0;
		cin >> n;
		for(int i = 0 ; i < n ; i++)
			cin >> A[i];
		LL mx = A[0];
		for(int i = 0 ; i < n ; i++)	mx = max(mx,A[i]);
		for(int i = 0 ; i < n ; i++)	if(mx == A[i])	cnt++;
		cout << ((modpow(2,cnt,MOD) - 1) + MOD ) % MOD << endl;
	}
	return 0;
}
