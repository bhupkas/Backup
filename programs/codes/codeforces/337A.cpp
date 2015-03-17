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
#define INF			(LL)(1e9+7)

void pre()
	{

	}

int main()
	{
		pre();
		LL i,j,cnt=0,re=1,ans,te,m,n;
		cin>>n>>m;
		vll v(m);
		FOR(i,0,m)	cin>>v[i];
		so(v);
		re=100000000;
		FOR(i,0,m-n+1)
			re=min(re,v[i+n-1]-v[i]);
		cout<<re<<endl;
		return 0;
	}