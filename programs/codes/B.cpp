/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

LL dp[1000006];

const LL INF = (LL)(1e9 + 7);

void pre()
{
	dp[0] = 0LL;
	dp[1] = 1LL;
	dp[2] = 2LL;
	for(int i = 3 ; i < 1000005 ; ++i)
		dp[i] =(dp[i-2] + dp[i-1]) % INF; 
}

int main()
{
	pre();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}
