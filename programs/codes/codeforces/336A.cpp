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
		LL i,j,x,y,n,cnt=0,ans=1,co=0,m,te;
		vll v;
		cin>>x>>y;
		te=abs(x)+abs(y);
		if(x<0)
			{
				if(y>0)	cout<<-1*te<<" "<<0<<" "<<0<<" "<<te<<endl;
				else	cout<<-1*te<<" "<<0<<" "<<0<<" "<<-1*te<<endl;
			}
		else
		{
			if(y>0)	cout<<0<<" "<<te<<" "<<te<<" "<<0<<endl;
			else 	cout<<0<<" "<<-1*te<<" "<<te<<" "<<0<<endl;
		}
			
		return 0;
	}