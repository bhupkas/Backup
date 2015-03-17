/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

const LL MOD = (LL)(1e9 + 7);

LL A[2004][2004];

vector < LL > F[2004];

void pre()
{
	for(int j = 1 ; j <= 2000 ; ++j)
		for(int i=1;i<=j;++i)
			if(j%i==0) F[j].push_back(i);
}

int main()
{
	pre();
	LL n,k;
	cin >> n >> k;
	for(int i = 1 ; i <= n ; ++i)	A[1][i] = 1;
	for(int i = 2; i <= k ; ++i)
	{
		for(int j = 1 ; j <= n ; ++j)
		{
			for(int l=0;l<F[j].size();++l)
				A[i][j] += A[i-1][F[j][l]],
				A[i][j] %= MOD;				
		}
	}
	LL re = 0;
	for(int i=1;i<=n;++i)	re = (re + A[k][i] )%MOD;
	cout << re << endl;
	return 0;
}
