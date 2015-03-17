/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define MOD (LL)(1e9 + 7)

LL inv[100005];
LL F[100005];
bool P[100005];
vector < LL > p;

map < LL , LL > mp;
map < LL , LL > :: iterator it;

LL modpow(LL a, LL b, LL mod)
{
	LL re = 1;
	while(b)
	{	
		if(b & 1)	re = (re * a) % mod;
		a = (a * a) % mod;
		b /= 2;
	}
	return re;
}

void pre()
{
	LL m = MOD;
	F[0] = F[1] = 1;
	for(int i = 2 ; i < 100001 ; i++)	F[i] = (i * F[i - 1]) % m;
	for(int i = 0 ; i < 100001 ; i++)	P[i] = true;
	for (LL i = 0; i < 100005; i++) 	inv[i] = modpow (F[i], m- 2, m);
	P[0] = P[1] = false;
	for(int i = 2 ; i * i < 100001 ; i++)	if(P[i])	for(int j = i ; j <= 100001/i ; j++)	P[i*j] = false;
	for(int i = 2 ; i < 100001 ; i++)	if(P[i])	p.push_back(i);
}

void fun(LL num)
{	
	for(LL i = 0 ; p[i] * p[i] <= num ; i++)
	{	
		if(num % p[i] == 0)	
		{
			while(num % p[i] == 0)
			{
				num /= p[i];
				mp[p[i]]++;
			}
		}
	}
	if(num != 1)	mp[num]++;
}

LL comb (LL n, LL r) 
{
    if (n < 0 || r < 0) return 0;
    if (n < r) return 0;
    LL ans = F[n];
    ans = (ans * inv[n - r]) % MOD;
    ans = (ans * inv[r]) % MOD;

    return ans;
}

int main()
{	
	pre();
	LL n;
	cin >> n;
	vector < LL > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i] , fun(v[i]);
	LL ans = 1;
	LL k;
	for(it = mp.begin() ; it != mp.end() ; it++)
	{
		LL K = (*it).second;
		/*LL temp = 0;
		for (int k = 0; k <= K; k++) 
		{
		    temp += comb (k + n - 1, n - 1);
		    temp %= MOD;
		}*/
		ans = (ans * comb(n+K-1,K)) % MOD;
 	}
 	cout << ans << endl;	
}
