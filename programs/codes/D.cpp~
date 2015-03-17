/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int A[1000006];

void pre()
{
	for(int i = 0 ; i < 1000005 ; ++i)	A[i] = i;
	for(int i = 2 ; i * i < 1000005 ; ++i)
	{
		if(A[i] == i)
		{
			for(int j = i ; j <= 1000005 / i ; ++j)	A[i*j] = min(A[i*j],i);
		}
	}	
}

int main()
{
	pre();
	int t;
	int n,k;
	cin >> t;
	long long re = 0;
	while(t--)
	{
		re = 0;
		cin >> n >> k;
		for(int i = 0 ; i < n - 1; ++i)
		{
			re += (long long)A[k];
			k /= A[k];
		}
		re += (long long)k;
		printf("%lld.000000\n",re);
	}
	return 0;
}
