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
#define MP 			make_pair

LL n,m,temp,te,ans=1,co=0,cnt=0;
vll v;

void pre()
	{
		LL i,j;
	}

bool function(PLL p1,PLL p2)
	{
		if(p1.first==p2.first)	
			return p1.second<p2.second;
		return p1.first<p2.first;
	}

int main()
	{
		pre();
		cin>>n;
		LL i,j,xmin=(LL)1e10,ymin=(LL)1e10,xmax=(LL)(-1e10),ymax=(LL)(-1e10);
		vll x1(n),y1(n),x2(n),y2(n);
		vector<PLL> X(n),Y(n);
		FOR(i,0,n)
			{
				cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
				X.PB(MP(x1[i],x2[i]));
				Y.PB(MP(y1[i],y2[i]));
				xmin=min(xmin,x1[i]);
				xmin=min(xmin,x2[i]);
				ymin=min(ymin,y1[i]);
				ymin=min(ymin,y2[i]);
				xmax=max(xmax,x1[i]);
				xmax=max(xmax,x2[i]);
				ymax=max(ymax,y1[i]);
				ymax=max(ymax,y2[i]);
			}
		sort(X.begin(),X.end(),function);
		sort(Y.begin(),Y.end(),function);
		FOR(i,0,n)
			{
				
			}
		return 0;
	}