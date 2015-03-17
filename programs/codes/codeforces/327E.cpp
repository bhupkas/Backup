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
#define SLL(n)			scanf("%lld",&n)

LL k,n,i,j,ans=0,co=0,cnt=0,te,m;

vll v,vk,imp,temp;

void pre()
	{

	}

bool check(LL num)
	{
		if(vk.size()==0)	return true;
		if(vk.size()==1)	
			{
				if(num!=vk[0])	return true;
				return false;
			}
		else
			{
				if(num!=vk[0] && num!=vk[1])	return true;
				return false;	
			}
	}

void solve()
	{

	}

int main()
	{
		pre();
		SLL(n);
		FOR(i,0,n)	{SLL(te);	v.PB(te);}
		SLL(k);
		FOR(i,0,k)	{SLL(te);	vk.PB(te);}
		ans=1;
		FOR(i,1,n+1)
			ans=(ans*i)%MOD;
		solve();
		return 0;
	}