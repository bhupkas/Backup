/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

#define MOD (LL)(1e9 + 7)

int A[200005];

LL ans[200005][101];

int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i = 0 ; i < n ; ++i)	scanf("%d",&A[i]);
		for(int i = 0 ; i < 100 ; ++i)	ans[0][i] = 1LL;
		for(int i = 1 ; i < n ; ++i)
		{
			for(int j = 0 ; j < 100 ; ++j)
			{
				ans[i][j] = 
			}
		}
	}
	
	return 0;
}
