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

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define LL			long long 
#define PB			push_back
#define PP			pair<int,int>
#define PPL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)			sort(v.begin(),v.end())
#define MOD			(LL)(1e9+7)
#define INF			(LL)(1e9+7)

void pre()
	{
	}

int main()
	{
		pre();
		LL n,i,j,ans=0,cnt=0,co=0,re,te;
		cin>>n;
		vector<LL> v;
		set<LL> ss;
		set<LL>::iterator it;
		i=1;
		while(i<=(LL)(1e17))
			{
				ss.I(i);
				i*=3;
			}
		ss.I(i);
		it=ss.find(n);
		if(it!=ss.end())
			{
				cout<<1<<endl;
				return 0;
			}
		for(it=ss.begin();it!=ss.end();it++)
			if(n%(*it) != 0)	break;
		cout<<(n/(*it))+1<<endl;
		return 0;
	}
