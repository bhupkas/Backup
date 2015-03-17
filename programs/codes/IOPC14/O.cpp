/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

bool check(LL num)
{
	bool foo = false;
	while(num)
	{
		if(num & 1LL)	foo = true;
		if(foo & !(num&1LL))	return false;
		num >>= 1;
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	LL p,q;
	while(t--)
	{
		cin >> p >> q;
		LL gc = __gcd(p,q);
		p /= gc;
		q /= gc;
		if(p > 2LL*q)	{puts("NO");	continue;}
		if(p == 1LL && check(q))	{puts("YES");	continue;}
		if(!(p & (p -1LL)) && !(q & (q+1LL)))	{puts("YES");	continue;}
		puts("NO");	
	}
	return 0;
}
