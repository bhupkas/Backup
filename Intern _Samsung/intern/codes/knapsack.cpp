/* bhupkas */

/* 0-1 knapsack problem */

#include "stdio.h"
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define MAX 			2005
#define vi				vector<int>
#define PB 				push_back

int dp[MAX+5][MAX+5];

int main()
	{
		int s,n,i,j;
		cin>>s>>n;
		vi weight(n+5);
		vi cost(n+5);
		weight[0]=cost[0]=0;
		FOR(i,1,n+1)		cin>>weight[i]>>cost[i];
		FOR(i,0,n+1)	dp[i][0]=0;
		FOR(i,0,s+1)	dp[0][i]=0;
		FOR(i,1,n+1)
			{
				FOR(j,1,s+1)
					{
						if(weight[i]>j)	dp[i][j]=dp[i-1][j];
						else			dp[i][j]=max(dp[i-1][j],cost[i]+dp[i-1][j-weight[i]]);
					}
			}
		/*FOR(i,0,n+1)
			{
				FOR(j,0,s+1)
					cout<<dp[i][j]<<" ";
				cout<<endl;
			}*/
		cout<<dp[n][s]<<endl;
		return 0;
	}