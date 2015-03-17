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
#define SLL(n)		scanf("%lld",&n)

LL k,n,i,j,sum,ans=0,co=0,cnt=0,te,m,curr,dp[105];

void pre()
	{

	}

LL factmod(LL num, LL m)
	{
		if(num==0 || num==1)	return 1;
		LL i,re=1;
		FOR(i,1,num+1)	re=(re*i)%m;
		return re;
	}

int main()
	{
		pre();
		sum=0;
		LL i,j;
		cin>>n;
		vll v(10);
		FOR(i,0,10)	
			{
				cin>>v[i];
				sum+=v[i];
			}
		if(sum>n)	{cout<<0<<endl;	return 0;}
		FOR(i,0,sum)	dp[i]=0;

		return 0;
	}