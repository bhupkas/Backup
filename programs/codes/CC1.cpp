/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int main()
{
	int p;
	scanf("%d",&p);
	while(p--)
	{
		LL n,m,k;
		scanf("%lld %lld %lld",&n,&k,&m);
		LL val = n;
		int t = 0;
		LL po = k;
		while(val <= m)
		{
			t++;
			if((LL)3e19 / po < n)	break;
			val = n * po;
			if((LL)3e19 / po < k)	break;
			po = po * k;
		}
		printf("%d\n",t-1);
	}
	return 0;
}
