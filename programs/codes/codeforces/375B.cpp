/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int dp[5005][5005];
char str[5005][5005];

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i = 0 ; i < n ; i++)	scanf("%s",str[i]);
	for(int i = 0 ; i < n ; i++)
	{
		dp[i][0] = (str[i][0] - '0');
		for(int j = 1 ; j < m ; j++)
		{
			if(str[i][j] == '1')	dp[i][j] = dp[i][j-1] + 1;
			else			dp[i][j] = 0;
		}
	}
	int ans = -1;
	for(int i = 0 ; i < m ; i++)
	{
		vector<int> v;
		v.clear();
		for(int j = 0 ; j < n ; j++)	v.push_back(dp[j][i]);
		sort(v.begin(),v.end());
		reverse(v.begin() , v.end());
		for(int j = 0 ; j < n ; j++)	ans = max(ans , v[j] * (j + 1));	
	}
	cout << ans << endl;
	return 0;
}
