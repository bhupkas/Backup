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
		LL i,j,n,cnt=0,k,ans=1,co=0,m,te;
		cin>>n;
		bool ff=false;
		vll v(n);
		FOR(i,0,n)	{cin>>v[i];	if(v[i]==1)	ff=true;}
		bool B[35];
		vll A[35];
		FOR(i,0,n)
			{
				FOR(j,0,32)
					{
						if(v[i] & (1<<j))	A[j].PB(v[i]);
					}
			}
		bool foo;
		for(i=31;i>0;i--)
			{
				if((int)A[i].size()==0)	continue;
				FOR(j,0,i)
						{
							FOR(k,0,A[i].size())
								{
									if(!(A[i][k] & (1<<j)))	break;
								}
							if(k==A[i].size())	break;
						}
				if(j==i)	break;	
			}
		if(i==-1)	
			{
				cout<<-1<<endl;
				return 0;
			}
		
		cout<<A[i].size()<<endl;
		FOR(j,0,A[i].size())
			cout<<A[i][j]<<" ";
		cout<<endl;
		return 0;
	}