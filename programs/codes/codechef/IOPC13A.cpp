/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define	INF (LL)(1e18)

LL D[305][305];

LL dp[305][305];

bool stations[305];

int main()
{
	LL n,m,p,c;
	scanf("%lld %lld %lld %lld",&n,&m,&p,&c);
	LL temp;
	memset(stations,false,sizeof(stations));
	for(LL i = 0 ; i < p ; i++)	
	{
		scanf("%lld",&temp);
		stations[temp] = true;
	}
	for(LL i = 0 ; i < n ; i++)	for(LL j = 0 ; j < n ; j++)	D[i][j] = INF;
	LL x,y,t;
	for(LL i = 0 ; i < m ; i++)
	{	
		scanf("%lld %lld %lld",&x,&y,&t);
		D[x][y] = D[y][x] = t;
	}
	if(!stations[0])
	{	
		printf("-1\n");
		return 0;	
	}	
	for(LL k = 0 ; k < n ; k++)
		for(LL i = 0 ; i < n ; i++)
			for(LL j = 0 ; j < n ; j++)
				D[i][j] = min(D[i][j] , D[i][k] + D[k][j]);
	for(LL i = 0 ; i < n ; i++)	D[i][i] = 0;
	for(LL i = 0 ; i < n ; i++)	for(LL j = 0 ; j < n ; j++)	dp[i][j] = INF;
	for(LL i = 0 ; i < n ; i++)
	{
		for(LL j = 0 ; j < n ; j++)
		{
			if(stations[i] && stations[j] && D[i][j] <= c)	dp[i][j] = D[i][j];
			if(i == j)	dp[i][j] = 0LL;
		}
	}
	for(LL k = 0 ; k < n ; k++)
		for(LL i = 0 ; i < n ; i++)
			for(LL j = 0 ; j < n ; j++)
				dp[i][j] = min(dp[i][j] , dp[i][k] + dp[k][j]);
	LL re = INF;
	for(LL i = 0 ; i < n ; i++)	
	{
		if(D[i][n-1] <= c)	re = min(re,D[i][n-1] + dp[0][i]);
	}
	if(re == INF)	printf("-1\n");
	else		printf("%lld\n",re);
	return 0;
}
