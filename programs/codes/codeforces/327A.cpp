/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "string"
#include "algorithm"
#include "math.h"
#include "vector"
#include "set"
#include "map"
#include "deque"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL			long long 
#define PB			push_back
#define PP			pair<int,int>
#define PPL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)		sort(v.begin(),v.end())
#define MOD			(LL)(1e9+7)

LL n,i,j,ans=-1,co=0,k,cnt=0,te,m;

void pre()
	{

	}

int main()
	{
		pre();
		cin>> n;
		vll v (n);
		FOR(i,0,n)	cin>>v[i];
		LL dp[n+2];
		FOR(i,0,n+2)	dp[i]=0;
		if(v[0]==0)	dp[0]=1;
		else		dp[0]=0;
		FOR(i,1,n)	
			{
				if(v[i]==0)	dp[i]=dp[i-1]+1;
				else		dp[i]=dp[i-1];
			}
		FOR(i,0,n)
			{
				FOR(j,i,n)
					{

						te=0;
						for(k=0;k<i;k++)	if(v[k]==1)	te++;
						for(k=i;k<=j;k++)	if(v[k]==0)	te++;
						for(k=j+1;k<n;k++)	if(v[k]==1)	te++;
						ans=max(ans,te);
					}
			}
		cout<<ans<<endl;	
		return 0;
	}