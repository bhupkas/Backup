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

bool check(LL x1,LL y1,LL x2,LL y2,LL x3,LL y3)
	{	
		PPL s1,s2,s3;
		s1.first=y2-y1;
		s1.second=x2-x1;
		s2.first=y2-y3;
		s2.second=x2-x3;
		s3.first=y1-y3;
		s3.second=x1-x3;
		if(s1.second==0)
			{
				if(s2.first==0 || s3.first==0)	return true;
			}
		if(s2.second==0)
			{
				if(s3.first==0 || s1.first==0)	return true;	
			}
		if(s3.second==0)
			{
				if(s2.first==0 || s1.first==0)	return true;
			}
		if((s1.first*s2.first)== -1*(s1.second)*(s2.second))	return true;
		if((s1.first*s3.first)==-1*(s1.second)*(s3.second))	return true;
		if((s2.first*s3.first)==-1*(s3.second)*(s2.second))	return true;
		return false;
	}

int main()
	{
		pre();
		LL i,j,n,te,m,t,re=1,cnt=0,x1,y1,x2,y2,x3,y3;
		cin>>n;
		while(n--)
			{
				cin>>x1>>y1>>x2>>y2>>x3>>y3;
				if(check(x1,y1,x2,y2,x3,y3))	cnt++;
			}
		cout<<cnt<<endl;
		return 0;
	}