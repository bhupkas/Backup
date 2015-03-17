#include <bits/stdc++.h>

using namespace std;

const int N = 1005;
const int M = 2005;
const long long mod = (long long)(1e9 + 7);

long long dp[N][M];

int main ()
{
	int n, a[N], q, S;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	memset (dp, 0, sizeof (dp));
	for (int i = 0; i <= a[0]; i++)
		dp[1][i] = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 0; j < M; j++)
			for (int k = 0; k <= a[i]; k++)
				dp[i + 1][j] = (dp[i+1][j] + dp[i][j - k]) % mod;

	cin >> q;
	int x;
	for (int i = 0; i < q; i++)
	{
		cin >> x;
		cout << dp[n][x] << endl;
	}
}
