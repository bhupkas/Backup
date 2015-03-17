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
#define PI			pair<int,int>
#define PLL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)		sort(v.begin(),v.end())
#define MOD			(LL)(1e9+7)

LL n,m,temp,te,co=0,cnt=0;
vll v;

void pre()
	{
		LL i,j;
	}

LL fun(LL m)
	{
		if(m&1)	return (m*(m-1))/2;
		return m/2 + fun(m/2);
	}

int main()
	{
		pre();
		LL i,j,foo,n1,foo1=0;
		cin>>n;
		vll ans;
		temp=(LL)(sqrt(n));
		i=0;
		FOR(i,2,100)
			cout<<i<<" "<<fun(i)<<endl;
		return 0;
	}