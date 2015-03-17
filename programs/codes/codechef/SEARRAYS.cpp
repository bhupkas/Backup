/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define MOD (LL)(1e9 + 7)

LL dp[100005];

int main()
{
	int t,n,k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		dp[0] = 1;
		for(int i = 1 ; i <= n ; i++)
		{	
			dp[i] = dp[i-1];
			if(i-k >= 0)	dp[i] = (dp[i] + dp[i-k]) % MOD;
		}
		cout << dp[n] << endl;
	}
	return 0;
}
