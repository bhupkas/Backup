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
#define MP			make_pair

void pre()
	{
	}

int main()
	{
		pre();
		LL n,i,j,ans=0,cnt=0,co=0,re,te;
		map<LL,LL>	mymap1,mymap2,mymap3;
		map<LL,LL>::iterator it;
		vector<LL> v1,v2;
		vector<PPL> v;
		LL X[10],Y[10];
		FOR(i,0,8)
			cin>>X[i]>>Y[i];
		FOR(i,0,8)
			{
				mymap1[X[i]]=Y[i];
				mymap2[Y[i]]=X[i];
			}
		if((int)mymap1.size() != 3 || (int)mymap2.size() != 3)	{cout<<"ugly"<<endl;	return 0;}
		for(it=mymap1.begin();it!=mymap1.end();it++)
			v1.PB((*it).first);
		for(it=mymap2.begin();it!=mymap2.end();it++)
			v2.PB((*it).first);
		set<PPL> ss;
		FOR(i,0,8)	ss.I(MP(X[i],Y[i]));
		if(ss.size()!=8)	{cout<<"ugly"<<endl;	return 0;}
		so(v1);
		so(v2);
		LL xav,yav;
		FOR(i,0,8)
			v.PB(MP(X[i],Y[i]));
		xav=v1[1];
		yav=v2[1];
		FOR(i,0,8)
			{
				if(xav==(v[i].first) && yav==(v[i].second))		
					{	
						cout<<"ugly"<<endl;
						return 0;
					}
			}
		cout<<"respectable"<<endl;
		return 0;
	}
