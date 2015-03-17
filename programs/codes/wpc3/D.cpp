/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

bool P[1000006];

vector < LL > p;

void pre()
{
	for(int i = 0 ; i < 1000006 ; i++)	P[i] = true;
	P[0] = P[1] = false;
	for(int i = 2 ; i * i < 1000006 ; i++)
	{
		if(P[i])
		{
			for(int j = i ; j <= 1000006 / i ; j++)	P[i*j] = false;
		}
	}
	for(int i = 2 ; i < 1000006 ; i++)	if(P[i])	p.push_back(i);
}

LL fun(LL num)
{
	if(num <= 1000000LL  && P[num])	return 1LL;
	LL n1 = num;
	LL cnt , val;
	cnt = val = 0; 
	for(int i = 0 ; (LL)(p[i]) * (LL)(p[i]) <= num ; i++)
	{
		if(num % (LL)p[i] == 0)	
		{
			val += p[i];
			cnt++;
			while(num % (LL)p[i] == 0)	num /= (LL)p[i];	
		}
	}
	if(num == n1)	return 1LL;
	if(num != 1)	val += num , cnt++;
	return fun(val) + cnt;
}

int main()
{
	int t;
	LL n;
	pre();
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",fun(n));
	}
}
