/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "map"
#include "algorithm"
#include "set"
#include "vector"
#include "string.h"
#include "string"
#include "math.h"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define MOD			1e9 + 7
#define PB(n)		push_back(n)
#define vi			vector<int>

typedef long long LL;

int main()	
	{
		int n,i,j;
		cin >> n;
		vi v(n);
		FOR(i,0,n)	cin>>v[i];
		int dp[n+1];
		dp[0]=v[0];
		if(n==1)	{cout<<v[0]<<endl;	return 0;}
		dp[1]=min(v[0],v[1]);
		FOR(i,2,n)		
		dp[i]=min(v[i],max(dp[i-1],dp[i-2]));
		cout<<dp[n-1]<<endl;
		return 0;
	}